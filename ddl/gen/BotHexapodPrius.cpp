// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/BotHexapodPrius.hpp>

namespace rivet::ddl::generated {
	BotHexapodPrius::BotHexapodPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): BotPrius(serialized) {
		GunWeapon = serialized->get_string(GunWeapon_type_id, {});
		LobWeapon = serialized->get_string(LobWeapon_type_id, {});
		CameraShake = serialized->get_string(CameraShake_type_id, {});
		CameraPitchAdjustmentUp = serialized->get_float(CameraPitchAdjustmentUp_type_id, 1.000000f);
		CameraPitchAdjustmentDown = serialized->get_float(CameraPitchAdjustmentDown_type_id, 1.000000f); 
	}

	[[nodiscard]] auto
	BotHexapodPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	BotHexapodPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<BotHexapodPrius> {
		if (incoming_type_id == BotHexapodPrius::type_id) {
			return std::make_shared<BotHexapodPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
