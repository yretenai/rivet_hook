// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/DamageModifierIncomingPrius.hpp> 

#include <rivet/ddl/generated/StatusEffectDamageModWrapper.hpp>

namespace rivet::ddl::generated {
	StatusEffectDamageModWrapper::StatusEffectDamageModWrapper([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		DamageMod = serialized->unwrap_into<rivet::ddl::generated::DamageModifierIncomingPrius>(DamageMod_type_id); 
	}

	[[nodiscard]] auto
	StatusEffectDamageModWrapper::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	StatusEffectDamageModWrapper::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<StatusEffectDamageModWrapper> {
		if (incoming_type_id == StatusEffectDamageModWrapper::type_id) {
			return std::make_shared<StatusEffectDamageModWrapper>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
