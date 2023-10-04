// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/UISongLineData.hpp>

namespace rivet::ddl::generated {
	UISongLineData::UISongLineData([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		LineName = serialized->get_string(LineName_type_id);
		StartTime = serialized->get_float(StartTime_type_id);
		EndTime = serialized->get_float(EndTime_type_id);
		IsSecondary = serialized->get_bool(IsSecondary_type_id); 
	}

	[[nodiscard]] auto
	UISongLineData::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	UISongLineData::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<UISongLineData> {
		if (incoming_type_id == UISongLineData::type_id) {
			return std::make_shared<UISongLineData>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated