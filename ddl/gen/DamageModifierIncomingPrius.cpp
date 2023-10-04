// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/DamageModifierIncomingForceKnockbackPrius.hpp>
#include <rivet/ddl/generated/DamageModifierIgnoreJointPrius.hpp>
#include <rivet/ddl/generated/DamageModifierConditionEntry.hpp>
#include <rivet/ddl/generated/DamageModifierWeakspotOnlyPrius.hpp>
#include <rivet/ddl/generated/DamageModifierHeroOnlyPrius.hpp>
#include <rivet/ddl/generated/DamageModifierIgnoreHeroPrius.hpp>
#include <rivet/ddl/generated/DamageModifierIncomingBattleBrewFloatPrius.hpp>
#include <rivet/ddl/generated/DamageModifierListIncomingPrius.hpp>
#include <rivet/ddl/generated/DamageModifierProcIncomingPrius.hpp>
#include <rivet/ddl/generated/DamageModifierPassiveWeakspotPrius.hpp>
#include <rivet/ddl/generated/DamageModifierVolleyPrius.hpp>
#include <rivet/ddl/generated/NefariousFinaleWeaponPrius.hpp>
#include <rivet/ddl/generated/DamageModifierIncomingAllowKnockbackPrius.hpp>
#include <rivet/ddl/generated/DamageModifierZerpStonePrius.hpp>
#include <rivet/ddl/generated/DamageModifierLimitOverTimePrius.hpp>
#include <rivet/ddl/generated/DamageModifierShrubbedPrius.hpp>
#include <rivet/ddl/generated/WeakspotPrius.hpp>
#include <rivet/ddl/generated/DamageModifierBattleBrewArmorPrius.hpp>
#include <rivet/ddl/generated/DamageModifierDirectHitOnlyPrius.hpp>
#include <rivet/ddl/generated/DamageModifierMultiplyPrius.hpp>
#include <rivet/ddl/generated/DamageModifierTurretPrius.hpp>
#include <rivet/ddl/generated/DamageModifierFrozenPrius.hpp>
#include <rivet/ddl/generated/DamageModifierTraversalPrius.hpp>
#include <rivet/ddl/generated/DamageModifierSlotPercentPrius.hpp>
#include <rivet/ddl/generated/NefariousFinaleMechHeartNodePrius.hpp>
#include <rivet/ddl/generated/DamageModifierMinMaxPrius.hpp>
#include <rivet/ddl/generated/MagShieldDamageModifierIncomingPrius.hpp>
#include <rivet/ddl/generated/DamageModifierDamageHashPrius.hpp>
#include <rivet/ddl/generated/DamageModifierIncomingBattleBrewScalePrius.hpp>
#include <rivet/ddl/generated/DamageModifierClampHPPrius.hpp>
#include <rivet/ddl/generated/DamageModifierIgnoreSourcePrius.hpp>
#include <rivet/ddl/generated/DamageModifierAddPrius.hpp>
#include <rivet/ddl/generated/DamageModifierInvulnerablePrius.hpp>
#include <rivet/ddl/generated/ShieldWithHealthPrius.hpp>
#include <rivet/ddl/generated/DamageModifierScriptedHealthThresholdClampedPrius.hpp>
#include <rivet/ddl/generated/DamageModifierPixelizerResistancePrius.hpp>
#include <rivet/ddl/generated/DamageFromFlingCollisionPrius.hpp>
#include <rivet/ddl/generated/DamageModifierDirectionalIncomingPrius.hpp>
#include <rivet/ddl/generated/DamageModifierByTypeIfHasStatusEffectPrius.hpp>
#include <rivet/ddl/generated/DamageModifierCordelionNefariousShieldPrius.hpp>
#include <rivet/ddl/generated/NefariousFinaleMechHeartPrius.hpp> 

#include <rivet/ddl/generated/DamageModifierIncomingPrius.hpp>

