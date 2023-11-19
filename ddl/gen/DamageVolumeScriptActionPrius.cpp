// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/DamageVolumeScriptActionPrius.hpp>

namespace rivet::ddl::generated {
	DamageVolumeScriptActionPrius::DamageVolumeScriptActionPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		ActionType = serialized->get_enum<rivet::ddl::generated::x10228b34>(ActionType_type_id, rivet::ddl::generated::x10228b34_values);
		WarmUpTime = serialized->get_float(WarmUpTime_type_id);
		DamageOnTime = serialized->get_float(DamageOnTime_type_id);
		DamageOffTime = serialized->get_float(DamageOffTime_type_id); 
	}

	[[nodiscard]] auto
	DamageVolumeScriptActionPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	DamageVolumeScriptActionPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<DamageVolumeScriptActionPrius> {
		if (incoming_type_id == DamageVolumeScriptActionPrius::type_id) {
			return std::make_shared<DamageVolumeScriptActionPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated