// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/DDLVector3.hpp> 

#include <rivet/ddl/generated/BiomeAsset.hpp>

namespace rivet::ddl::generated {
	BiomeAsset::BiomeAsset([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		ModelAssetPath = serialized->get_string(ModelAssetPath_type_id);
		Weight = serialized->get_float(Weight_type_id);
		HoudiniDebugPrimitive = serialized->get_enum<rivet::ddl::generated::x8eddd608>(HoudiniDebugPrimitive_type_id, rivet::ddl::generated::x8eddd608_values);
		HoudiniDebugColor = serialized->unwrap_into<rivet::ddl::generated::DDLVector3>(HoudiniDebugColor_type_id); 
	}

	[[nodiscard]] auto
	BiomeAsset::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	BiomeAsset::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<BiomeAsset> {
		if (incoming_type_id == BiomeAsset::type_id) {
			return std::make_shared<BiomeAsset>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated