// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/UIFontMapping.hpp> 

#include <rivet/ddl/generated/UIFontMapConfig.hpp>

namespace rivet::ddl::generated {
	UIFontMapConfig::UIFontMapConfig([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): ConfigBase(serialized) {
		FontMappings = serialized->unwrap_into_many<rivet::ddl::generated::UIFontMapping>(FontMappings_type_id); 
	}

	[[nodiscard]] auto
	UIFontMapConfig::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	UIFontMapConfig::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<UIFontMapConfig> {
		if (incoming_type_id == UIFontMapConfig::type_id) {
			return std::make_shared<UIFontMapConfig>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated