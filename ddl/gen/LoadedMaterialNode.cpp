// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/MaterialNode.hpp> 

#include <rivet/ddl/generated/LoadedMaterialNode.hpp>

namespace rivet::ddl::generated {
	LoadedMaterialNode::LoadedMaterialNode([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		SourceFileFullPath = serialized->get_string(SourceFileFullPath_type_id, {});
		LibraryName = serialized->get_string(LibraryName_type_id, {});
		FromLibraryFile = serialized->get_bool(FromLibraryFile_type_id, false);
		Id = serialized->get_uint32(Id_type_id, 0u);
		Name = serialized->get_string(Name_type_id, {});
		Node = serialized->unwrap_into<rivet::ddl::generated::MaterialNode>(Node_type_id); 
	}

	[[nodiscard]] auto
	LoadedMaterialNode::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	LoadedMaterialNode::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<LoadedMaterialNode> {
		if (incoming_type_id == LoadedMaterialNode::type_id) {
			return std::make_shared<LoadedMaterialNode>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
