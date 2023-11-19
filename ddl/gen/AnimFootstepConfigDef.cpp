// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/AnimFootstepRemovedEventKey.hpp>
#include <rivet/ddl/generated/AnimFootstepJoint.hpp> 

#include <rivet/ddl/generated/AnimFootstepConfigDef.hpp>

namespace rivet::ddl::generated {
	AnimFootstepConfigDef::AnimFootstepConfigDef([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		Strength = serialized->get_enum<rivet::ddl::generated::x94fdc626>(Strength_type_id, rivet::ddl::generated::x94fdc626_values);
		Speed = serialized->get_enum<rivet::ddl::generated::x59a8f068>(Speed_type_id, rivet::ddl::generated::x59a8f068_values);
		FootStepJoints = serialized->unwrap_into_many<rivet::ddl::generated::AnimFootstepJoint>(FootStepJoints_type_id);
		RemovedEvents = serialized->unwrap_into_many<rivet::ddl::generated::AnimFootstepRemovedEventKey>(RemovedEvents_type_id);
		AnimPoseKeyVersion = serialized->get_string(AnimPoseKeyVersion_type_id); 
	}

	[[nodiscard]] auto
	AnimFootstepConfigDef::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	AnimFootstepConfigDef::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<AnimFootstepConfigDef> {
		if (incoming_type_id == AnimFootstepConfigDef::type_id) {
			return std::make_shared<AnimFootstepConfigDef>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated