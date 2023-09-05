// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/StatusEffectAutoResurrectPrius.hpp>

namespace rivet::ddl::generated {
	StatusEffectAutoResurrectPrius::StatusEffectAutoResurrectPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): StatusEffectBasePrius(serialized) {
		IsPercent = serialized->get_bool(IsPercent_type_id); 
	}

	auto
	StatusEffectAutoResurrectPrius::get_type_id() const noexcept -> rivet::rivet_type_id {
		return type_id;
	}

	[[nodiscard]] auto
	StatusEffectAutoResurrectPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	StatusEffectAutoResurrectPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<StatusEffectAutoResurrectPrius> {
		if (incoming_type_id == StatusEffectAutoResurrectPrius::type_id) {
			return std::make_shared<StatusEffectAutoResurrectPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated