// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/SpawnerBotByShotConfig.hpp>
#include <rivet/ddl/generated/SpawnerBotThrowData.hpp> 

#include <rivet/ddl/generated/SpawnerBotBaseConfig.hpp>

namespace rivet::ddl::generated {
	SpawnerBotBaseConfig::SpawnerBotBaseConfig([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): ConfigBase(serialized) {
		NumActiveSpawnedBots = serialized->get_uint8(NumActiveSpawnedBots_type_id, 4u);
		SpawnDelay = serialized->get_float(SpawnDelay_type_id, 1.000000f);
		SpawnTriggerDelay = serialized->get_float(SpawnTriggerDelay_type_id, 2.000000f);
		DefaultSpawn = serialized->get_string(DefaultSpawn_type_id, {});
		ThrowData = serialized->unwrap_into<rivet::ddl::generated::SpawnerBotThrowData>(ThrowData_type_id); 
	}

	[[nodiscard]] auto
	SpawnerBotBaseConfig::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	SpawnerBotBaseConfig::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<SpawnerBotBaseConfig> {
		if (incoming_type_id == SpawnerBotBaseConfig::type_id) {
			return std::make_shared<SpawnerBotBaseConfig>(serialized);
		}

		auto SpawnerBotByShotConfig_ptr = SpawnerBotByShotConfig::from_substruct(incoming_type_id, serialized);
		if (SpawnerBotByShotConfig_ptr != nullptr) {
			return SpawnerBotByShotConfig_ptr;
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
