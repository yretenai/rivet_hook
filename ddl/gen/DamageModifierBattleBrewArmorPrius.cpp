// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/DamageModifierBattleBrewArmorPrius.hpp>

namespace rivet::ddl::generated {
	DamageModifierBattleBrewArmorPrius::DamageModifierBattleBrewArmorPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): DamageModifierIncomingPrius(serialized) {
		RangedDamageModifier = serialized->get_float(RangedDamageModifier_type_id);
		MeleeDamageModifier = serialized->get_float(MeleeDamageModifier_type_id);
		MaxRangedKnockback = serialized->get_enum<rivet::ddl::generated::KnockbackLevels>(MaxRangedKnockback_type_id, rivet::ddl::generated::KnockbackLevels_values);
		MaxMeleeKnockback = serialized->get_enum<rivet::ddl::generated::KnockbackLevels>(MaxMeleeKnockback_type_id, rivet::ddl::generated::KnockbackLevels_values); 
	}

	[[nodiscard]] auto
	DamageModifierBattleBrewArmorPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	DamageModifierBattleBrewArmorPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<DamageModifierBattleBrewArmorPrius> {
		if (incoming_type_id == DamageModifierBattleBrewArmorPrius::type_id) {
			return std::make_shared<DamageModifierBattleBrewArmorPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
