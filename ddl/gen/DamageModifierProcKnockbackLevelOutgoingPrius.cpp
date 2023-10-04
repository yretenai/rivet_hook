// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/DamageModifierProcKnockbackLevelOutgoingPrius.hpp>

namespace rivet::ddl::generated {
	DamageModifierProcKnockbackLevelOutgoingPrius::DamageModifierProcKnockbackLevelOutgoingPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): DamageModifierProcOutgoingPrius(serialized) {
		KnockbackLevel = serialized->get_enum<rivet::ddl::generated::KnockbackLevels>(KnockbackLevel_type_id, rivet::ddl::generated::KnockbackLevels_values);
		AllowKnockbackDowngrade = serialized->get_bool(AllowKnockbackDowngrade_type_id); 
	}

	[[nodiscard]] auto
	DamageModifierProcKnockbackLevelOutgoingPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	DamageModifierProcKnockbackLevelOutgoingPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<DamageModifierProcKnockbackLevelOutgoingPrius> {
		if (incoming_type_id == DamageModifierProcKnockbackLevelOutgoingPrius::type_id) {
			return std::make_shared<DamageModifierProcKnockbackLevelOutgoingPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
