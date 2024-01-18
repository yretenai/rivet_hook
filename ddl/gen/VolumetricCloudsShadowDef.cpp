// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/VolumetricCloudsShadowDef.hpp>

namespace rivet::ddl::generated {
	VolumetricCloudsShadowDef::VolumetricCloudsShadowDef([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		EnabledShadow = serialized->get_bool(EnabledShadow_type_id, false);
		ShadowBrightness = serialized->get_float(ShadowBrightness_type_id, 0.500000f);
		ShadowTiling = serialized->get_float(ShadowTiling_type_id, 1.000000f);
		ShadowSpeed = serialized->get_float(ShadowSpeed_type_id, 1.000000f); 
	}

	[[nodiscard]] auto
	VolumetricCloudsShadowDef::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	VolumetricCloudsShadowDef::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<VolumetricCloudsShadowDef> {
		if (incoming_type_id == VolumetricCloudsShadowDef::type_id) {
			return std::make_shared<VolumetricCloudsShadowDef>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
