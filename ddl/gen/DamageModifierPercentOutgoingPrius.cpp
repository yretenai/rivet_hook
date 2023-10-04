// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/DamageModifierPercentOutgoingPrius.hpp>

namespace rivet::ddl::generated {
	DamageModifierPercentOutgoingPrius::DamageModifierPercentOutgoingPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): DamageModifierOutgoingPrius(serialized) {

	}

	[[nodiscard]] auto
	DamageModifierPercentOutgoingPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	DamageModifierPercentOutgoingPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<DamageModifierPercentOutgoingPrius> {
		if (incoming_type_id == DamageModifierPercentOutgoingPrius::type_id) {
			return std::make_shared<DamageModifierPercentOutgoingPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
