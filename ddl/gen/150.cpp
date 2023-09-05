// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/DamageModifierIncomingBattleBrewScalePrius.hpp>

namespace rivet::ddl::generated {
	DamageModifierIncomingBattleBrewScalePrius::DamageModifierIncomingBattleBrewScalePrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): DamageModifierIncomingPrius(serialized) {
		IncomingDamageMultiplier = serialized->get_float(IncomingDamageMultiplier_type_id);
		KnockbackLevelModifier = serialized->get_uint8(KnockbackLevelModifier_type_id); 
	}

	auto
	DamageModifierIncomingBattleBrewScalePrius::get_type_id() const noexcept -> rivet::rivet_type_id {
		return type_id;
	}

	[[nodiscard]] auto
	DamageModifierIncomingBattleBrewScalePrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	DamageModifierIncomingBattleBrewScalePrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<DamageModifierIncomingBattleBrewScalePrius> {
		if (incoming_type_id == DamageModifierIncomingBattleBrewScalePrius::type_id) {
			return std::make_shared<DamageModifierIncomingBattleBrewScalePrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated