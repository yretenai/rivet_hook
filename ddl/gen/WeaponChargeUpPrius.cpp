// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/WeaponChargeUpPrius.hpp>

namespace rivet::ddl::generated {
	WeaponChargeUpPrius::WeaponChargeUpPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): WeaponGamePrius(serialized) {

	}

	[[nodiscard]] auto
	WeaponChargeUpPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	WeaponChargeUpPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<WeaponChargeUpPrius> {
		if (incoming_type_id == WeaponChargeUpPrius::type_id) {
			return std::make_shared<WeaponChargeUpPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
