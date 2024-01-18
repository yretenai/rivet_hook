// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/DDLVector3.hpp> 

#include <rivet/ddl/generated/ThrowProjectileData.hpp>

namespace rivet::ddl::generated {
	ThrowProjectileData::ThrowProjectileData([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		ShotConfig = serialized->get_string(ShotConfig_type_id, {});
		DamageRequestId = serialized->get_string(DamageRequestId_type_id, {});
		IntroDriver = serialized->get_string(IntroDriver_type_id, {});
		ThrowDriver = serialized->get_string(ThrowDriver_type_id, {});
		EmitLocator = serialized->get_string(EmitLocator_type_id, {});
		IntroDuration = serialized->get_float(IntroDuration_type_id, -1.000000f);
		WindUpDuration = serialized->get_float(WindUpDuration_type_id, -1.000000f);
		ActiveDuration = serialized->get_float(ActiveDuration_type_id, -1.000000f);
		RecoveryDuration = serialized->get_float(RecoveryDuration_type_id, -1.000000f);
		EnableTrackingDuringThrow = serialized->get_bool(EnableTrackingDuringThrow_type_id, true);
		EnableTrackingWhenRotationIsDisabled = serialized->get_bool(EnableTrackingWhenRotationIsDisabled_type_id, true);
		AimInXZ = serialized->get_bool(AimInXZ_type_id, true);
		CanDropProjectile = serialized->get_bool(CanDropProjectile_type_id, true);
		UseTargetDataForAim = serialized->get_bool(UseTargetDataForAim_type_id, false);
		AimIsEmitForward = serialized->get_bool(AimIsEmitForward_type_id, false);
		UseLastNavPosition = serialized->get_bool(UseLastNavPosition_type_id, true);
		RequireClearArc = serialized->get_bool(RequireClearArc_type_id, true);
		DropOffset = serialized->unwrap_into<rivet::ddl::generated::DDLVector3>(DropOffset_type_id);
		OnDodgeWindUpMult = serialized->get_float(OnDodgeWindUpMult_type_id, 1.000000f);
		DesiredLandOffset = serialized->get_float(DesiredLandOffset_type_id, 2.500000f);
		OffScreenLandOffset = serialized->get_float(OffScreenLandOffset_type_id, 3.500000f);
		MaxRotation = serialized->get_float(MaxRotation_type_id, 180.000000f);
		CollIgnoreDist = serialized->get_float(CollIgnoreDist_type_id, 0.000000f);
		ShotCount = serialized->get_int32(ShotCount_type_id, 1u);
		ShotOffsetSide = serialized->get_float(ShotOffsetSide_type_id, 0.000000f);
		ShotWarningActorAsset = serialized->get_string(ShotWarningActorAsset_type_id, {});
		ShotWarningInterval = serialized->get_float(ShotWarningInterval_type_id, 0.375000f);
		TargetPredictionAddTime = serialized->get_float(TargetPredictionAddTime_type_id, 0.000000f);
		TargetPredictionMaxTime = serialized->get_float(TargetPredictionMaxTime_type_id, 0.000000f); 
	}

	[[nodiscard]] auto
	ThrowProjectileData::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	ThrowProjectileData::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<ThrowProjectileData> {
		if (incoming_type_id == ThrowProjectileData::type_id) {
			return std::make_shared<ThrowProjectileData>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
