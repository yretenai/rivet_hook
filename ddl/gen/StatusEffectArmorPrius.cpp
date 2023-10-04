// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/StatusEffectArmorPrius.hpp>

namespace rivet::ddl::generated {
	StatusEffectArmorPrius::StatusEffectArmorPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): StatusEffectBasePrius(serialized) {
		IsPercent = serialized->get_bool(IsPercent_type_id);
		ReboundOnMelee = serialized->get_bool(ReboundOnMelee_type_id); 
	}

	[[nodiscard]] auto
	StatusEffectArmorPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	StatusEffectArmorPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<StatusEffectArmorPrius> {
		if (incoming_type_id == StatusEffectArmorPrius::type_id) {
			return std::make_shared<StatusEffectArmorPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated