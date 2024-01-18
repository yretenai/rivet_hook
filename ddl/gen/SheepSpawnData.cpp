// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/DDLVector3.hpp> 

#include <rivet/ddl/generated/SheepSpawnData.hpp>

namespace rivet::ddl::generated {
	SheepSpawnData::SheepSpawnData([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): ActorSpawnData(serialized) {
		AssetId = serialized->get_uint64(AssetId_type_id, 0ull);
		ShockwaveRingAssetId = serialized->get_uint64(ShockwaveRingAssetId_type_id, 0ull);
		SheepStatusMaterialGraphAssetId = serialized->get_uint64(SheepStatusMaterialGraphAssetId_type_id, 0ull);
		Position = serialized->unwrap_into<rivet::ddl::generated::DDLVector3>(Position_type_id);
		Facing = serialized->unwrap_into<rivet::ddl::generated::DDLVector3>(Facing_type_id);
		Up = serialized->unwrap_into<rivet::ddl::generated::DDLVector3>(Up_type_id);
		ZoneIndex = serialized->get_int32(ZoneIndex_type_id, 0u);
		DamagerHandle = serialized->get_uint32(DamagerHandle_type_id, 0u);
		SourceHandle = serialized->get_uint32(SourceHandle_type_id, 0u); 
	}

	[[nodiscard]] auto
	SheepSpawnData::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	SheepSpawnData::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<SheepSpawnData> {
		if (incoming_type_id == SheepSpawnData::type_id) {
			return std::make_shared<SheepSpawnData>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
