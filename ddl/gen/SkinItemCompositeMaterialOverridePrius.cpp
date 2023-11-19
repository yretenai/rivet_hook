// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/SkinItemCompositeMaterialOverridePrius.hpp>

namespace rivet::ddl::generated {
	SkinItemCompositeMaterialOverridePrius::SkinItemCompositeMaterialOverridePrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		PreMaterialNameHash = serialized->get_uint32(PreMaterialNameHash_type_id);
		PostMaterialNameHash = serialized->get_uint32(PostMaterialNameHash_type_id); 
	}

	[[nodiscard]] auto
	SkinItemCompositeMaterialOverridePrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	SkinItemCompositeMaterialOverridePrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<SkinItemCompositeMaterialOverridePrius> {
		if (incoming_type_id == SkinItemCompositeMaterialOverridePrius::type_id) {
			return std::make_shared<SkinItemCompositeMaterialOverridePrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated