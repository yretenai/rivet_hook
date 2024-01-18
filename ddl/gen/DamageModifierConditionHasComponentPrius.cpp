// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/DamageModifierConditionHasComponentPrius.hpp>

namespace rivet::ddl::generated {
	DamageModifierConditionHasComponentPrius::DamageModifierConditionHasComponentPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): DamageModifierConditionBasePrius(serialized) {
		CheckComponentHash = serialized->get_uint32(CheckComponentHash_type_id, 0u);
		IsInclude = serialized->get_bool(IsInclude_type_id, true);
		CheckComponentOnDamager = serialized->get_bool(CheckComponentOnDamager_type_id, false); 
	}

	[[nodiscard]] auto
	DamageModifierConditionHasComponentPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	DamageModifierConditionHasComponentPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<DamageModifierConditionHasComponentPrius> {
		if (incoming_type_id == DamageModifierConditionHasComponentPrius::type_id) {
			return std::make_shared<DamageModifierConditionHasComponentPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
