// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#pragma once

// clang-format off

#include <cstdint>
#include <string_view>
#include <array>

#include <rivet/hash/type_id.hpp>
#include <rivet/rivet_keywords.hpp>

namespace rivet::ddl::generated {
	constexpr const static std::string_view x6be956dd_type_name = "x6be956dd";
	constexpr const static rivet::rivet_type_id x6be956dd_type_id = 0x6be956dd;

	constexpr const static std::array<std::string_view, 147> x6be956dd_values = {
		"None",
		"OnDeath",
		"OnDying",
		"OnDamaged",
		"OnDealtDamage",
		"OnKilled",
		"OnAnswer",
		"OnObserve",
		"OnObservedEvent",
		"OnAmmoEmpty",
		"OnAmmoLow",
		"OnAmmoFull",
		"OnWeaponFired",
		"OnWeaponSwitch",
		"OnLevelUpWeapon",
		"OnCombatAreaClear",
		"OnDodgeAttack",
		"OnDamageBlockedByShield",
		"OnMounted",
		"OnMountJumped",
		"OnMountSpeedBoost",
		"OnMountCrashed",
		"OnPickup",
		"OnPickupAnimStart",
		"OnLevelUpHero",
		"OnBeginIdle",
		"OnBeginAlert",
		"OnBeginEngaged",
		"OnIdle",
		"OnAlert",
		"OnEngaged",
		"OnTargetLost",
		"OnTaunt",
		"OnMovingToCover",
		"OnMeleeApproach",
		"OnEnemyMelee",
		"OnEnemyRangedAttack",
		"OnShockwaveAttack",
		"OnThrowProjectile",
		"OnTailAttack",
		"OnBodyDestroyed",
		"OnHeroUsedPortalZip",
		"OnStandUpFromKnockdown",
		"OnMeleeApproachShielded",
		"OnShieldBlock",
		"OnTeleport",
		"OnFrozen",
		"OnSetOnFire",
		"OnElectrified",
		"OnPoisoned",
		"OnConfused",
		"OnShrubbed",
		"OnNPCFar",
		"OnNPCMedium",
		"OnNPCClose",
		"OnVendorWeaponAvailable",
		"OnVendorEnoughBolts",
		"OnVendorEnoughRare",
		"OnVendorEnoughRYNOPlans",
		"OnVendorInteractStart",
		"OnVendorInteractPurchase",
		"OnVendorInteractAmmoPurchase",
		"OnVendorInteractUpgrade",
		"OnVendorInteractNotEnoughBolts",
		"OnVendorInteractNotEnoughRare",
		"OnVendorInteractOutOfRare",
		"OnVendorInteractExit",
		"OnVendorInteractWeaponHighlightPurchasable",
		"OnVendorInteractWeaponHighlightComingSoon",
		"OnVendorInStockBurstPistol",
		"OnVendorInStockShatterbomb",
		"OnVendorInStockTopiarySprinkler",
		"OnVendorInStockPixelizer",
		"OnVendorInStockEnforcer",
		"OnVendorInStockMrFungi",
		"OnVendorInStockKamehameha",
		"OnVendorInStockRicochet",
		"OnVendorInStockLightningRod",
		"OnVendorInStockTunneler",
		"OnVendorInStockMagShield",
		"OnVendorInStockGloveOfDoom",
		"OnVendorInStockIcicleBlast",
		"OnVendorInStockBuzzBlades",
		"OnVendorInStockCarpetBomber",
		"OnVendorInStockWarmonger",
		"OnVendorInStockWarpRifle",
		"OnVendorInStockHeadhunter",
		"OnVendorInStockRYNO",
		"OnVendorInStockBouncer",
		"OnVendorUpgradeWeaponFocusUpgradeAvailable",
		"OnVendorUpgradeWeaponFocusNoUpgradeAvailable",
		"OnVendorUpgradePressAlreadyPurchasedCell",
		"OnVendorUpgradeChainSelectStart",
		"OnVendorUpgradeChainSelectPurchased",
		"OnVendorUpgradeGoldCellUpgradeUnlocked",
		"OnVendorUpgradeIdleNoUpgrades",
		"OnVendorUpgradeIdleNoRaritanium",
		"OnVendorUpgradeIdleUpgradeAvailable",
		"OnVendorUpgradeWeaponFullyUpgraded",
		"OnVendorPurchaseIdleCanPurchase",
		"OnVendorPurchaseIdleCannotPurchase",
		"OnVendorPurchaseIdleCanUpgrade",
		"OnShipFocusNefcityOptionalAvailable",
		"OnShipFocusNefcityOptionalActive",
		"OnShipFocusSargassoReturnGP",
		"OnShipFocusSargassoOptionalAvailable",
		"OnShipFocusSargassoOptionalActive",
		"OnShipFocusZurkiesGP",
		"OnShipFocusZurkies2GP",
		"OnShipFocusZurkiesOptionalAvailable",
		"OnShipFocusZurkiesOptionalActive",
		"OnShipFocusSavaliGP",
		"OnShipFocusSavaliReturnGP",
		"OnShipFocusSavaliOptionalAvailable",
		"OnShipFocusSavaliOptionalActive",
		"OnShipFocusBlizarGP",
		"OnShipFocusBlizarOptionalAvailable",
		"OnShipFocusBlizarOptionalActive",
		"OnShipFocusCordelionGP",
		"OnShipFocusMolonothGP",
		"OnShipFocusArdolisGP",
		"OnShipFocusArdolisOptionalAvailable",
		"OnShipFocusArdolisOptionalActive",
		"OnShipTravelHeroSame",
		"OnShipTravelHeroChange",
		"OnHeavyInfluence",
		"OnLightInfluence",
		"OnSpeedUpInfluence",
		"OnEnergyInfluence",
		"OnHeavyPickup",
		"OnLightPickup",
		"OnSpeedUpPickup",
		"OnEnergyPickup",
		"OnEnemiesSpawned",
		"OnEnemiesDefeated",
		"OnRampage",
		"OnPulseReady",
		"OnKillTurret",
		"OnKillNest",
		"OnLowHealth",
		"OnHealthPickup",
		"OnGunHitNest",
		"OnFunGuySpawned",
		"OnFunGuyDespawned",
		"OnAdditionalFunGuySpawned",
		"OnPortalOpened",
		"OnHeroTalksToWeapon", 
	};

	enum class x6be956dd : uint64_t {
		None,
		OnDeath,
		OnDying,
		OnDamaged,
		OnDealtDamage,
		OnKilled,
		OnAnswer,
		OnObserve,
		OnObservedEvent,
		OnAmmoEmpty,
		OnAmmoLow,
		OnAmmoFull,
		OnWeaponFired,
		OnWeaponSwitch,
		OnLevelUpWeapon,
		OnCombatAreaClear,
		OnDodgeAttack,
		OnDamageBlockedByShield,
		OnMounted,
		OnMountJumped,
		OnMountSpeedBoost,
		OnMountCrashed,
		OnPickup,
		OnPickupAnimStart,
		OnLevelUpHero,
		OnBeginIdle,
		OnBeginAlert,
		OnBeginEngaged,
		OnIdle,
		OnAlert,
		OnEngaged,
		OnTargetLost,
		OnTaunt,
		OnMovingToCover,
		OnMeleeApproach,
		OnEnemyMelee,
		OnEnemyRangedAttack,
		OnShockwaveAttack,
		OnThrowProjectile,
		OnTailAttack,
		OnBodyDestroyed,
		OnHeroUsedPortalZip,
		OnStandUpFromKnockdown,
		OnMeleeApproachShielded,
		OnShieldBlock,
		OnTeleport,
		OnFrozen,
		OnSetOnFire,
		OnElectrified,
		OnPoisoned,
		OnConfused,
		OnShrubbed,
		OnNPCFar,
		OnNPCMedium,
		OnNPCClose,
		OnVendorWeaponAvailable,
		OnVendorEnoughBolts,
		OnVendorEnoughRare,
		OnVendorEnoughRYNOPlans,
		OnVendorInteractStart,
		OnVendorInteractPurchase,
		OnVendorInteractAmmoPurchase,
		OnVendorInteractUpgrade,
		OnVendorInteractNotEnoughBolts,
		OnVendorInteractNotEnoughRare,
		OnVendorInteractOutOfRare,
		OnVendorInteractExit,
		OnVendorInteractWeaponHighlightPurchasable,
		OnVendorInteractWeaponHighlightComingSoon,
		OnVendorInStockBurstPistol,
		OnVendorInStockShatterbomb,
		OnVendorInStockTopiarySprinkler,
		OnVendorInStockPixelizer,
		OnVendorInStockEnforcer,
		OnVendorInStockMrFungi,
		OnVendorInStockKamehameha,
		OnVendorInStockRicochet,
		OnVendorInStockLightningRod,
		OnVendorInStockTunneler,
		OnVendorInStockMagShield,
		OnVendorInStockGloveOfDoom,
		OnVendorInStockIcicleBlast,
		OnVendorInStockBuzzBlades,
		OnVendorInStockCarpetBomber,
		OnVendorInStockWarmonger,
		OnVendorInStockWarpRifle,
		OnVendorInStockHeadhunter,
		OnVendorInStockRYNO,
		OnVendorInStockBouncer,
		OnVendorUpgradeWeaponFocusUpgradeAvailable,
		OnVendorUpgradeWeaponFocusNoUpgradeAvailable,
		OnVendorUpgradePressAlreadyPurchasedCell,
		OnVendorUpgradeChainSelectStart,
		OnVendorUpgradeChainSelectPurchased,
		OnVendorUpgradeGoldCellUpgradeUnlocked,
		OnVendorUpgradeIdleNoUpgrades,
		OnVendorUpgradeIdleNoRaritanium,
		OnVendorUpgradeIdleUpgradeAvailable,
		OnVendorUpgradeWeaponFullyUpgraded,
		OnVendorPurchaseIdleCanPurchase,
		OnVendorPurchaseIdleCannotPurchase,
		OnVendorPurchaseIdleCanUpgrade,
		OnShipFocusNefcityOptionalAvailable,
		OnShipFocusNefcityOptionalActive,
		OnShipFocusSargassoReturnGP,
		OnShipFocusSargassoOptionalAvailable,
		OnShipFocusSargassoOptionalActive,
		OnShipFocusZurkiesGP,
		OnShipFocusZurkies2GP,
		OnShipFocusZurkiesOptionalAvailable,
		OnShipFocusZurkiesOptionalActive,
		OnShipFocusSavaliGP,
		OnShipFocusSavaliReturnGP,
		OnShipFocusSavaliOptionalAvailable,
		OnShipFocusSavaliOptionalActive,
		OnShipFocusBlizarGP,
		OnShipFocusBlizarOptionalAvailable,
		OnShipFocusBlizarOptionalActive,
		OnShipFocusCordelionGP,
		OnShipFocusMolonothGP,
		OnShipFocusArdolisGP,
		OnShipFocusArdolisOptionalAvailable,
		OnShipFocusArdolisOptionalActive,
		OnShipTravelHeroSame,
		OnShipTravelHeroChange,
		OnHeavyInfluence,
		OnLightInfluence,
		OnSpeedUpInfluence,
		OnEnergyInfluence,
		OnHeavyPickup,
		OnLightPickup,
		OnSpeedUpPickup,
		OnEnergyPickup,
		OnEnemiesSpawned,
		OnEnemiesDefeated,
		OnRampage,
		OnPulseReady,
		OnKillTurret,
		OnKillNest,
		OnLowHealth,
		OnHealthPickup,
		OnGunHitNest,
		OnFunGuySpawned,
		OnFunGuyDespawned,
		OnAdditionalFunGuySpawned,
		OnPortalOpened,
		OnHeroTalksToWeapon, 
	};
} // namespace rivet::ddl::generated

// clang-format on
