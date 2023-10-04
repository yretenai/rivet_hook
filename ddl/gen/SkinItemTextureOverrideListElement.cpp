// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/SkinItemTextureOverride.hpp> 

#include <rivet/ddl/generated/SkinItemTextureOverrideListElement.hpp>

namespace rivet::ddl::generated {
	SkinItemTextureOverrideListElement::SkinItemTextureOverrideListElement([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		Available = serialized->get_enum<rivet::ddl::generated::x7ecfc969>(Available_type_id, rivet::ddl::generated::x7ecfc969_values);
		TextureOverride = serialized->unwrap_into<rivet::ddl::generated::SkinItemTextureOverride>(TextureOverride_type_id); 
	}

	[[nodiscard]] auto
	SkinItemTextureOverrideListElement::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	SkinItemTextureOverrideListElement::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<SkinItemTextureOverrideListElement> {
		if (incoming_type_id == SkinItemTextureOverrideListElement::type_id) {
			return std::make_shared<SkinItemTextureOverrideListElement>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
