// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/AimAssistTargetZoneJoint.hpp>

namespace rivet::ddl::generated {
	AimAssistTargetZoneJoint::AimAssistTargetZoneJoint([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): AimAssistTargetZone(serialized) {
		AimBoxJointBottom = serialized->get_string(AimBoxJointBottom_type_id);
		AimBoxJointTop = serialized->get_string(AimBoxJointTop_type_id); 
	}

	auto
	AimAssistTargetZoneJoint::get_type_id() const noexcept -> rivet::rivet_type_id {
		return type_id;
	}

	[[nodiscard]] auto
	AimAssistTargetZoneJoint::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	AimAssistTargetZoneJoint::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<AimAssistTargetZoneJoint> {
		if (incoming_type_id == AimAssistTargetZoneJoint::type_id) {
			return std::make_shared<AimAssistTargetZoneJoint>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated