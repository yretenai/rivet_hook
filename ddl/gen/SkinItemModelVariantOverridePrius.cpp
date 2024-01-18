// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/SkinItemModelVariantOverridePrius.hpp>

namespace rivet::ddl::generated {
	SkinItemModelVariantOverridePrius::SkinItemModelVariantOverridePrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		ModelVariantHash = serialized->get_uint64(ModelVariantHash_type_id, 0ull);
		VariantNameHash = serialized->get_uint32(VariantNameHash_type_id, 0u); 
	}

	[[nodiscard]] auto
	SkinItemModelVariantOverridePrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	SkinItemModelVariantOverridePrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<SkinItemModelVariantOverridePrius> {
		if (incoming_type_id == SkinItemModelVariantOverridePrius::type_id) {
			return std::make_shared<SkinItemModelVariantOverridePrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
