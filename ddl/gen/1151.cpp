// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/HexapodWeaponTriggerData.hpp> 

#include <rivet/ddl/generated/WeaponHexapodChargingPrius.hpp>

namespace rivet::ddl::generated {
	WeaponHexapodChargingPrius::WeaponHexapodChargingPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): WeaponBlasterPrius(serialized) {
		ChargeTimeMax = serialized->get_float(ChargeTimeMax_type_id);
		ChargedDamageMultiplier = serialized->get_float(ChargedDamageMultiplier_type_id);
		ChargingTriggerData = serialized->unwrap_into<rivet::ddl::generated::HexapodWeaponTriggerData>(ChargingTriggerData_type_id);
		BeamActor = serialized->get_string(BeamActor_type_id); 
	}

	auto
	WeaponHexapodChargingPrius::get_type_id() const noexcept -> rivet::rivet_type_id {
		return type_id;
	}

	[[nodiscard]] auto
	WeaponHexapodChargingPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	WeaponHexapodChargingPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<WeaponHexapodChargingPrius> {
		if (incoming_type_id == WeaponHexapodChargingPrius::type_id) {
			return std::make_shared<WeaponHexapodChargingPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated