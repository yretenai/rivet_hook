// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/DamageModifierClampHPPrius.hpp>

namespace rivet::ddl::generated {
	DamageModifierClampHPPrius::DamageModifierClampHPPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): DamageModifierIncomingPrius(serialized) {
		ClampHPAt = serialized->get_float(ClampHPAt_type_id, 10.000000f); 
	}

	[[nodiscard]] auto
	DamageModifierClampHPPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	DamageModifierClampHPPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<DamageModifierClampHPPrius> {
		if (incoming_type_id == DamageModifierClampHPPrius::type_id) {
			return std::make_shared<DamageModifierClampHPPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
