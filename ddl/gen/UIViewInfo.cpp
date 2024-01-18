// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/DDLVector2.hpp> 

#include <rivet/ddl/generated/UIViewInfo.hpp>

namespace rivet::ddl::generated {
	UIViewInfo::UIViewInfo([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		Name = serialized->get_string(Name_type_id, "MyView");
		URL = serialized->get_string(URL_type_id, "coui://ui/MyPath/MyView.html");
		StageSize = serialized->unwrap_into<rivet::ddl::generated::DDLVector2>(StageSize_type_id);
		ViewScale = serialized->get_float(ViewScale_type_id, 0.000000f); 
	}

	[[nodiscard]] auto
	UIViewInfo::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	UIViewInfo::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<UIViewInfo> {
		if (incoming_type_id == UIViewInfo::type_id) {
			return std::make_shared<UIViewInfo>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
