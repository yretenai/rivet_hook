// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/DamageModifierProcKnockbackLevelIncomingPrius.hpp>

namespace rivet::ddl::generated {
	DamageModifierProcKnockbackLevelIncomingPrius::DamageModifierProcKnockbackLevelIncomingPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): DamageModifierProcIncomingPrius(serialized) {
		KnockbackLevel = serialized->get_enum<rivet::ddl::generated::KnockbackLevels>(KnockbackLevel_type_id, rivet::ddl::generated::KnockbackLevels_values);
		AllowKnockbackDowngrade = serialized->get_bool(AllowKnockbackDowngrade_type_id); 
	}

	[[nodiscard]] auto
	DamageModifierProcKnockbackLevelIncomingPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	DamageModifierProcKnockbackLevelIncomingPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<DamageModifierProcKnockbackLevelIncomingPrius> {
		if (incoming_type_id == DamageModifierProcKnockbackLevelIncomingPrius::type_id) {
			return std::make_shared<DamageModifierProcKnockbackLevelIncomingPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated