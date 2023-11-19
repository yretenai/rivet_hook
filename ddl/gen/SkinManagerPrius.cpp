// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/SkinManagerColorPrius.hpp> 

#include <rivet/ddl/generated/SkinManagerPrius.hpp>

namespace rivet::ddl::generated {
	SkinManagerPrius::SkinManagerPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): SkinManagerBasePrius(serialized) {
		Type = serialized->get_enum<rivet::ddl::generated::x7b720148>(Type_type_id, rivet::ddl::generated::x7b720148_values);
		BodyType = serialized->get_enum<rivet::ddl::generated::x5d60d87e>(BodyType_type_id, rivet::ddl::generated::x5d60d87e_values);
		MaxLayersOverride = serialized->get_uint32(MaxLayersOverride_type_id);
		AddedDynamically = serialized->get_bool(AddedDynamically_type_id);
		ApplySkinTint = serialized->get_bool(ApplySkinTint_type_id);
		ColorConstantName = serialized->get_string(ColorConstantName_type_id);
		R = serialized->get_uint8(R_type_id);
		G = serialized->get_uint8(G_type_id);
		B = serialized->get_uint8(B_type_id);
		ColorConfig = serialized->get_string(ColorConfig_type_id);
		ColorConfigName = serialized->get_string(ColorConfigName_type_id);
		ColorList = serialized->unwrap_into_many<rivet::ddl::generated::SkinManagerColorPrius>(ColorList_type_id);
		IgnoreHead = serialized->get_bool(IgnoreHead_type_id); 
	}

	[[nodiscard]] auto
	SkinManagerPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	SkinManagerPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<SkinManagerPrius> {
		if (incoming_type_id == SkinManagerPrius::type_id) {
			return std::make_shared<SkinManagerPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated