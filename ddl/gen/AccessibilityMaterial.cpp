// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/AccessibilityMaterial.hpp>

namespace rivet::ddl::generated {
	AccessibilityMaterial::AccessibilityMaterial([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		Name = serialized->get_string(Name_type_id);
		LookupName = serialized->get_string(LookupName_type_id);
		Material = serialized->get_string(Material_type_id); 
	}

	[[nodiscard]] auto
	AccessibilityMaterial::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	AccessibilityMaterial::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<AccessibilityMaterial> {
		if (incoming_type_id == AccessibilityMaterial::type_id) {
			return std::make_shared<AccessibilityMaterial>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
