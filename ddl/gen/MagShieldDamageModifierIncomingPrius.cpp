// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/MagShieldDamageModifierIncomingPrius.hpp>

namespace rivet::ddl::generated {
	MagShieldDamageModifierIncomingPrius::MagShieldDamageModifierIncomingPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): DamageModifierIncomingPrius(serialized) {

	}

	[[nodiscard]] auto
	MagShieldDamageModifierIncomingPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	MagShieldDamageModifierIncomingPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<MagShieldDamageModifierIncomingPrius> {
		if (incoming_type_id == MagShieldDamageModifierIncomingPrius::type_id) {
			return std::make_shared<MagShieldDamageModifierIncomingPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated