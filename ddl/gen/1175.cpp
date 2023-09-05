// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/BarrelObstructionBase.hpp> 

#include <rivet/ddl/generated/WeaponObstructionUpgradable.hpp>

namespace rivet::ddl::generated {
	WeaponObstructionUpgradable::WeaponObstructionUpgradable([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): WeaponObstructionBase(serialized) {
		WeaponV1 = serialized->unwrap_into<rivet::ddl::generated::BarrelObstructionBase>(WeaponV1_type_id);
		WeaponV5 = serialized->unwrap_into<rivet::ddl::generated::BarrelObstructionBase>(WeaponV5_type_id); 
	}

	auto
	WeaponObstructionUpgradable::get_type_id() const noexcept -> rivet::rivet_type_id {
		return type_id;
	}

	[[nodiscard]] auto
	WeaponObstructionUpgradable::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	WeaponObstructionUpgradable::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<WeaponObstructionUpgradable> {
		if (incoming_type_id == WeaponObstructionUpgradable::type_id) {
			return std::make_shared<WeaponObstructionUpgradable>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated