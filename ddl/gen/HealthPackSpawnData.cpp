// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/DDLVector3.hpp> 

#include <rivet/ddl/generated/HealthPackSpawnData.hpp>

namespace rivet::ddl::generated {
	HealthPackSpawnData::HealthPackSpawnData([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): ActorSpawnData(serialized) {
		SpawnPosition = serialized->unwrap_into<rivet::ddl::generated::DDLVector3>(SpawnPosition_type_id);
		ActorAsset = serialized->get_uint64(ActorAsset_type_id, 0ull); 
	}

	[[nodiscard]] auto
	HealthPackSpawnData::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	HealthPackSpawnData::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<HealthPackSpawnData> {
		if (incoming_type_id == HealthPackSpawnData::type_id) {
			return std::make_shared<HealthPackSpawnData>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
