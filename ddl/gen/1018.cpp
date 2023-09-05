// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/AssetReferenceDef.hpp> 

#include <rivet/ddl/generated/SkinItemTextureOverride.hpp>

namespace rivet::ddl::generated {
	SkinItemTextureOverride::SkinItemTextureOverride([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		OriginalMaterial = serialized->unwrap_into<rivet::ddl::generated::AssetReferenceDef>(OriginalMaterial_type_id);
		OverrideTexture = serialized->unwrap_into<rivet::ddl::generated::AssetReferenceDef>(OverrideTexture_type_id);
		ConstantName = serialized->get_string(ConstantName_type_id); 
	}

	auto
	SkinItemTextureOverride::get_type_id() const noexcept -> rivet::rivet_type_id {
		return type_id;
	}

	[[nodiscard]] auto
	SkinItemTextureOverride::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	SkinItemTextureOverride::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<SkinItemTextureOverride> {
		if (incoming_type_id == SkinItemTextureOverride::type_id) {
			return std::make_shared<SkinItemTextureOverride>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated