// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/WeaponTargetingInfo.hpp>

namespace rivet::ddl::generated {
	WeaponTargetingInfo::WeaponTargetingInfo([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		TargetingRange = serialized->get_float(TargetingRange_type_id);
		UsesAimAssist = serialized->get_bool(UsesAimAssist_type_id);
		UsesAutoTarget = serialized->get_bool(UsesAutoTarget_type_id); 
	}

	auto
	WeaponTargetingInfo::get_type_id() const noexcept -> rivet::rivet_type_id {
		return type_id;
	}

	[[nodiscard]] auto
	WeaponTargetingInfo::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	WeaponTargetingInfo::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<WeaponTargetingInfo> {
		if (incoming_type_id == WeaponTargetingInfo::type_id) {
			return std::make_shared<WeaponTargetingInfo>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated