// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/UIOptionsPage.hpp>
#include <rivet/ddl/generated/UIOptionColorData.hpp>
#include <rivet/ddl/generated/UIHUDIconToggleOptions.hpp>
#include <rivet/ddl/generated/UIOptionsPresetData.hpp> 

#include <rivet/ddl/generated/UIOptionsConfig.hpp>

namespace rivet::ddl::generated {
	UIOptionsConfig::UIOptionsConfig([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): ConfigBase(serialized) {
		Pages = serialized->unwrap_into_many<rivet::ddl::generated::UIOptionsPage>(Pages_type_id);
		Colors = serialized->unwrap_into_many<rivet::ddl::generated::UIOptionColorData>(Colors_type_id);
		HUDIconToggleOptions = serialized->unwrap_into<rivet::ddl::generated::UIHUDIconToggleOptions>(HUDIconToggleOptions_type_id);
		SimpleControlsOptions = serialized->unwrap_into<rivet::ddl::generated::UIOptionsPresetData>(SimpleControlsOptions_type_id);
		VisualPresetOptions = serialized->unwrap_into<rivet::ddl::generated::UIOptionsPresetData>(VisualPresetOptions_type_id);
		HearingPresetOptions = serialized->unwrap_into<rivet::ddl::generated::UIOptionsPresetData>(HearingPresetOptions_type_id);
		MotorPresetOptions = serialized->unwrap_into<rivet::ddl::generated::UIOptionsPresetData>(MotorPresetOptions_type_id); 
	}

	[[nodiscard]] auto
	UIOptionsConfig::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	UIOptionsConfig::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<UIOptionsConfig> {
		if (incoming_type_id == UIOptionsConfig::type_id) {
			return std::make_shared<UIOptionsConfig>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
