// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/AttachToHitSurfaceEffectPrius.hpp>

namespace rivet::ddl::generated {
	AttachToHitSurfaceEffectPrius::AttachToHitSurfaceEffectPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): ScriptedShotEffectBasePrius(serialized) {
		ResetScriptedShotLifeTime = serialized->get_bool(ResetScriptedShotLifeTime_type_id, true);
		AttachOffset = serialized->get_float(AttachOffset_type_id, 0.100000f);
		AttachOffsetVelocity = serialized->get_float(AttachOffsetVelocity_type_id, 0.000000f);
		NewLifeTime = serialized->get_float(NewLifeTime_type_id, 3.000000f);
		NewLifeTimeEnemy = serialized->get_float(NewLifeTimeEnemy_type_id, -1.000000f);
		DestroyOnBotDeath = serialized->get_bool(DestroyOnBotDeath_type_id, false);
		DestroyOnNonBotDeath = serialized->get_bool(DestroyOnNonBotDeath_type_id, false);
		MatchDestroy = serialized->get_bool(MatchDestroy_type_id, true);
		HideOnAutoDestroy = serialized->get_bool(HideOnAutoDestroy_type_id, false);
		OrientToHitNormal = serialized->get_bool(OrientToHitNormal_type_id, false);
		TriggerLifetimeOnFail = serialized->get_bool(TriggerLifetimeOnFail_type_id, false); 
	}

	[[nodiscard]] auto
	AttachToHitSurfaceEffectPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	AttachToHitSurfaceEffectPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<AttachToHitSurfaceEffectPrius> {
		if (incoming_type_id == AttachToHitSurfaceEffectPrius::type_id) {
			return std::make_shared<AttachToHitSurfaceEffectPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
