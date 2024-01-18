// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/UI_VisualEffectKeyFrameYValues.hpp> 

#include <rivet/ddl/generated/UI_VisualEffectKeyFrameProperty.hpp>

namespace rivet::ddl::generated {
	UI_VisualEffectKeyFrameProperty::UI_VisualEffectKeyFrameProperty([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		RangeStyle = serialized->get_enum<rivet::ddl::generated::RangeStyle>(RangeStyle_type_id, rivet::ddl::generated::RangeStyle_values, rivet::ddl::generated::RangeStyle::Random);
		X = serialized->get_float(X_type_id, 0.000000f);
		Y = serialized->unwrap_into<rivet::ddl::generated::UI_VisualEffectKeyFrameYValues>(Y_type_id); 
	}

	[[nodiscard]] auto
	UI_VisualEffectKeyFrameProperty::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	UI_VisualEffectKeyFrameProperty::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<UI_VisualEffectKeyFrameProperty> {
		if (incoming_type_id == UI_VisualEffectKeyFrameProperty::type_id) {
			return std::make_shared<UI_VisualEffectKeyFrameProperty>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
