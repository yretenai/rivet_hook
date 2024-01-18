// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/DDLTransform.hpp> 

#include <rivet/ddl/generated/SelfieDoppelgangerSpawnData.hpp>

namespace rivet::ddl::generated {
	SelfieDoppelgangerSpawnData::SelfieDoppelgangerSpawnData([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): ActorSpawnData(serialized) {
		ActorAssetId = serialized->get_uint64(ActorAssetId_type_id, 0ull);
		SpawnTransform = serialized->unwrap_into<rivet::ddl::generated::DDLTransform>(SpawnTransform_type_id); 
	}

	[[nodiscard]] auto
	SelfieDoppelgangerSpawnData::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	SelfieDoppelgangerSpawnData::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<SelfieDoppelgangerSpawnData> {
		if (incoming_type_id == SelfieDoppelgangerSpawnData::type_id) {
			return std::make_shared<SelfieDoppelgangerSpawnData>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
