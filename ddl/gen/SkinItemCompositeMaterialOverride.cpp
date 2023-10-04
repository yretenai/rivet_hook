// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/AssetReferenceDef.hpp> 

#include <rivet/ddl/generated/SkinItemCompositeMaterialOverride.hpp>

namespace rivet::ddl::generated {
	SkinItemCompositeMaterialOverride::SkinItemCompositeMaterialOverride([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		PreCompositeMaterial = serialized->unwrap_into<rivet::ddl::generated::AssetReferenceDef>(PreCompositeMaterial_type_id);
		PostCompositeMaterial = serialized->unwrap_into<rivet::ddl::generated::AssetReferenceDef>(PostCompositeMaterial_type_id); 
	}

	[[nodiscard]] auto
	SkinItemCompositeMaterialOverride::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	SkinItemCompositeMaterialOverride::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<SkinItemCompositeMaterialOverride> {
		if (incoming_type_id == SkinItemCompositeMaterialOverride::type_id) {
			return std::make_shared<SkinItemCompositeMaterialOverride>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated