// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/AssetReferenceDef.hpp> 

#include <rivet/ddl/generated/ActivityClueSpawnConditionSpecificActorAsset.hpp>

namespace rivet::ddl::generated {
	ActivityClueSpawnConditionSpecificActorAsset::ActivityClueSpawnConditionSpecificActorAsset([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		BotActor = serialized->unwrap_into<rivet::ddl::generated::AssetReferenceDef>(BotActor_type_id); 
	}

	[[nodiscard]] auto
	ActivityClueSpawnConditionSpecificActorAsset::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	ActivityClueSpawnConditionSpecificActorAsset::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<ActivityClueSpawnConditionSpecificActorAsset> {
		if (incoming_type_id == ActivityClueSpawnConditionSpecificActorAsset::type_id) {
			return std::make_shared<ActivityClueSpawnConditionSpecificActorAsset>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated