// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/UITutorial.hpp> 

#include <rivet/ddl/generated/UITutorialsConfig.hpp>

namespace rivet::ddl::generated {
	UITutorialsConfig::UITutorialsConfig([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): ConfigBase(serialized) {
		Tutorials = serialized->unwrap_into_many<rivet::ddl::generated::UITutorial>(Tutorials_type_id); 
	}

	[[nodiscard]] auto
	UITutorialsConfig::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	UITutorialsConfig::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<UITutorialsConfig> {
		if (incoming_type_id == UITutorialsConfig::type_id) {
			return std::make_shared<UITutorialsConfig>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
