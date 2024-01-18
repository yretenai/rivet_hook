// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/GameBotPufferFishPrius.hpp>

namespace rivet::ddl::generated {
	GameBotPufferFishPrius::GameBotPufferFishPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): GameBotMeleeSwarmerPrius(serialized) {
		SwimVolumes = serialized->get_uint64(SwimVolumes_type_id, 0ull);
		BreachAnimClues = serialized->get_uint64(BreachAnimClues_type_id, 0ull);
		EngagedSwimSpeedMult = serialized->get_float(EngagedSwimSpeedMult_type_id, 2.000000f); 
	}

	[[nodiscard]] auto
	GameBotPufferFishPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	GameBotPufferFishPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<GameBotPufferFishPrius> {
		if (incoming_type_id == GameBotPufferFishPrius::type_id) {
			return std::make_shared<GameBotPufferFishPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
