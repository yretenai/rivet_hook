// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/SpawnerBotByShotConfig.hpp>

namespace rivet::ddl::generated {
	SpawnerBotByShotConfig::SpawnerBotByShotConfig([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): SpawnerBotBaseConfig(serialized) {
		NumTotalSpawnedBots = serialized->get_int32(NumTotalSpawnedBots_type_id); 
	}

	auto
	SpawnerBotByShotConfig::get_type_id() const noexcept -> rivet::rivet_type_id {
		return type_id;
	}

	[[nodiscard]] auto
	SpawnerBotByShotConfig::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	SpawnerBotByShotConfig::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<SpawnerBotByShotConfig> {
		if (incoming_type_id == SpawnerBotByShotConfig::type_id) {
			return std::make_shared<SpawnerBotByShotConfig>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated