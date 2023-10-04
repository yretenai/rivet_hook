// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/FireFromLookData.hpp>
#include <rivet/ddl/generated/ShotMotionBlunderBusterPrius.hpp>
#include <rivet/ddl/generated/MoveAlongGroundShotMotionPrius.hpp>
#include <rivet/ddl/generated/DDLVector3.hpp>
#include <rivet/ddl/generated/GrenadeShotMotionPrius.hpp>
#include <rivet/ddl/generated/FlyerPickupShotMotionPrius.hpp>
#include <rivet/ddl/generated/ShotMotionRevolverPrius.hpp>
#include <rivet/ddl/generated/ShotMotionNailGunPrius.hpp>
#include <rivet/ddl/generated/ShotMotionBlasterSpreadPrius.hpp>
#include <rivet/ddl/generated/CustomVelocityGravityShotMotionPrius.hpp>
#include <rivet/ddl/generated/ShotMotionHomingLobPrius.hpp>
#include <rivet/ddl/generated/VonIonBossShipMissileShotMotionPrius.hpp>
#include <rivet/ddl/generated/ShotMotionTunnelerPuppyPrius.hpp>
#include <rivet/ddl/generated/ShotMotionLightningRodPrius.hpp>
#include <rivet/ddl/generated/ShotMotionMagnaMissilePrius.hpp>
#include <rivet/ddl/generated/HitScanShotMotionPrius.hpp>
#include <rivet/ddl/generated/PredictableTrajectoryShotMotionPrius.hpp>
#include <rivet/ddl/generated/ShotMotionStickyBlasterPrius.hpp>
#include <rivet/ddl/generated/ShotMotionRYNOPortalPrius.hpp>
#include <rivet/ddl/generated/ShotMotionWarpRiflePrius.hpp>
#include <rivet/ddl/generated/BasicShotMotionGamePrius.hpp>
#include <rivet/ddl/generated/ShotMotionSeismicShockPrius.hpp>
#include <rivet/ddl/generated/ShotMotionSchrodingerDisappearPrius.hpp>
#include <rivet/ddl/generated/HurdleShotMotionPrius.hpp>
#include <rivet/ddl/generated/ShotMotionPitOfDeathPrius.hpp>
#include <rivet/ddl/generated/ShotMotionDetCordPrius.hpp>
#include <rivet/ddl/generated/ShotMotionRYNOPrius.hpp>
#include <rivet/ddl/generated/BuzzBladesShotMotionPrius.hpp>
#include <rivet/ddl/generated/TurretIonCannonShotMotionPrius.hpp>
#include <rivet/ddl/generated/ShotMotionRicochetPrius.hpp>
#include <rivet/ddl/generated/ShotMotionBurstPistolPrius.hpp>
#include <rivet/ddl/generated/ShotMotionVolcanicEruptorRockPrius.hpp>
#include <rivet/ddl/generated/ShotMotionMagShieldBlastPrius.hpp>
#include <rivet/ddl/generated/ShotMotionProtoShotgunPrius.hpp>
#include <rivet/ddl/generated/ShotMotionMagShieldPrius.hpp>
#include <rivet/ddl/generated/ShotMotionCarpetBomberPrius.hpp>
#include <rivet/ddl/generated/ArcShotMotionPrius.hpp>
#include <rivet/ddl/generated/VariableSpeedShotMotionPrius.hpp>
#include <rivet/ddl/generated/ShotMotionIcicleBlastPrius.hpp>
#include <rivet/ddl/generated/ShotMotionSchrodingerPrius.hpp> 

#include <rivet/ddl/generated/BasicShotMotionPrius.hpp>

namespace rivet::ddl::generated {
	BasicShotMotionPrius::BasicShotMotionPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): ShotMotionBasePrius(serialized) {
		FireFromLookPositionData = serialized->unwrap_into<rivet::ddl::generated::FireFromLookData>(FireFromLookPositionData_type_id);
		EmitSimOffset = serialized->unwrap_into<rivet::ddl::generated::DDLVector3>(EmitSimOffset_type_id); 
	}

	[[nodiscard]] auto
	BasicShotMotionPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	BasicShotMotionPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<BasicShotMotionPrius> {
		if (incoming_type_id == BasicShotMotionPrius::type_id) {
			return std::make_shared<BasicShotMotionPrius>(serialized);
		}

		auto FlyerPickupShotMotionPrius_ptr = FlyerPickupShotMotionPrius::from_substruct(incoming_type_id, serialized);
		if (FlyerPickupShotMotionPrius_ptr != nullptr) {
			return FlyerPickupShotMotionPrius_ptr;
		}

		auto ShotMotionRevolverPrius_ptr = ShotMotionRevolverPrius::from_substruct(incoming_type_id, serialized);
		if (ShotMotionRevolverPrius_ptr != nullptr) {
			return ShotMotionRevolverPrius_ptr;
		}

		auto CustomVelocityGravityShotMotionPrius_ptr = CustomVelocityGravityShotMotionPrius::from_substruct(incoming_type_id, serialized);
		if (CustomVelocityGravityShotMotionPrius_ptr != nullptr) {
			return CustomVelocityGravityShotMotionPrius_ptr;
		}

		auto ShotMotionHomingLobPrius_ptr = ShotMotionHomingLobPrius::from_substruct(incoming_type_id, serialized);
		if (ShotMotionHomingLobPrius_ptr != nullptr) {
			return ShotMotionHomingLobPrius_ptr;
		}

		auto VonIonBossShipMissileShotMotionPrius_ptr = VonIonBossShipMissileShotMotionPrius::from_substruct(incoming_type_id, serialized);
		if (VonIonBossShipMissileShotMotionPrius_ptr != nullptr) {
			return VonIonBossShipMissileShotMotionPrius_ptr;
		}

		auto ShotMotionBlasterSpreadPrius_ptr = ShotMotionBlasterSpreadPrius::from_substruct(incoming_type_id, serialized);
		if (ShotMotionBlasterSpreadPrius_ptr != nullptr) {
			return ShotMotionBlasterSpreadPrius_ptr;
		}

		auto ShotMotionTunnelerPuppyPrius_ptr = ShotMotionTunnelerPuppyPrius::from_substruct(incoming_type_id, serialized);
		if (ShotMotionTunnelerPuppyPrius_ptr != nullptr) {
			return ShotMotionTunnelerPuppyPrius_ptr;
		}

		auto GrenadeShotMotionPrius_ptr = GrenadeShotMotionPrius::from_substruct(incoming_type_id, serialized);
		if (GrenadeShotMotionPrius_ptr != nullptr) {
			return GrenadeShotMotionPrius_ptr;
		}

		auto ShotMotionLightningRodPrius_ptr = ShotMotionLightningRodPrius::from_substruct(incoming_type_id, serialized);
		if (ShotMotionLightningRodPrius_ptr != nullptr) {
			return ShotMotionLightningRodPrius_ptr;
		}

		auto ShotMotionMagnaMissilePrius_ptr = ShotMotionMagnaMissilePrius::from_substruct(incoming_type_id, serialized);
		if (ShotMotionMagnaMissilePrius_ptr != nullptr) {
			return ShotMotionMagnaMissilePrius_ptr;
		}

		auto PredictableTrajectoryShotMotionPrius_ptr = PredictableTrajectoryShotMotionPrius::from_substruct(incoming_type_id, serialized);
		if (PredictableTrajectoryShotMotionPrius_ptr != nullptr) {
			return PredictableTrajectoryShotMotionPrius_ptr;
		}

		auto ShotMotionRYNOPortalPrius_ptr = ShotMotionRYNOPortalPrius::from_substruct(incoming_type_id, serialized);
		if (ShotMotionRYNOPortalPrius_ptr != nullptr) {
			return ShotMotionRYNOPortalPrius_ptr;
		}

		auto BasicShotMotionGamePrius_ptr = BasicShotMotionGamePrius::from_substruct(incoming_type_id, serialized);
		if (BasicShotMotionGamePrius_ptr != nullptr) {
			return BasicShotMotionGamePrius_ptr;
		}

		auto ShotMotionNailGunPrius_ptr = ShotMotionNailGunPrius::from_substruct(incoming_type_id, serialized);
		if (ShotMotionNailGunPrius_ptr != nullptr) {
			return ShotMotionNailGunPrius_ptr;
		}

		auto ShotMotionSchrodingerDisappearPrius_ptr = ShotMotionSchrodingerDisappearPrius::from_substruct(incoming_type_id, serialized);
		if (ShotMotionSchrodingerDisappearPrius_ptr != nullptr) {
			return ShotMotionSchrodingerDisappearPrius_ptr;
		}

		auto HitScanShotMotionPrius_ptr = HitScanShotMotionPrius::from_substruct(incoming_type_id, serialized);
		if (HitScanShotMotionPrius_ptr != nullptr) {
			return HitScanShotMotionPrius_ptr;
		}

		auto ShotMotionPitOfDeathPrius_ptr = ShotMotionPitOfDeathPrius::from_substruct(incoming_type_id, serialized);
		if (ShotMotionPitOfDeathPrius_ptr != nullptr) {
			return ShotMotionPitOfDeathPrius_ptr;
		}

		auto ShotMotionDetCordPrius_ptr = ShotMotionDetCordPrius::from_substruct(incoming_type_id, serialized);
		if (ShotMotionDetCordPrius_ptr != nullptr) {
			return ShotMotionDetCordPrius_ptr;
		}

		auto BuzzBladesShotMotionPrius_ptr = BuzzBladesShotMotionPrius::from_substruct(incoming_type_id, serialized);
		if (BuzzBladesShotMotionPrius_ptr != nullptr) {
			return BuzzBladesShotMotionPrius_ptr;
		}

		auto TurretIonCannonShotMotionPrius_ptr = TurretIonCannonShotMotionPrius::from_substruct(incoming_type_id, serialized);
		if (TurretIonCannonShotMotionPrius_ptr != nullptr) {
			return TurretIonCannonShotMotionPrius_ptr;
		}

		auto ShotMotionRicochetPrius_ptr = ShotMotionRicochetPrius::from_substruct(incoming_type_id, serialized);
		if (ShotMotionRicochetPrius_ptr != nullptr) {
			return ShotMotionRicochetPrius_ptr;
		}

		auto ShotMotionRYNOPrius_ptr = ShotMotionRYNOPrius::from_substruct(incoming_type_id, serialized);
		if (ShotMotionRYNOPrius_ptr != nullptr) {
			return ShotMotionRYNOPrius_ptr;
		}

		auto ShotMotionVolcanicEruptorRockPrius_ptr = ShotMotionVolcanicEruptorRockPrius::from_substruct(incoming_type_id, serialized);
		if (ShotMotionVolcanicEruptorRockPrius_ptr != nullptr) {
			return ShotMotionVolcanicEruptorRockPrius_ptr;
		}

		auto ShotMotionStickyBlasterPrius_ptr = ShotMotionStickyBlasterPrius::from_substruct(incoming_type_id, serialized);
		if (ShotMotionStickyBlasterPrius_ptr != nullptr) {
			return ShotMotionStickyBlasterPrius_ptr;
		}

		auto MoveAlongGroundShotMotionPrius_ptr = MoveAlongGroundShotMotionPrius::from_substruct(incoming_type_id, serialized);
		if (MoveAlongGroundShotMotionPrius_ptr != nullptr) {
			return MoveAlongGroundShotMotionPrius_ptr;
		}

		auto ShotMotionMagShieldBlastPrius_ptr = ShotMotionMagShieldBlastPrius::from_substruct(incoming_type_id, serialized);
		if (ShotMotionMagShieldBlastPrius_ptr != nullptr) {
			return ShotMotionMagShieldBlastPrius_ptr;
		}

		auto ShotMotionBlunderBusterPrius_ptr = ShotMotionBlunderBusterPrius::from_substruct(incoming_type_id, serialized);
		if (ShotMotionBlunderBusterPrius_ptr != nullptr) {
			return ShotMotionBlunderBusterPrius_ptr;
		}

		auto ShotMotionSeismicShockPrius_ptr = ShotMotionSeismicShockPrius::from_substruct(incoming_type_id, serialized);
		if (ShotMotionSeismicShockPrius_ptr != nullptr) {
			return ShotMotionSeismicShockPrius_ptr;
		}

		auto ShotMotionProtoShotgunPrius_ptr = ShotMotionProtoShotgunPrius::from_substruct(incoming_type_id, serialized);
		if (ShotMotionProtoShotgunPrius_ptr != nullptr) {
			return ShotMotionProtoShotgunPrius_ptr;
		}

		auto ShotMotionMagShieldPrius_ptr = ShotMotionMagShieldPrius::from_substruct(incoming_type_id, serialized);
		if (ShotMotionMagShieldPrius_ptr != nullptr) {
			return ShotMotionMagShieldPrius_ptr;
		}

		auto ShotMotionBurstPistolPrius_ptr = ShotMotionBurstPistolPrius::from_substruct(incoming_type_id, serialized);
		if (ShotMotionBurstPistolPrius_ptr != nullptr) {
			return ShotMotionBurstPistolPrius_ptr;
		}

		auto ShotMotionCarpetBomberPrius_ptr = ShotMotionCarpetBomberPrius::from_substruct(incoming_type_id, serialized);
		if (ShotMotionCarpetBomberPrius_ptr != nullptr) {
			return ShotMotionCarpetBomberPrius_ptr;
		}

		auto ShotMotionWarpRiflePrius_ptr = ShotMotionWarpRiflePrius::from_substruct(incoming_type_id, serialized);
		if (ShotMotionWarpRiflePrius_ptr != nullptr) {
			return ShotMotionWarpRiflePrius_ptr;
		}

		auto ArcShotMotionPrius_ptr = ArcShotMotionPrius::from_substruct(incoming_type_id, serialized);
		if (ArcShotMotionPrius_ptr != nullptr) {
			return ArcShotMotionPrius_ptr;
		}

		auto VariableSpeedShotMotionPrius_ptr = VariableSpeedShotMotionPrius::from_substruct(incoming_type_id, serialized);
		if (VariableSpeedShotMotionPrius_ptr != nullptr) {
			return VariableSpeedShotMotionPrius_ptr;
		}

		auto ShotMotionIcicleBlastPrius_ptr = ShotMotionIcicleBlastPrius::from_substruct(incoming_type_id, serialized);
		if (ShotMotionIcicleBlastPrius_ptr != nullptr) {
			return ShotMotionIcicleBlastPrius_ptr;
		}

		auto ShotMotionSchrodingerPrius_ptr = ShotMotionSchrodingerPrius::from_substruct(incoming_type_id, serialized);
		if (ShotMotionSchrodingerPrius_ptr != nullptr) {
			return ShotMotionSchrodingerPrius_ptr;
		}

		auto HurdleShotMotionPrius_ptr = HurdleShotMotionPrius::from_substruct(incoming_type_id, serialized);
		if (HurdleShotMotionPrius_ptr != nullptr) {
			return HurdleShotMotionPrius_ptr;
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
