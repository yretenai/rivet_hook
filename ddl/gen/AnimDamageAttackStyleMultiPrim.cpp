// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/DamagePrimContainer.hpp>
#include <rivet/ddl/generated/CustomDamageContainer.hpp> 

#include <rivet/ddl/generated/AnimDamageAttackStyleMultiPrim.hpp>

namespace rivet::ddl::generated {
	AnimDamageAttackStyleMultiPrim::AnimDamageAttackStyleMultiPrim([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): AnimDamageAttackStyleBase(serialized) {
		UsePrimConfig = serialized->get_bool(UsePrimConfig_type_id);
		Prims = serialized->unwrap_into_many<rivet::ddl::generated::DamagePrimContainer>(Prims_type_id);
		PrimConfig = serialized->get_string(PrimConfig_type_id);
		DamageType = serialized->get_enum<rivet::ddl::generated::x8d7e44cf>(DamageType_type_id, rivet::ddl::generated::x8d7e44cf_values);
		DamageAmount = serialized->get_float(DamageAmount_type_id);
		StatusAmount = serialized->get_float(StatusAmount_type_id);
		Knockback = serialized->get_enum<rivet::ddl::generated::KnockbackLevels>(Knockback_type_id, rivet::ddl::generated::KnockbackLevels_values);
		KnockbackAmount = serialized->get_float(KnockbackAmount_type_id);
		KnockbackForce = serialized->get_float(KnockbackForce_type_id);
		DurationOverride = serialized->get_float(DurationOverride_type_id);
		HitPauseTime = serialized->get_float(HitPauseTime_type_id);
		RequestFlags = serialized->get_bitset<rivet::ddl::generated::x65d7dac2>(RequestFlags_type_id, rivet::ddl::generated::x65d7dac2_values);
		CustomDamageEntries = serialized->unwrap_into_many<rivet::ddl::generated::CustomDamageContainer>(CustomDamageEntries_type_id); 
	}

	[[nodiscard]] auto
	AnimDamageAttackStyleMultiPrim::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	AnimDamageAttackStyleMultiPrim::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<AnimDamageAttackStyleMultiPrim> {
		if (incoming_type_id == AnimDamageAttackStyleMultiPrim::type_id) {
			return std::make_shared<AnimDamageAttackStyleMultiPrim>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
