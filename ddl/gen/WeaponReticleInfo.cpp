// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/WeaponReticleInfo.hpp>

namespace rivet::ddl::generated {
	WeaponReticleInfo::WeaponReticleInfo([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		SpreadScale = serialized->get_float(SpreadScale_type_id, 1.000000f);
		SpreadReturn = serialized->get_bool(SpreadReturn_type_id, false);
		SpreadReturnDuration = serialized->get_float(SpreadReturnDuration_type_id, 0.000000f);
		SpreadReturnDelay = serialized->get_float(SpreadReturnDelay_type_id, 0.000000f); 
	}

	[[nodiscard]] auto
	WeaponReticleInfo::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	WeaponReticleInfo::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<WeaponReticleInfo> {
		if (incoming_type_id == WeaponReticleInfo::type_id) {
			return std::make_shared<WeaponReticleInfo>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
