// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/CommentBaseDef.hpp>

namespace rivet::ddl::generated {
	CommentBaseDef::CommentBaseDef([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): NodeGraphItemDef(serialized) {
		Text = serialized->get_string(Text_type_id, {});
		X = serialized->get_float(X_type_id, 0.000000f);
		Y = serialized->get_float(Y_type_id, 0.000000f);
		Width = serialized->get_float(Width_type_id, 0.000000f);
		Height = serialized->get_float(Height_type_id, 0.000000f); 
	}

	[[nodiscard]] auto
	CommentBaseDef::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	CommentBaseDef::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<CommentBaseDef> {
		if (incoming_type_id == CommentBaseDef::type_id) {
			return std::make_shared<CommentBaseDef>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
