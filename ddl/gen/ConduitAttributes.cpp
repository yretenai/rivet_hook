// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/ConduitAttributes.hpp>

namespace rivet::ddl::generated {
	ConduitAttributes::ConduitAttributes([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		Label = serialized->get_string(Label_type_id, {});
		Value = serialized->get_float(Value_type_id, 0.000000f);
		Param = serialized->get_uint32(Param_type_id, 0u); 
	}

	[[nodiscard]] auto
	ConduitAttributes::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	ConduitAttributes::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<ConduitAttributes> {
		if (incoming_type_id == ConduitAttributes::type_id) {
			return std::make_shared<ConduitAttributes>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