namespace rivet::ddl::generated {
	DamageModifierIncomingPrius::DamageModifierIncomingPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		ModifierName = serialized->get_string(ModifierName_type_id);
		Conditions = serialized->unwrap_into_many<rivet::ddl::generated::DamageModifierConditionEntry>(Conditions_type_id); 
	}

	[[nodiscard]] auto
	DamageModifierIncomingPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	DamageModifierIncomingPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<DamageModifierIncomingPrius> {
		if (incoming_type_id == DamageModifierIncomingPrius::type_id) {
			return std::make_shared<DamageModifierIncomingPrius>(serialized);
		}

		auto DamageModifierIgnoreHeroPrius_ptr = DamageModifierIgnoreHeroPrius::from_substruct(incoming_type_id, serialized);
		if (DamageModifierIgnoreHeroPrius_ptr != nullptr) {
			return DamageModifierIgnoreHeroPrius_ptr;
		}

		auto DamageModifierIgnoreJointPrius_ptr = DamageModifierIgnoreJointPrius::from_substruct(incoming_type_id, serialized);
		if (DamageModifierIgnoreJointPrius_ptr != nullptr) {
			return DamageModifierIgnoreJointPrius_ptr;
		}

		auto DamageModifierProcIncomingPrius_ptr = DamageModifierProcIncomingPrius::from_substruct(incoming_type_id, serialized);
		if (DamageModifierProcIncomingPrius_ptr != nullptr) {
			return DamageModifierProcIncomingPrius_ptr;
		}

		auto DamageModifierPassiveWeakspotPrius_ptr = DamageModifierPassiveWeakspotPrius::from_substruct(incoming_type_id, serialized);
		if (DamageModifierPassiveWeakspotPrius_ptr != nullptr) {
			return DamageModifierPassiveWeakspotPrius_ptr;
		}

		auto NefariousFinaleWeaponPrius_ptr = NefariousFinaleWeaponPrius::from_substruct(incoming_type_id, serialized);
		if (NefariousFinaleWeaponPrius_ptr != nullptr) {
			return NefariousFinaleWeaponPrius_ptr;
		}

		auto DamageModifierIncomingBattleBrewFloatPrius_ptr = DamageModifierIncomingBattleBrewFloatPrius::from_substruct(incoming_type_id, serialized);
		if (DamageModifierIncomingBattleBrewFloatPrius_ptr != nullptr) {
			return DamageModifierIncomingBattleBrewFloatPrius_ptr;
		}

		auto DamageModifierZerpStonePrius_ptr = DamageModifierZerpStonePrius::from_substruct(incoming_type_id, serialized);
		if (DamageModifierZerpStonePrius_ptr != nullptr) {
			return DamageModifierZerpStonePrius_ptr;
		}

		auto DamageModifierLimitOverTimePrius_ptr = DamageModifierLimitOverTimePrius::from_substruct(incoming_type_id, serialized);
		if (DamageModifierLimitOverTimePrius_ptr != nullptr) {
			return DamageModifierLimitOverTimePrius_ptr;
		}

		auto DamageModifierShrubbedPrius_ptr = DamageModifierShrubbedPrius::from_substruct(incoming_type_id, serialized);
		if (DamageModifierShrubbedPrius_ptr != nullptr) {
			return DamageModifierShrubbedPrius_ptr;
		}

		auto DamageModifierIncomingAllowKnockbackPrius_ptr = DamageModifierIncomingAllowKnockbackPrius::from_substruct(incoming_type_id, serialized);
		if (DamageModifierIncomingAllowKnockbackPrius_ptr != nullptr) {
			return DamageModifierIncomingAllowKnockbackPrius_ptr;
		}

		auto WeakspotPrius_ptr = WeakspotPrius::from_substruct(incoming_type_id, serialized);
		if (WeakspotPrius_ptr != nullptr) {
			return WeakspotPrius_ptr;
		}

		auto DamageModifierBattleBrewArmorPrius_ptr = DamageModifierBattleBrewArmorPrius::from_substruct(incoming_type_id, serialized);
		if (DamageModifierBattleBrewArmorPrius_ptr != nullptr) {
			return DamageModifierBattleBrewArmorPrius_ptr;
		}

		auto DamageModifierMultiplyPrius_ptr = DamageModifierMultiplyPrius::from_substruct(incoming_type_id, serialized);
		if (DamageModifierMultiplyPrius_ptr != nullptr) {
			return DamageModifierMultiplyPrius_ptr;
		}

		auto DamageModifierHeroOnlyPrius_ptr = DamageModifierHeroOnlyPrius::from_substruct(incoming_type_id, serialized);
		if (DamageModifierHeroOnlyPrius_ptr != nullptr) {
			return DamageModifierHeroOnlyPrius_ptr;
		}

		auto DamageModifierFrozenPrius_ptr = DamageModifierFrozenPrius::from_substruct(incoming_type_id, serialized);
		if (DamageModifierFrozenPrius_ptr != nullptr) {
			return DamageModifierFrozenPrius_ptr;
		}

		auto DamageModifierTraversalPrius_ptr = DamageModifierTraversalPrius::from_substruct(incoming_type_id, serialized);
		if (DamageModifierTraversalPrius_ptr != nullptr) {
			return DamageModifierTraversalPrius_ptr;
		}

		auto DamageModifierTurretPrius_ptr = DamageModifierTurretPrius::from_substruct(incoming_type_id, serialized);
		if (DamageModifierTurretPrius_ptr != nullptr) {
			return DamageModifierTurretPrius_ptr;
		}

		auto DamageModifierSlotPercentPrius_ptr = DamageModifierSlotPercentPrius::from_substruct(incoming_type_id, serialized);
		if (DamageModifierSlotPercentPrius_ptr != nullptr) {
			return DamageModifierSlotPercentPrius_ptr;
		}

		auto NefariousFinaleMechHeartNodePrius_ptr = NefariousFinaleMechHeartNodePrius::from_substruct(incoming_type_id, serialized);
		if (NefariousFinaleMechHeartNodePrius_ptr != nullptr) {
			return NefariousFinaleMechHeartNodePrius_ptr;
		}

		auto DamageModifierMinMaxPrius_ptr = DamageModifierMinMaxPrius::from_substruct(incoming_type_id, serialized);
		if (DamageModifierMinMaxPrius_ptr != nullptr) {
			return DamageModifierMinMaxPrius_ptr;
		}

		auto MagShieldDamageModifierIncomingPrius_ptr = MagShieldDamageModifierIncomingPrius::from_substruct(incoming_type_id, serialized);
		if (MagShieldDamageModifierIncomingPrius_ptr != nullptr) {
			return MagShieldDamageModifierIncomingPrius_ptr;
		}

		auto DamageModifierWeakspotOnlyPrius_ptr = DamageModifierWeakspotOnlyPrius::from_substruct(incoming_type_id, serialized);
		if (DamageModifierWeakspotOnlyPrius_ptr != nullptr) {
			return DamageModifierWeakspotOnlyPrius_ptr;
		}

		auto DamageModifierDamageHashPrius_ptr = DamageModifierDamageHashPrius::from_substruct(incoming_type_id, serialized);
		if (DamageModifierDamageHashPrius_ptr != nullptr) {
			return DamageModifierDamageHashPrius_ptr;
		}

		auto DamageModifierIncomingBattleBrewScalePrius_ptr = DamageModifierIncomingBattleBrewScalePrius::from_substruct(incoming_type_id, serialized);
		if (DamageModifierIncomingBattleBrewScalePrius_ptr != nullptr) {
			return DamageModifierIncomingBattleBrewScalePrius_ptr;
		}

		auto DamageModifierIgnoreSourcePrius_ptr = DamageModifierIgnoreSourcePrius::from_substruct(incoming_type_id, serialized);
		if (DamageModifierIgnoreSourcePrius_ptr != nullptr) {
			return DamageModifierIgnoreSourcePrius_ptr;
		}

		auto DamageModifierAddPrius_ptr = DamageModifierAddPrius::from_substruct(incoming_type_id, serialized);
		if (DamageModifierAddPrius_ptr != nullptr) {
			return DamageModifierAddPrius_ptr;
		}

		auto DamageModifierInvulnerablePrius_ptr = DamageModifierInvulnerablePrius::from_substruct(incoming_type_id, serialized);
		if (DamageModifierInvulnerablePrius_ptr != nullptr) {
			return DamageModifierInvulnerablePrius_ptr;
		}

		auto DamageModifierScriptedHealthThresholdClampedPrius_ptr = DamageModifierScriptedHealthThresholdClampedPrius::from_substruct(incoming_type_id, serialized);
		if (DamageModifierScriptedHealthThresholdClampedPrius_ptr != nullptr) {
			return DamageModifierScriptedHealthThresholdClampedPrius_ptr;
		}

		auto DamageModifierIncomingForceKnockbackPrius_ptr = DamageModifierIncomingForceKnockbackPrius::from_substruct(incoming_type_id, serialized);
		if (DamageModifierIncomingForceKnockbackPrius_ptr != nullptr) {
			return DamageModifierIncomingForceKnockbackPrius_ptr;
		}

		auto ShieldWithHealthPrius_ptr = ShieldWithHealthPrius::from_substruct(incoming_type_id, serialized);
		if (ShieldWithHealthPrius_ptr != nullptr) {
			return ShieldWithHealthPrius_ptr;
		}

		auto DamageModifierClampHPPrius_ptr = DamageModifierClampHPPrius::from_substruct(incoming_type_id, serialized);
		if (DamageModifierClampHPPrius_ptr != nullptr) {
			return DamageModifierClampHPPrius_ptr;
		}

		auto DamageModifierPixelizerResistancePrius_ptr = DamageModifierPixelizerResistancePrius::from_substruct(incoming_type_id, serialized);
		if (DamageModifierPixelizerResistancePrius_ptr != nullptr) {
			return DamageModifierPixelizerResistancePrius_ptr;
		}

		auto DamageFromFlingCollisionPrius_ptr = DamageFromFlingCollisionPrius::from_substruct(incoming_type_id, serialized);
		if (DamageFromFlingCollisionPrius_ptr != nullptr) {
			return DamageFromFlingCollisionPrius_ptr;
		}

		auto DamageModifierDirectionalIncomingPrius_ptr = DamageModifierDirectionalIncomingPrius::from_substruct(incoming_type_id, serialized);
		if (DamageModifierDirectionalIncomingPrius_ptr != nullptr) {
			return DamageModifierDirectionalIncomingPrius_ptr;
		}

		auto DamageModifierDirectHitOnlyPrius_ptr = DamageModifierDirectHitOnlyPrius::from_substruct(incoming_type_id, serialized);
		if (DamageModifierDirectHitOnlyPrius_ptr != nullptr) {
			return DamageModifierDirectHitOnlyPrius_ptr;
		}

		auto DamageModifierVolleyPrius_ptr = DamageModifierVolleyPrius::from_substruct(incoming_type_id, serialized);
		if (DamageModifierVolleyPrius_ptr != nullptr) {
			return DamageModifierVolleyPrius_ptr;
		}

		auto DamageModifierByTypeIfHasStatusEffectPrius_ptr = DamageModifierByTypeIfHasStatusEffectPrius::from_substruct(incoming_type_id, serialized);
		if (DamageModifierByTypeIfHasStatusEffectPrius_ptr != nullptr) {
			return DamageModifierByTypeIfHasStatusEffectPrius_ptr;
		}

		auto DamageModifierListIncomingPrius_ptr = DamageModifierListIncomingPrius::from_substruct(incoming_type_id, serialized);
		if (DamageModifierListIncomingPrius_ptr != nullptr) {
			return DamageModifierListIncomingPrius_ptr;
		}

		auto DamageModifierCordelionNefariousShieldPrius_ptr = DamageModifierCordelionNefariousShieldPrius::from_substruct(incoming_type_id, serialized);
		if (DamageModifierCordelionNefariousShieldPrius_ptr != nullptr) {
			return DamageModifierCordelionNefariousShieldPrius_ptr;
		}

		auto NefariousFinaleMechHeartPrius_ptr = NefariousFinaleMechHeartPrius::from_substruct(incoming_type_id, serialized);
		if (NefariousFinaleMechHeartPrius_ptr != nullptr) {
			return NefariousFinaleMechHeartPrius_ptr;
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
