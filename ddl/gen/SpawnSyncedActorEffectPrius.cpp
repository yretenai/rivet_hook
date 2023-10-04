// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/SpawnSyncedActorEffectPrius.hpp>

namespace rivet::ddl::generated {
	SpawnSyncedActorEffectPrius::SpawnSyncedActorEffectPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): ScriptedShotEffectBasePrius(serialized) {
		ActorAsset = serialized->get_string(ActorAsset_type_id);
		LifeTime = serialized->get_float(LifeTime_type_id);
		AttachToHitActor = serialized->get_bool(AttachToHitActor_type_id);
		MatchCreatorAllegiance = serialized->get_bool(MatchCreatorAllegiance_type_id);
		MatchCreatorZone = serialized->get_bool(MatchCreatorZone_type_id); 
	}

	[[nodiscard]] auto
	SpawnSyncedActorEffectPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	SpawnSyncedActorEffectPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<SpawnSyncedActorEffectPrius> {
		if (incoming_type_id == SpawnSyncedActorEffectPrius::type_id) {
			return std::make_shared<SpawnSyncedActorEffectPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
