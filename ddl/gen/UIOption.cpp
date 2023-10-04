// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/UIOptionTypeBase.hpp> 

#include <rivet/ddl/generated/UIOption.hpp>

namespace rivet::ddl::generated {
	UIOption::UIOption([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		OptionID = serialized->get_enum<rivet::ddl::generated::x33afe7f4>(OptionID_type_id, rivet::ddl::generated::x33afe7f4_values);
		Label = serialized->get_string(Label_type_id);
		Description = serialized->get_string(Description_type_id);
		DescriptionAlt = serialized->get_string(DescriptionAlt_type_id);
		AccessibilityIcon = serialized->get_string(AccessibilityIcon_type_id);
		InputAnnotationIcon = serialized->get_string(InputAnnotationIcon_type_id);
		PreviewImage = serialized->get_string(PreviewImage_type_id);
		Type = serialized->unwrap_into<rivet::ddl::generated::UIOptionTypeBase>(Type_type_id);
		ForGamepad = serialized->get_bool(ForGamepad_type_id);
		ForMkb = serialized->get_bool(ForMkb_type_id); 
	}

	[[nodiscard]] auto
	UIOption::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	UIOption::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<UIOption> {
		if (incoming_type_id == UIOption::type_id) {
			return std::make_shared<UIOption>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated