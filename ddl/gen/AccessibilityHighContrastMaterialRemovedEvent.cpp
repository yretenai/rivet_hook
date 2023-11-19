// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/AccessibilityHighContrastMaterialRemovedEvent.hpp>

namespace rivet::ddl::generated {
	AccessibilityHighContrastMaterialRemovedEvent::AccessibilityHighContrastMaterialRemovedEvent([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): EventBase(serialized) {

	}

	[[nodiscard]] auto
	AccessibilityHighContrastMaterialRemovedEvent::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	AccessibilityHighContrastMaterialRemovedEvent::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<AccessibilityHighContrastMaterialRemovedEvent> {
		if (incoming_type_id == AccessibilityHighContrastMaterialRemovedEvent::type_id) {
			return std::make_shared<AccessibilityHighContrastMaterialRemovedEvent>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated