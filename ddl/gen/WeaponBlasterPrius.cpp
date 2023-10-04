// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/WeaponFlyerFireballPrius.hpp>
#include <rivet/ddl/generated/WeaponHexapodChargingPrius.hpp> 

#include <rivet/ddl/generated/WeaponBlasterPrius.hpp>

namespace rivet::ddl::generated {
	WeaponBlasterPrius::WeaponBlasterPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): WeaponGamePrius(serialized) {

	}

	[[nodiscard]] auto
	WeaponBlasterPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	WeaponBlasterPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<WeaponBlasterPrius> {
		if (incoming_type_id == WeaponBlasterPrius::type_id) {
			return std::make_shared<WeaponBlasterPrius>(serialized);
		}

		auto WeaponFlyerFireballPrius_ptr = WeaponFlyerFireballPrius::from_substruct(incoming_type_id, serialized);
		if (WeaponFlyerFireballPrius_ptr != nullptr) {
			return WeaponFlyerFireballPrius_ptr;
		}

		auto WeaponHexapodChargingPrius_ptr = WeaponHexapodChargingPrius::from_substruct(incoming_type_id, serialized);
		if (WeaponHexapodChargingPrius_ptr != nullptr) {
			return WeaponHexapodChargingPrius_ptr;
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
