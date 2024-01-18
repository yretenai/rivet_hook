// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/TargetTypeDamage.hpp>

namespace rivet::ddl::generated {
	TargetTypeDamage::TargetTypeDamage([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		TargetType = serialized->get_bitset<rivet::ddl::generated::TargetType>(TargetType_type_id, rivet::ddl::generated::TargetType_values, 0u);
		ExplosionInnerDamage = serialized->get_float(ExplosionInnerDamage_type_id, 30.000000f); 
	}

	[[nodiscard]] auto
	TargetTypeDamage::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	TargetTypeDamage::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<TargetTypeDamage> {
		if (incoming_type_id == TargetTypeDamage::type_id) {
			return std::make_shared<TargetTypeDamage>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
