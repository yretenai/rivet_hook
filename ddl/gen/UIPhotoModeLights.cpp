// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/UIPhotoModeOption.hpp> 

#include <rivet/ddl/generated/UIPhotoModeLights.hpp>

namespace rivet::ddl::generated {
	UIPhotoModeLights::UIPhotoModeLights([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		LightOptions = serialized->unwrap_into_many<rivet::ddl::generated::UIPhotoModeOption>(LightOptions_type_id);
		KeyLightOptions = serialized->unwrap_into_many<rivet::ddl::generated::UIPhotoModeOption>(KeyLightOptions_type_id);
		AdditionalOptions = serialized->unwrap_into_many<rivet::ddl::generated::UIPhotoModeOption>(AdditionalOptions_type_id); 
	}

	[[nodiscard]] auto
	UIPhotoModeLights::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	UIPhotoModeLights::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<UIPhotoModeLights> {
		if (incoming_type_id == UIPhotoModeLights::type_id) {
			return std::make_shared<UIPhotoModeLights>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
