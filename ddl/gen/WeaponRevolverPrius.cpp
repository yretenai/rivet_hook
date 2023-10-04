// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/WeaponRevolverPrius.hpp>

namespace rivet::ddl::generated {
	WeaponRevolverPrius::WeaponRevolverPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): WeaponGamePrius(serialized) {

	}

	[[nodiscard]] auto
	WeaponRevolverPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	WeaponRevolverPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<WeaponRevolverPrius> {
		if (incoming_type_id == WeaponRevolverPrius::type_id) {
			return std::make_shared<WeaponRevolverPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
