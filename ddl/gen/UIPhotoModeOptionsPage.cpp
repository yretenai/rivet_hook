// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/UIPhotoModeOption.hpp> 

#include <rivet/ddl/generated/UIPhotoModeOptionsPage.hpp>

namespace rivet::ddl::generated {
	UIPhotoModeOptionsPage::UIPhotoModeOptionsPage([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		Label = serialized->get_string(Label_type_id);
		Icon = serialized->get_string(Icon_type_id);
		Options = serialized->unwrap_into_many<rivet::ddl::generated::UIPhotoModeOption>(Options_type_id); 
	}

	[[nodiscard]] auto
	UIPhotoModeOptionsPage::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	UIPhotoModeOptionsPage::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<UIPhotoModeOptionsPage> {
		if (incoming_type_id == UIPhotoModeOptionsPage::type_id) {
			return std::make_shared<UIPhotoModeOptionsPage>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
