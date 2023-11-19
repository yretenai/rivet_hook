// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/UI_MaterialNodeInputPortXY.hpp>

namespace rivet::ddl::generated {
	UI_MaterialNodeInputPortXY::UI_MaterialNodeInputPortXY([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		DisplayName = serialized->get_string(DisplayName_type_id);
		Values = serialized->get_string(Values_type_id);
		TestingOnly = serialized->get_bool(TestingOnly_type_id);
		IsConnected = serialized->get_bool(IsConnected_type_id);
		InternalSortOrder = serialized->get_int32(InternalSortOrder_type_id);
		UserDefinedLabels = serialized->get_bool(UserDefinedLabels_type_id);
		LinearFilter = serialized->get_bool(LinearFilter_type_id);
		Exposed = serialized->get_bool(Exposed_type_id);
		Global = serialized->get_bool(Global_type_id);
		Group = serialized->get_string(Group_type_id);
		SortOrder = serialized->get_int32(SortOrder_type_id);
		Description = serialized->get_string(Description_type_id);
		Labels = serialized->get_string(Labels_type_id);
		ShowExposed = serialized->get_bool(ShowExposed_type_id);
		ShowGlobal = serialized->get_bool(ShowGlobal_type_id);
		Minimums = serialized->get_string(Minimums_type_id);
		Maximums = serialized->get_string(Maximums_type_id);
		X = serialized->get_float(X_type_id);
		Y = serialized->get_float(Y_type_id); 
	}

	[[nodiscard]] auto
	UI_MaterialNodeInputPortXY::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	UI_MaterialNodeInputPortXY::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<UI_MaterialNodeInputPortXY> {
		if (incoming_type_id == UI_MaterialNodeInputPortXY::type_id) {
			return std::make_shared<UI_MaterialNodeInputPortXY>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated