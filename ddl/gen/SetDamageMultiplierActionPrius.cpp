// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/SetDamageMultiplierActionPrius.hpp>

namespace rivet::ddl::generated {
	SetDamageMultiplierActionPrius::SetDamageMultiplierActionPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		ActionType = serialized->get_enum<rivet::ddl::generated::x10228b34>(ActionType_type_id, rivet::ddl::generated::x10228b34_values);
		FilterTypes = serialized->get_enums<rivet::ddl::generated::DamageTypes>(FilterTypes_type_id, rivet::ddl::generated::DamageTypes_values);
		AllegianceTypes = serialized->get_enums<rivet::ddl::generated::x6bdf4ba1>(AllegianceTypes_type_id, rivet::ddl::generated::x6bdf4ba1_values);
		FilterIsExclude = serialized->get_bool(FilterIsExclude_type_id);
		ModifyOutgoingDamage = serialized->get_bool(ModifyOutgoingDamage_type_id);
		ApplyToKnockdown = serialized->get_bool(ApplyToKnockdown_type_id); 
	}

	[[nodiscard]] auto
	SetDamageMultiplierActionPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	SetDamageMultiplierActionPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<SetDamageMultiplierActionPrius> {
		if (incoming_type_id == SetDamageMultiplierActionPrius::type_id) {
			return std::make_shared<SetDamageMultiplierActionPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated