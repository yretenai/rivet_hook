// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/SetHighContrastShaderActionPrius.hpp>

namespace rivet::ddl::generated {
	SetHighContrastShaderActionPrius::SetHighContrastShaderActionPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		ActionType = serialized->get_enum<rivet::ddl::generated::x10228b34>(ActionType_type_id, rivet::ddl::generated::x10228b34_values);
		HighlightConfig = serialized->get_string(HighlightConfig_type_id);
		HighlightType = serialized->get_enum<rivet::ddl::generated::xf2109875>(HighlightType_type_id, rivet::ddl::generated::xf2109875_values); 
	}

	[[nodiscard]] auto
	SetHighContrastShaderActionPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	SetHighContrastShaderActionPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<SetHighContrastShaderActionPrius> {
		if (incoming_type_id == SetHighContrastShaderActionPrius::type_id) {
			return std::make_shared<SetHighContrastShaderActionPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated