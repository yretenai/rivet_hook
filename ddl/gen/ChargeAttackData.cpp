// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/DDLVector3.hpp> 

#include <rivet/ddl/generated/ChargeAttackData.hpp>

namespace rivet::ddl::generated {
	ChargeAttackData::ChargeAttackData([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		Name = serialized->get_string(Name_type_id, "Charge");
		TellTime = serialized->get_float(TellTime_type_id, 2.000000f);
		TurnRate = serialized->get_float(TurnRate_type_id, 45.000000f);
		TurnRateTell = serialized->get_float(TurnRateTell_type_id, -1.000000f);
		MinDistToTurn = serialized->get_float(MinDistToTurn_type_id, 0.000000f);
		MoveSpeed = serialized->get_float(MoveSpeed_type_id, 10.000000f);
		RunPastDistance = serialized->get_float(RunPastDistance_type_id, 8.000000f);
		StunDuration = serialized->get_float(StunDuration_type_id, 2.000000f);
		HitDuration = serialized->get_float(HitDuration_type_id, 1.000000f);
		MissDuration = serialized->get_float(MissDuration_type_id, 2.000000f);
		TargetLeftOffset = serialized->get_float(TargetLeftOffset_type_id, 0.000000f);
		TrackTarget = serialized->get_bool(TrackTarget_type_id, false);
		FaceTargetDuringMiss = serialized->get_bool(FaceTargetDuringMiss_type_id, false);
		FaceTargetDuringHit = serialized->get_bool(FaceTargetDuringHit_type_id, false);
		TriggerHitOutroOnClose = serialized->get_bool(TriggerHitOutroOnClose_type_id, false);
		AlsoDamageInHitOutro = serialized->get_bool(AlsoDamageInHitOutro_type_id, false);
		PreventDeflection = serialized->get_bool(PreventDeflection_type_id, false);
		TellDriver = serialized->get_string(TellDriver_type_id, "ChargeAttack_Tell");
		IntroDriver = serialized->get_string(IntroDriver_type_id, "ChargeAttack_Intro");
		MoveDriver = serialized->get_string(MoveDriver_type_id, "ChargeAttack_Loop");
		HitOutroDriver = serialized->get_string(HitOutroDriver_type_id, "ChargeAttack_Hit");
		MissOutroDriver = serialized->get_string(MissOutroDriver_type_id, "ChargeAttack_Miss");
		StunOutroDriver = serialized->get_string(StunOutroDriver_type_id, "ChargeAttack_Stun");
		StunCompressPartial = serialized->get_string(StunCompressPartial_type_id, "");
		DamageAmount = serialized->get_float(DamageAmount_type_id, 0.000000f);
		DamageType = serialized->get_enum<rivet::ddl::generated::DamageTypes>(DamageType_type_id, rivet::ddl::generated::DamageTypes_values, rivet::ddl::generated::DamageTypes::Melee);
		Knockback = serialized->get_enum<rivet::ddl::generated::KnockbackLevels>(Knockback_type_id, rivet::ddl::generated::KnockbackLevels_values, rivet::ddl::generated::KnockbackLevels::None);
		KnockbackAmount = serialized->get_float(KnockbackAmount_type_id, 100.000000f);
		KnockbackForce = serialized->get_float(KnockbackForce_type_id, -1.000000f);
		HitPauseTime = serialized->get_float(HitPauseTime_type_id, 0.000000f);
		DamageLocator = serialized->get_string(DamageLocator_type_id, {});
		LocalOffset = serialized->unwrap_into<rivet::ddl::generated::DDLVector3>(LocalOffset_type_id);
		DamageRadius = serialized->get_float(DamageRadius_type_id, 0.500000f);
		RequestFlags = serialized->get_bitset<rivet::ddl::generated::x65d7dac2>(RequestFlags_type_id, rivet::ddl::generated::x65d7dac2_values, 0u); 
	}

	[[nodiscard]] auto
	ChargeAttackData::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	ChargeAttackData::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<ChargeAttackData> {
		if (incoming_type_id == ChargeAttackData::type_id) {
			return std::make_shared<ChargeAttackData>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
