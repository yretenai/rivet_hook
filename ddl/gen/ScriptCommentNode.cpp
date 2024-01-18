// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/ScriptCommentNode.hpp>

namespace rivet::ddl::generated {
	ScriptCommentNode::ScriptCommentNode([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		Id = serialized->get_uint64(Id_type_id, 0ull);
		Name = serialized->get_string(Name_type_id, {});
		XPos = serialized->get_int32(XPos_type_id, 0u);
		YPos = serialized->get_int32(YPos_type_id, 0u);
		Width = serialized->get_uint32(Width_type_id, 0u);
		Height = serialized->get_uint32(Height_type_id, 0u); 
	}

	[[nodiscard]] auto
	ScriptCommentNode::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	ScriptCommentNode::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<ScriptCommentNode> {
		if (incoming_type_id == ScriptCommentNode::type_id) {
			return std::make_shared<ScriptCommentNode>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
