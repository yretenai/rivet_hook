// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/MountAbilityHexapodRewind.hpp>

namespace rivet::ddl::generated {
	MountAbilityHexapodRewind::MountAbilityHexapodRewind([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): MountAbilityBase(serialized) {
		Rate = serialized->get_float(Rate_type_id);
		Accel = serialized->get_float(Accel_type_id);
		Delay = serialized->get_float(Delay_type_id); 
	}

	[[nodiscard]] auto
	MountAbilityHexapodRewind::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	MountAbilityHexapodRewind::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<MountAbilityHexapodRewind> {
		if (incoming_type_id == MountAbilityHexapodRewind::type_id) {
			return std::make_shared<MountAbilityHexapodRewind>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
