// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/BotBaseDataModDef.hpp> 

#include <rivet/ddl/generated/BotBaseData.hpp>

namespace rivet::ddl::generated {
	BotBaseData::BotBaseData([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		Health = serialized->get_float(Health_type_id, 100.000000f);
		HealthFlags = serialized->get_bitset<rivet::ddl::generated::x87e08126>(HealthFlags_type_id, rivet::ddl::generated::x87e08126_values, 0u);
		MovementConfig = serialized->get_string(MovementConfig_type_id, {});
		Movement3DConfig = serialized->get_string(Movement3DConfig_type_id, {});
		MeleeConfig = serialized->get_string(MeleeConfig_type_id, {});
		HitReactConfig = serialized->get_string(HitReactConfig_type_id, {});
		TargetingConfig = serialized->get_string(TargetingConfig_type_id, {});
		AwarenessConfig = serialized->get_string(AwarenessConfig_type_id, {});
		PropConfig = serialized->get_string(PropConfig_type_id, {});
		RandomAttachConfig = serialized->get_string(RandomAttachConfig_type_id, {});
		DeathConfig = serialized->get_string(DeathConfig_type_id, {});
		TargetingAimAngleConfig = serialized->get_string(TargetingAimAngleConfig_type_id, {});
		BotConfigPhysics = serialized->get_string(BotConfigPhysics_type_id, {});
		ConfigModDefs = serialized->unwrap_into_many<rivet::ddl::generated::BotBaseDataModDef>(ConfigModDefs_type_id);
		UseBotStartup = serialized->get_bool(UseBotStartup_type_id, true);
		ActivateUserPoseDriverOnInit = serialized->get_bool(ActivateUserPoseDriverOnInit_type_id, false);
		ApplyActorScaleToSpeed = serialized->get_bool(ApplyActorScaleToSpeed_type_id, true); 
	}

	[[nodiscard]] auto
	BotBaseData::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	BotBaseData::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<BotBaseData> {
		if (incoming_type_id == BotBaseData::type_id) {
			return std::make_shared<BotBaseData>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
