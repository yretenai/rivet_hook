// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/WeaponGamePrius.hpp> 

#include <rivet/ddl/generated/WeaponBasePrius.hpp>

namespace rivet::ddl::generated {
	WeaponBasePrius::WeaponBasePrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {

	}

	[[nodiscard]] auto
	WeaponBasePrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	WeaponBasePrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<WeaponBasePrius> {
		if (incoming_type_id == WeaponBasePrius::type_id) {
			return std::make_shared<WeaponBasePrius>(serialized);
		}

		auto WeaponGamePrius_ptr = WeaponGamePrius::from_substruct(incoming_type_id, serialized);
		if (WeaponGamePrius_ptr != nullptr) {
			return WeaponGamePrius_ptr;
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
