// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/ControlRemapPresetData.hpp> 

#include <rivet/ddl/generated/AccessibilityPresetData.hpp>

namespace rivet::ddl::generated {
	AccessibilityPresetData::AccessibilityPresetData([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		Preset = serialized->unwrap_into<rivet::ddl::generated::ControlRemapPresetData>(Preset_type_id); 
	}

	[[nodiscard]] auto
	AccessibilityPresetData::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	AccessibilityPresetData::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<AccessibilityPresetData> {
		if (incoming_type_id == AccessibilityPresetData::type_id) {
			return std::make_shared<AccessibilityPresetData>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
