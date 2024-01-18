// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/DamageModifierProcKnockbackLevelOutgoingPrius.hpp> 

#include <rivet/ddl/generated/DamageModifierProcOutgoingPrius.hpp>

namespace rivet::ddl::generated {
	DamageModifierProcOutgoingPrius::DamageModifierProcOutgoingPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): DamageModifierOutgoingPrius(serialized) {
		ProcChance = serialized->get_float(ProcChance_type_id, 1.000000f);
		RequestId = serialized->get_uint32(RequestId_type_id, 0u); 
	}

	[[nodiscard]] auto
	DamageModifierProcOutgoingPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	DamageModifierProcOutgoingPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<DamageModifierProcOutgoingPrius> {
		if (incoming_type_id == DamageModifierProcOutgoingPrius::type_id) {
			return std::make_shared<DamageModifierProcOutgoingPrius>(serialized);
		}

		auto DamageModifierProcKnockbackLevelOutgoingPrius_ptr = DamageModifierProcKnockbackLevelOutgoingPrius::from_substruct(incoming_type_id, serialized);
		if (DamageModifierProcKnockbackLevelOutgoingPrius_ptr != nullptr) {
			return DamageModifierProcKnockbackLevelOutgoingPrius_ptr;
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
