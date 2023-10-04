// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/ShotStickyBlasterPrius.hpp>
#include <rivet/ddl/generated/ShotDamageData.hpp>
#include <rivet/ddl/generated/ShotFossilizerPrius.hpp>
#include <rivet/ddl/generated/VonIonBossShipMissileShotPrius.hpp>
#include <rivet/ddl/generated/ShotBotSpawnerPrius.hpp>
#include <rivet/ddl/generated/ShotRevolverPrius.hpp>
#include <rivet/ddl/generated/BossBotCordelionNefariousTelekinesisShotPrius.hpp>
#include <rivet/ddl/generated/SheepShotPrius.hpp>
#include <rivet/ddl/generated/ShotSeismicShockPrius.hpp>
#include <rivet/ddl/generated/GroundWaveShotPrius.hpp>
#include <rivet/ddl/generated/PlasmaStrikerShotPrius.hpp>
#include <rivet/ddl/generated/DummyHurdleShotPrius.hpp>
#include <rivet/ddl/generated/ShotPitOfDeathPrius.hpp>
#include <rivet/ddl/generated/ShotIciclePrius.hpp>
#include <rivet/ddl/generated/ShotgunShotPrius.hpp>
#include <rivet/ddl/generated/ShotMagnaMissilePrius.hpp>
#include <rivet/ddl/generated/ShotWarpRifleImplosionPrius.hpp>
#include <rivet/ddl/generated/ShotGameBulletPrius.hpp>
#include <rivet/ddl/generated/ShotMagShieldPrius.hpp>
#include <rivet/ddl/generated/ShotWarpRifleNovaPrius.hpp>
#include <rivet/ddl/generated/ShotBlunderBusterPrius.hpp>
#include <rivet/ddl/generated/ShotRYNOSniperPrius.hpp>
#include <rivet/ddl/generated/TurretIonCannonShotPrius.hpp>
#include <rivet/ddl/generated/ShotDetCordPrius.hpp>
#include <rivet/ddl/generated/ShotWarpRiflePrius.hpp>
#include <rivet/ddl/generated/BossBotCordelionNefariousPlasmaShotPrius.hpp>
#include <rivet/ddl/generated/ShotTunnelerMeleePrius.hpp>
#include <rivet/ddl/generated/ShotLightningRodPrius.hpp>
#include <rivet/ddl/generated/ShotMagShieldBlastPrius.hpp>
#include <rivet/ddl/generated/BuzzBladesShotPrius.hpp>
#include <rivet/ddl/generated/LobbedShotPrius.hpp>
#include <rivet/ddl/generated/ShotRicochetPrius.hpp>
#include <rivet/ddl/generated/ShotNailGunPrius.hpp>
#include <rivet/ddl/generated/ShotTopiarySprinklerPrius.hpp>
#include <rivet/ddl/generated/ShotBurstPistolPrius.hpp>
#include <rivet/ddl/generated/ShotBlasterPrius.hpp> 

#include <rivet/ddl/generated/BasicBulletPrius.hpp>

namespace rivet::ddl::generated {
	BasicBulletPrius::BasicBulletPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): SimpleShotPrius(serialized) {
		DamageData = serialized->unwrap_into<rivet::ddl::generated::ShotDamageData>(DamageData_type_id); 
	}

	[[nodiscard]] auto
	BasicBulletPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	BasicBulletPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<BasicBulletPrius> {
		if (incoming_type_id == BasicBulletPrius::type_id) {
			return std::make_shared<BasicBulletPrius>(serialized);
		}

		auto ShotFossilizerPrius_ptr = ShotFossilizerPrius::from_substruct(incoming_type_id, serialized);
		if (ShotFossilizerPrius_ptr != nullptr) {
			return ShotFossilizerPrius_ptr;
		}

		auto VonIonBossShipMissileShotPrius_ptr = VonIonBossShipMissileShotPrius::from_substruct(incoming_type_id, serialized);
		if (VonIonBossShipMissileShotPrius_ptr != nullptr) {
			return VonIonBossShipMissileShotPrius_ptr;
		}

		auto ShotSeismicShockPrius_ptr = ShotSeismicShockPrius::from_substruct(incoming_type_id, serialized);
		if (ShotSeismicShockPrius_ptr != nullptr) {
			return ShotSeismicShockPrius_ptr;
		}

		auto ShotPitOfDeathPrius_ptr = ShotPitOfDeathPrius::from_substruct(incoming_type_id, serialized);
		if (ShotPitOfDeathPrius_ptr != nullptr) {
			return ShotPitOfDeathPrius_ptr;
		}

		auto DummyHurdleShotPrius_ptr = DummyHurdleShotPrius::from_substruct(incoming_type_id, serialized);
		if (DummyHurdleShotPrius_ptr != nullptr) {
			return DummyHurdleShotPrius_ptr;
		}

		auto SheepShotPrius_ptr = SheepShotPrius::from_substruct(incoming_type_id, serialized);
		if (SheepShotPrius_ptr != nullptr) {
			return SheepShotPrius_ptr;
		}

		auto ShotRevolverPrius_ptr = ShotRevolverPrius::from_substruct(incoming_type_id, serialized);
		if (ShotRevolverPrius_ptr != nullptr) {
			return ShotRevolverPrius_ptr;
		}

		auto ShotIciclePrius_ptr = ShotIciclePrius::from_substruct(incoming_type_id, serialized);
		if (ShotIciclePrius_ptr != nullptr) {
			return ShotIciclePrius_ptr;
		}

		auto BossBotCordelionNefariousTelekinesisShotPrius_ptr = BossBotCordelionNefariousTelekinesisShotPrius::from_substruct(incoming_type_id, serialized);
		if (BossBotCordelionNefariousTelekinesisShotPrius_ptr != nullptr) {
			return BossBotCordelionNefariousTelekinesisShotPrius_ptr;
		}

		auto ShotMagnaMissilePrius_ptr = ShotMagnaMissilePrius::from_substruct(incoming_type_id, serialized);
		if (ShotMagnaMissilePrius_ptr != nullptr) {
			return ShotMagnaMissilePrius_ptr;
		}

		auto ShotWarpRifleImplosionPrius_ptr = ShotWarpRifleImplosionPrius::from_substruct(incoming_type_id, serialized);
		if (ShotWarpRifleImplosionPrius_ptr != nullptr) {
			return ShotWarpRifleImplosionPrius_ptr;
		}

		auto ShotMagShieldPrius_ptr = ShotMagShieldPrius::from_substruct(incoming_type_id, serialized);
		if (ShotMagShieldPrius_ptr != nullptr) {
			return ShotMagShieldPrius_ptr;
		}

		auto ShotWarpRifleNovaPrius_ptr = ShotWarpRifleNovaPrius::from_substruct(incoming_type_id, serialized);
		if (ShotWarpRifleNovaPrius_ptr != nullptr) {
			return ShotWarpRifleNovaPrius_ptr;
		}

		auto ShotRYNOSniperPrius_ptr = ShotRYNOSniperPrius::from_substruct(incoming_type_id, serialized);
		if (ShotRYNOSniperPrius_ptr != nullptr) {
			return ShotRYNOSniperPrius_ptr;
		}

		auto ShotBlunderBusterPrius_ptr = ShotBlunderBusterPrius::from_substruct(incoming_type_id, serialized);
		if (ShotBlunderBusterPrius_ptr != nullptr) {
			return ShotBlunderBusterPrius_ptr;
		}

		auto ShotDetCordPrius_ptr = ShotDetCordPrius::from_substruct(incoming_type_id, serialized);
		if (ShotDetCordPrius_ptr != nullptr) {
			return ShotDetCordPrius_ptr;
		}

		auto ShotWarpRiflePrius_ptr = ShotWarpRiflePrius::from_substruct(incoming_type_id, serialized);
		if (ShotWarpRiflePrius_ptr != nullptr) {
			return ShotWarpRiflePrius_ptr;
		}

		auto PlasmaStrikerShotPrius_ptr = PlasmaStrikerShotPrius::from_substruct(incoming_type_id, serialized);
		if (PlasmaStrikerShotPrius_ptr != nullptr) {
			return PlasmaStrikerShotPrius_ptr;
		}

		auto BossBotCordelionNefariousPlasmaShotPrius_ptr = BossBotCordelionNefariousPlasmaShotPrius::from_substruct(incoming_type_id, serialized);
		if (BossBotCordelionNefariousPlasmaShotPrius_ptr != nullptr) {
			return BossBotCordelionNefariousPlasmaShotPrius_ptr;
		}

		auto ShotStickyBlasterPrius_ptr = ShotStickyBlasterPrius::from_substruct(incoming_type_id, serialized);
		if (ShotStickyBlasterPrius_ptr != nullptr) {
			return ShotStickyBlasterPrius_ptr;
		}

		auto ShotLightningRodPrius_ptr = ShotLightningRodPrius::from_substruct(incoming_type_id, serialized);
		if (ShotLightningRodPrius_ptr != nullptr) {
			return ShotLightningRodPrius_ptr;
		}

		auto ShotTunnelerMeleePrius_ptr = ShotTunnelerMeleePrius::from_substruct(incoming_type_id, serialized);
		if (ShotTunnelerMeleePrius_ptr != nullptr) {
			return ShotTunnelerMeleePrius_ptr;
		}

		auto ShotGameBulletPrius_ptr = ShotGameBulletPrius::from_substruct(incoming_type_id, serialized);
		if (ShotGameBulletPrius_ptr != nullptr) {
			return ShotGameBulletPrius_ptr;
		}

		auto ShotBotSpawnerPrius_ptr = ShotBotSpawnerPrius::from_substruct(incoming_type_id, serialized);
		if (ShotBotSpawnerPrius_ptr != nullptr) {
			return ShotBotSpawnerPrius_ptr;
		}

		auto TurretIonCannonShotPrius_ptr = TurretIonCannonShotPrius::from_substruct(incoming_type_id, serialized);
		if (TurretIonCannonShotPrius_ptr != nullptr) {
			return TurretIonCannonShotPrius_ptr;
		}

		auto ShotgunShotPrius_ptr = ShotgunShotPrius::from_substruct(incoming_type_id, serialized);
		if (ShotgunShotPrius_ptr != nullptr) {
			return ShotgunShotPrius_ptr;
		}

		auto ShotMagShieldBlastPrius_ptr = ShotMagShieldBlastPrius::from_substruct(incoming_type_id, serialized);
		if (ShotMagShieldBlastPrius_ptr != nullptr) {
			return ShotMagShieldBlastPrius_ptr;
		}

		auto BuzzBladesShotPrius_ptr = BuzzBladesShotPrius::from_substruct(incoming_type_id, serialized);
		if (BuzzBladesShotPrius_ptr != nullptr) {
			return BuzzBladesShotPrius_ptr;
		}

		auto LobbedShotPrius_ptr = LobbedShotPrius::from_substruct(incoming_type_id, serialized);
		if (LobbedShotPrius_ptr != nullptr) {
			return LobbedShotPrius_ptr;
		}

		auto ShotRicochetPrius_ptr = ShotRicochetPrius::from_substruct(incoming_type_id, serialized);
		if (ShotRicochetPrius_ptr != nullptr) {
			return ShotRicochetPrius_ptr;
		}

		auto ShotNailGunPrius_ptr = ShotNailGunPrius::from_substruct(incoming_type_id, serialized);
		if (ShotNailGunPrius_ptr != nullptr) {
			return ShotNailGunPrius_ptr;
		}

		auto ShotTopiarySprinklerPrius_ptr = ShotTopiarySprinklerPrius::from_substruct(incoming_type_id, serialized);
		if (ShotTopiarySprinklerPrius_ptr != nullptr) {
			return ShotTopiarySprinklerPrius_ptr;
		}

		auto ShotBurstPistolPrius_ptr = ShotBurstPistolPrius::from_substruct(incoming_type_id, serialized);
		if (ShotBurstPistolPrius_ptr != nullptr) {
			return ShotBurstPistolPrius_ptr;
		}

		auto GroundWaveShotPrius_ptr = GroundWaveShotPrius::from_substruct(incoming_type_id, serialized);
		if (GroundWaveShotPrius_ptr != nullptr) {
			return GroundWaveShotPrius_ptr;
		}

		auto ShotBlasterPrius_ptr = ShotBlasterPrius::from_substruct(incoming_type_id, serialized);
		if (ShotBlasterPrius_ptr != nullptr) {
			return ShotBlasterPrius_ptr;
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
