// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/UIProgressBarActionPrius.hpp>

namespace rivet::ddl::generated {
	UIProgressBarActionPrius::UIProgressBarActionPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		ActionType = serialized->get_enum<rivet::ddl::generated::x10228b34>(ActionType_type_id, rivet::ddl::generated::x10228b34_values, rivet::ddl::generated::x10228b34::UI);
		BarType = serialized->get_enum<rivet::ddl::generated::x8a20ee54>(BarType_type_id, rivet::ddl::generated::x8a20ee54_values, rivet::ddl::generated::x8a20ee54::Generic);
		IsFriend = serialized->get_bool(IsFriend_type_id, false);
		Text = serialized->get_string(Text_type_id, "");
		StartPercent = serialized->get_float(StartPercent_type_id, 1.000000f);
		EndPercent = serialized->get_float(EndPercent_type_id, 0.000000f); 
	}

	[[nodiscard]] auto
	UIProgressBarActionPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	UIProgressBarActionPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<UIProgressBarActionPrius> {
		if (incoming_type_id == UIProgressBarActionPrius::type_id) {
			return std::make_shared<UIProgressBarActionPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
