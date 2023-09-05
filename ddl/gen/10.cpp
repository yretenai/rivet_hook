// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/DDLVector3.hpp> 

#include <rivet/ddl/generated/AccessibilityColorData.hpp>

namespace rivet::ddl::generated {
	AccessibilityColorData::AccessibilityColorData([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		ColorName = serialized->get_string(ColorName_type_id);
		ColorValue = serialized->unwrap_into<rivet::ddl::generated::DDLVector3>(ColorValue_type_id); 
	}

	auto
	AccessibilityColorData::get_type_id() const noexcept -> rivet::rivet_type_id {
		return type_id;
	}

	[[nodiscard]] auto
	AccessibilityColorData::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	AccessibilityColorData::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<AccessibilityColorData> {
		if (incoming_type_id == AccessibilityColorData::type_id) {
			return std::make_shared<AccessibilityColorData>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated