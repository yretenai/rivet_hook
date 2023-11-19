// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/AssetMigrationProject.hpp> 

#include <rivet/ddl/generated/AssetMigrationDef.hpp>

namespace rivet::ddl::generated {
	AssetMigrationDef::AssetMigrationDef([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		Host = serialized->get_string(Host_type_id);
		Port = serialized->get_string(Port_type_id);
		Extensions = serialized->get_strings(Extensions_type_id);
		Projects = serialized->unwrap_into_many<rivet::ddl::generated::AssetMigrationProject>(Projects_type_id); 
	}

	[[nodiscard]] auto
	AssetMigrationDef::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	AssetMigrationDef::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<AssetMigrationDef> {
		if (incoming_type_id == AssetMigrationDef::type_id) {
			return std::make_shared<AssetMigrationDef>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated