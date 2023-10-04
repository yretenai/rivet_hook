// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/UICollectibleTypeRynoPlan.hpp>

namespace rivet::ddl::generated {
	UICollectibleTypeRynoPlan::UICollectibleTypeRynoPlan([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): UICollectibleTypeBase(serialized) {
		SaveID = serialized->get_enum<rivet::ddl::generated::x81d3e717>(SaveID_type_id, rivet::ddl::generated::x81d3e717_values);
		DialogueLine = serialized->get_string(DialogueLine_type_id);
		RYNOSchematic = serialized->get_string(RYNOSchematic_type_id); 
	}

	[[nodiscard]] auto
	UICollectibleTypeRynoPlan::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	UICollectibleTypeRynoPlan::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<UICollectibleTypeRynoPlan> {
		if (incoming_type_id == UICollectibleTypeRynoPlan::type_id) {
			return std::make_shared<UICollectibleTypeRynoPlan>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
