// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/UserEquippedWeaponFXOnEvent.hpp>

namespace rivet::ddl::generated {
	UserEquippedWeaponFXOnEvent::UserEquippedWeaponFXOnEvent([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): EventBase(serialized) {
		WeaponName = serialized->get_string(WeaponName_type_id, {});
		OwnerIsLocal = serialized->get_bool(OwnerIsLocal_type_id, false);
		OwnerIsHero = serialized->get_bool(OwnerIsHero_type_id, false);
		AmmoCount = serialized->get_float(AmmoCount_type_id, 0.000000f); 
	}

	[[nodiscard]] auto
	UserEquippedWeaponFXOnEvent::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	UserEquippedWeaponFXOnEvent::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<UserEquippedWeaponFXOnEvent> {
		if (incoming_type_id == UserEquippedWeaponFXOnEvent::type_id) {
			return std::make_shared<UserEquippedWeaponFXOnEvent>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
