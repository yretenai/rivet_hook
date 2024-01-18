// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/DDLVector3.hpp> 

#include <rivet/ddl/generated/GameBotTankBasePrius.hpp>

namespace rivet::ddl::generated {
	GameBotTankBasePrius::GameBotTankBasePrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): BotPrius(serialized) {
		TimeBetweenVolleys = serialized->get_float(TimeBetweenVolleys_type_id, 3.000000f);
		DamageVolumeExtents = serialized->unwrap_into<rivet::ddl::generated::DDLVector3>(DamageVolumeExtents_type_id); 
	}

	[[nodiscard]] auto
	GameBotTankBasePrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	GameBotTankBasePrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<GameBotTankBasePrius> {
		if (incoming_type_id == GameBotTankBasePrius::type_id) {
			return std::make_shared<GameBotTankBasePrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
