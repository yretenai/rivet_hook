// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/DDLVector3.hpp> 

#include <rivet/ddl/generated/TrapGunkSpawnData.hpp>

namespace rivet::ddl::generated {
	TrapGunkSpawnData::TrapGunkSpawnData([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): ActorSpawnData(serialized) {
		AssetId = serialized->get_uint64(AssetId_type_id, 0ull);
		SpawnPosition = serialized->unwrap_into<rivet::ddl::generated::DDLVector3>(SpawnPosition_type_id);
		Trap = serialized->get_uint32(Trap_type_id, 0u); 
	}

	[[nodiscard]] auto
	TrapGunkSpawnData::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	TrapGunkSpawnData::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<TrapGunkSpawnData> {
		if (incoming_type_id == TrapGunkSpawnData::type_id) {
			return std::make_shared<TrapGunkSpawnData>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
