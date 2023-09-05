// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/WeaponCarpetBomberPrius.hpp>

namespace rivet::ddl::generated {
	WeaponCarpetBomberPrius::WeaponCarpetBomberPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): WeaponGamePrius(serialized) {

	}

	auto
	WeaponCarpetBomberPrius::get_type_id() const noexcept -> rivet::rivet_type_id {
		return type_id;
	}

	[[nodiscard]] auto
	WeaponCarpetBomberPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	WeaponCarpetBomberPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<WeaponCarpetBomberPrius> {
		if (incoming_type_id == WeaponCarpetBomberPrius::type_id) {
			return std::make_shared<WeaponCarpetBomberPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated