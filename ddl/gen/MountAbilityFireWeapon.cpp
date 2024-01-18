// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/MountAbilityFireWeapon.hpp>

namespace rivet::ddl::generated {
	MountAbilityFireWeapon::MountAbilityFireWeapon([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): MountAbilityBase(serialized) {
		EquipIndex = serialized->get_uint32(EquipIndex_type_id, 0u);
		TriggerIndex = serialized->get_uint32(TriggerIndex_type_id, 0u);
		ReticleForwardOffsetFromCamera = serialized->get_float(ReticleForwardOffsetFromCamera_type_id, 6.000000f);
		ReticleUpOffsetFromCamera = serialized->get_float(ReticleUpOffsetFromCamera_type_id, 0.000000f);
		ReticleTestDist = serialized->get_float(ReticleTestDist_type_id, 50.000000f);
		ReticleOn = serialized->get_bool(ReticleOn_type_id, true);
		IDString = serialized->get_string(IDString_type_id, {}); 
	}

	[[nodiscard]] auto
	MountAbilityFireWeapon::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	MountAbilityFireWeapon::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<MountAbilityFireWeapon> {
		if (incoming_type_id == MountAbilityFireWeapon::type_id) {
			return std::make_shared<MountAbilityFireWeapon>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
