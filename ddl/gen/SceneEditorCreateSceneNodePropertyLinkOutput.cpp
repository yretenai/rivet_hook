// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/SceneEditorCreateSceneNodePropertyLinkOutput.hpp>

namespace rivet::ddl::generated {
	SceneEditorCreateSceneNodePropertyLinkOutput::SceneEditorCreateSceneNodePropertyLinkOutput([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		NumVarNodesCreated = serialized->get_int32(NumVarNodesCreated_type_id, 0u); 
	}

	[[nodiscard]] auto
	SceneEditorCreateSceneNodePropertyLinkOutput::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	SceneEditorCreateSceneNodePropertyLinkOutput::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<SceneEditorCreateSceneNodePropertyLinkOutput> {
		if (incoming_type_id == SceneEditorCreateSceneNodePropertyLinkOutput::type_id) {
			return std::make_shared<SceneEditorCreateSceneNodePropertyLinkOutput>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
