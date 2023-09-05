// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/WeaponEmitterBasePrius.hpp> 

#include <rivet/ddl/generated/SpawnedShotEmitterConfig.hpp>

namespace rivet::ddl::generated {
	SpawnedShotEmitterConfig::SpawnedShotEmitterConfig([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): ConfigBase(serialized) {
		EmitterPrius = serialized->unwrap_into<rivet::ddl::generated::WeaponEmitterBasePrius>(EmitterPrius_type_id); 
	}

	auto
	SpawnedShotEmitterConfig::get_type_id() const noexcept -> rivet::rivet_type_id {
		return type_id;
	}

	[[nodiscard]] auto
	SpawnedShotEmitterConfig::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	SpawnedShotEmitterConfig::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<SpawnedShotEmitterConfig> {
		if (incoming_type_id == SpawnedShotEmitterConfig::type_id) {
			return std::make_shared<SpawnedShotEmitterConfig>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated