// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/LevelEconomyDataConfig.hpp>

namespace rivet::ddl::generated {
	LevelEconomyDataConfig::LevelEconomyDataConfig([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): ConfigBase(serialized) {
		BoltMultiplier = serialized->get_float(BoltMultiplier_type_id, 1.000000f);
		HeroXPMultiplier = serialized->get_float(HeroXPMultiplier_type_id, 1.000000f);
		WpnXPMultiplier = serialized->get_float(WpnXPMultiplier_type_id, 1.000000f);
		RaritaniumMultiplier = serialized->get_float(RaritaniumMultiplier_type_id, 0.000000f);
		ChallengeBoltMultiplier = serialized->get_float(ChallengeBoltMultiplier_type_id, 1.000000f);
		ChallengeHeroXPMultiplier = serialized->get_float(ChallengeHeroXPMultiplier_type_id, 1.000000f);
		ChallengeWpnXPMultiplier = serialized->get_float(ChallengeWpnXPMultiplier_type_id, 1.000000f);
		ChallengeRaritaniumMultiplier = serialized->get_float(ChallengeRaritaniumMultiplier_type_id, 0.000000f); 
	}

	[[nodiscard]] auto
	LevelEconomyDataConfig::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	LevelEconomyDataConfig::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<LevelEconomyDataConfig> {
		if (incoming_type_id == LevelEconomyDataConfig::type_id) {
			return std::make_shared<LevelEconomyDataConfig>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
