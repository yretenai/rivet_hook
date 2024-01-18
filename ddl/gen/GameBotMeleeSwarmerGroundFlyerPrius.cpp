// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/GameBotMeleeSwarmerGroundFlyerPrius.hpp>

namespace rivet::ddl::generated {
	GameBotMeleeSwarmerGroundFlyerPrius::GameBotMeleeSwarmerGroundFlyerPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): GameBotMeleeSwarmerPrius(serialized) {
		DistToLandMin = serialized->get_float(DistToLandMin_type_id, 5.000000f);
		DistToLandMax = serialized->get_float(DistToLandMax_type_id, 10.000000f);
		PreFlyDelayMin = serialized->get_float(PreFlyDelayMin_type_id, 3.000000f);
		PreFlyDelayMax = serialized->get_float(PreFlyDelayMax_type_id, 6.000000f);
		MinDistToFly = serialized->get_float(MinDistToFly_type_id, 4.000000f);
		FlyHeightMin = serialized->get_float(FlyHeightMin_type_id, 2.000000f);
		FlyHeightMax = serialized->get_float(FlyHeightMax_type_id, 5.000000f);
		FlyEngagedHeightMin = serialized->get_float(FlyEngagedHeightMin_type_id, 1.000000f);
		FlyEngagedHeightMax = serialized->get_float(FlyEngagedHeightMax_type_id, 2.000000f);
		FlyMinionHeightMin = serialized->get_float(FlyMinionHeightMin_type_id, 2.000000f);
		FlyMinionHeightMax = serialized->get_float(FlyMinionHeightMax_type_id, 3.000000f); 
	}

	[[nodiscard]] auto
	GameBotMeleeSwarmerGroundFlyerPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	GameBotMeleeSwarmerGroundFlyerPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<GameBotMeleeSwarmerGroundFlyerPrius> {
		if (incoming_type_id == GameBotMeleeSwarmerGroundFlyerPrius::type_id) {
			return std::make_shared<GameBotMeleeSwarmerGroundFlyerPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
