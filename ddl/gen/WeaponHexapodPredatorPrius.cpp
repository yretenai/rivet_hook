// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/WeaponHexapodPredatorPrius.hpp>

namespace rivet::ddl::generated {
	WeaponHexapodPredatorPrius::WeaponHexapodPredatorPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): WeaponPredatorPrius(serialized) {
		TargetScoreSwarmer = serialized->get_float(TargetScoreSwarmer_type_id, 1.000000f);
		TargetScoreFlyer = serialized->get_float(TargetScoreFlyer_type_id, 1.000000f);
		TargetScoreNest = serialized->get_float(TargetScoreNest_type_id, 1.000000f);
		LaunchCooldown = serialized->get_float(LaunchCooldown_type_id, 3.000000f);
		InitialLaunchCooldown = serialized->get_float(InitialLaunchCooldown_type_id, 2.000000f);
		RocketDelay = serialized->get_float(RocketDelay_type_id, 0.100000f); 
	}

	[[nodiscard]] auto
	WeaponHexapodPredatorPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	WeaponHexapodPredatorPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<WeaponHexapodPredatorPrius> {
		if (incoming_type_id == WeaponHexapodPredatorPrius::type_id) {
			return std::make_shared<WeaponHexapodPredatorPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
