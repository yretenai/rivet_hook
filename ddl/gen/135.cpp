// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/DamageModifierDamageHashPrius.hpp>

namespace rivet::ddl::generated {
	DamageModifierDamageHashPrius::DamageModifierDamageHashPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): DamageModifierIncomingPrius(serialized) {
		HashList = serialized->get_string(HashList_type_id);
		Exclude = serialized->get_bool(Exclude_type_id); 
	}

	auto
	DamageModifierDamageHashPrius::get_type_id() const noexcept -> rivet::rivet_type_id {
		return type_id;
	}

	[[nodiscard]] auto
	DamageModifierDamageHashPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	DamageModifierDamageHashPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<DamageModifierDamageHashPrius> {
		if (incoming_type_id == DamageModifierDamageHashPrius::type_id) {
			return std::make_shared<DamageModifierDamageHashPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated