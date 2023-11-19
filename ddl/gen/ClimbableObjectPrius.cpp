// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/ClimbableObjectPrius.hpp>

namespace rivet::ddl::generated {
	ClimbableObjectPrius::ClimbableObjectPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		ClimbType = serialized->get_enum<rivet::ddl::generated::xcfc05fff>(ClimbType_type_id, rivet::ddl::generated::xcfc05fff_values);
		AttachActor = serialized->get_uint64(AttachActor_type_id);
		LockoutHigh = serialized->get_bool(LockoutHigh_type_id);
		LockoutLow = serialized->get_bool(LockoutLow_type_id); 
	}

	[[nodiscard]] auto
	ClimbableObjectPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	ClimbableObjectPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<ClimbableObjectPrius> {
		if (incoming_type_id == ClimbableObjectPrius::type_id) {
			return std::make_shared<ClimbableObjectPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated