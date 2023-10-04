// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/HexapodWeaponEmitterPrius.hpp>

namespace rivet::ddl::generated {
	HexapodWeaponEmitterPrius::HexapodWeaponEmitterPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): ComponentEmitterBasePrius(serialized) {
		Locators = serialized->get_strings(Locators_type_id);
		ZOffset = serialized->get_float(ZOffset_type_id);
		EmitFromUser = serialized->get_bool(EmitFromUser_type_id); 
	}

	[[nodiscard]] auto
	HexapodWeaponEmitterPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	HexapodWeaponEmitterPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<HexapodWeaponEmitterPrius> {
		if (incoming_type_id == HexapodWeaponEmitterPrius::type_id) {
			return std::make_shared<HexapodWeaponEmitterPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
