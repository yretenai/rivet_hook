// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/CodeBranchRef.hpp> 

#include <rivet/ddl/generated/ProjectDef.hpp>

namespace rivet::ddl::generated {
	ProjectDef::ProjectDef([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		Id = serialized->get_string(Id_type_id, "");
		GameExeName = serialized->get_string(GameExeName_type_id, "");
		CodeBranchRef = serialized->unwrap_into<rivet::ddl::generated::CodeBranchRef>(CodeBranchRef_type_id);
		Timestamp = serialized->get_uint64(Timestamp_type_id, 0ull);
		GameBuildCacheDir = serialized->get_string(GameBuildCacheDir_type_id, "");
		GameBuildCacheOrigin = serialized->get_string(GameBuildCacheOrigin_type_id, "");
		AssetBranchPath = serialized->get_string(AssetBranchPath_type_id, "");
		AssetBranchChoices = serialized->get_strings(AssetBranchChoices_type_id); 
	}

	[[nodiscard]] auto
	ProjectDef::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	ProjectDef::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<ProjectDef> {
		if (incoming_type_id == ProjectDef::type_id) {
			return std::make_shared<ProjectDef>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
