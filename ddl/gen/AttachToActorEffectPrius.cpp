// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/AttachToActorEffectPrius.hpp>

namespace rivet::ddl::generated {
	AttachToActorEffectPrius::AttachToActorEffectPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): ScriptedShotEffectBasePrius(serialized) {
		ActorType = serialized->get_enum<rivet::ddl::generated::x4891b54>(ActorType_type_id, rivet::ddl::generated::x4891b54_values, rivet::ddl::generated::x4891b54::HitActor);
		ResetScriptedShotLifeTime = serialized->get_bool(ResetScriptedShotLifeTime_type_id, true);
		NewLifeTime = serialized->get_float(NewLifeTime_type_id, 3.000000f);
		DestroyOnBotDeath = serialized->get_bool(DestroyOnBotDeath_type_id, false);
		DestroyOnNonBotDeath = serialized->get_bool(DestroyOnNonBotDeath_type_id, false);
		MatchDestroy = serialized->get_bool(MatchDestroy_type_id, true);
		HideOnAutoDestroy = serialized->get_bool(HideOnAutoDestroy_type_id, false); 
	}

	[[nodiscard]] auto
	AttachToActorEffectPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	AttachToActorEffectPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<AttachToActorEffectPrius> {
		if (incoming_type_id == AttachToActorEffectPrius::type_id) {
			return std::make_shared<AttachToActorEffectPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
