// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/TriggerByAttackPrius.hpp>

namespace rivet::ddl::generated {
	TriggerByAttackPrius::TriggerByAttackPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): TriggerByBasePrius(serialized) {
		AttackType = serialized->get_enum<rivet::ddl::generated::x209cdeb2>(AttackType_type_id, rivet::ddl::generated::x209cdeb2_values);
		CustomDamageType = serialized->get_enum<rivet::ddl::generated::DamageTypes>(CustomDamageType_type_id, rivet::ddl::generated::DamageTypes_values); 
	}

	[[nodiscard]] auto
	TriggerByAttackPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	TriggerByAttackPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<TriggerByAttackPrius> {
		if (incoming_type_id == TriggerByAttackPrius::type_id) {
			return std::make_shared<TriggerByAttackPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated