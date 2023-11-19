// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/EditorDebugOptions.hpp>

namespace rivet::ddl::generated {
	EditorDebugOptions::EditorDebugOptions([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		DOFVisualization = serialized->get_bool(DOFVisualization_type_id);
		LookAtVisualization = serialized->get_bool(LookAtVisualization_type_id);
		CameraConeVisualization = serialized->get_bool(CameraConeVisualization_type_id);
		IgnoreJumpToShot = serialized->get_bool(IgnoreJumpToShot_type_id);
		ToggleCineDebugMenu = serialized->get_bool(ToggleCineDebugMenu_type_id);
		ShowGrid = serialized->get_bool(ShowGrid_type_id); 
	}

	[[nodiscard]] auto
	EditorDebugOptions::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	EditorDebugOptions::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<EditorDebugOptions> {
		if (incoming_type_id == EditorDebugOptions::type_id) {
			return std::make_shared<EditorDebugOptions>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated