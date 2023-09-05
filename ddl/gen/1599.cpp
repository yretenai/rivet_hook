// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/DamageKnockbackPerTypeData.hpp>

namespace rivet::ddl::generated {
	DamageKnockbackPerTypeData::DamageKnockbackPerTypeData([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		DamagePercent = serialized->get_float(DamagePercent_type_id);
		Knockback = serialized->get_enum<rivet::ddl::generated::KnockbackLevels>(Knockback_type_id, rivet::ddl::generated::KnockbackLevels_values);
		KnockbackPercent = serialized->get_float(KnockbackPercent_type_id); 
	}

	auto
	DamageKnockbackPerTypeData::get_type_id() const noexcept -> rivet::rivet_type_id {
		return type_id;
	}

	[[nodiscard]] auto
	DamageKnockbackPerTypeData::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	DamageKnockbackPerTypeData::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<DamageKnockbackPerTypeData> {
		if (incoming_type_id == DamageKnockbackPerTypeData::type_id) {
			return std::make_shared<DamageKnockbackPerTypeData>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated