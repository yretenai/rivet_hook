// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/MountAbilitySpeedBrake.hpp>

namespace rivet::ddl::generated {
	MountAbilitySpeedBrake::MountAbilitySpeedBrake([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): MountAbilityBase(serialized) {
		BrakeSpeed = serialized->get_float(BrakeSpeed_type_id, 7.000000f);
		BrakeIntro = serialized->get_string(BrakeIntro_type_id, "BrakeIntro");
		BrakeLoop = serialized->get_string(BrakeLoop_type_id, "BrakeLoop");
		BrakeOutro = serialized->get_string(BrakeOutro_type_id, "BrakeOutro"); 
	}

	[[nodiscard]] auto
	MountAbilitySpeedBrake::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	MountAbilitySpeedBrake::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<MountAbilitySpeedBrake> {
		if (incoming_type_id == MountAbilitySpeedBrake::type_id) {
			return std::make_shared<MountAbilitySpeedBrake>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
