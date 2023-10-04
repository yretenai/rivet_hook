// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/PhysicsExperimentalSoftKickableConfig.hpp>

namespace rivet::ddl::generated {
	PhysicsExperimentalSoftKickableConfig::PhysicsExperimentalSoftKickableConfig([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): ConfigBase(serialized) {
		MaxContactImpulseAtLowSpeed = serialized->get_float(MaxContactImpulseAtLowSpeed_type_id);
		LowSpeed = serialized->get_float(LowSpeed_type_id);
		MaxContactImpulseAtHighSpeed = serialized->get_float(MaxContactImpulseAtHighSpeed_type_id);
		HighSpeed = serialized->get_float(HighSpeed_type_id); 
	}

	[[nodiscard]] auto
	PhysicsExperimentalSoftKickableConfig::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	PhysicsExperimentalSoftKickableConfig::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<PhysicsExperimentalSoftKickableConfig> {
		if (incoming_type_id == PhysicsExperimentalSoftKickableConfig::type_id) {
			return std::make_shared<PhysicsExperimentalSoftKickableConfig>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
