// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/KnockbackTierData.hpp>

namespace rivet::ddl::generated {
	KnockbackTierData::KnockbackTierData([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		KnockbackLevel = serialized->get_enum<rivet::ddl::generated::KnockbackLevels>(KnockbackLevel_type_id, rivet::ddl::generated::KnockbackLevels_values);
		KnockbackAmount = serialized->get_float(KnockbackAmount_type_id);
		StartAtRange = serialized->get_float(StartAtRange_type_id); 
	}

	auto
	KnockbackTierData::get_type_id() const noexcept -> rivet::rivet_type_id {
		return type_id;
	}

	[[nodiscard]] auto
	KnockbackTierData::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	KnockbackTierData::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<KnockbackTierData> {
		if (incoming_type_id == KnockbackTierData::type_id) {
			return std::make_shared<KnockbackTierData>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated