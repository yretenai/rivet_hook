// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/DDLVector3.hpp> 

#include <rivet/ddl/generated/DefaultPhotoLightSettings.hpp>

namespace rivet::ddl::generated {
	DefaultPhotoLightSettings::DefaultPhotoLightSettings([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		DefaultIntensity = serialized->get_float(DefaultIntensity_type_id);
		DefaultLightConeAngle = serialized->get_float(DefaultLightConeAngle_type_id);
		DefaultSoftness = serialized->get_float(DefaultSoftness_type_id);
		DefaultRange = serialized->get_float(DefaultRange_type_id);
		DefaultShadowOn = serialized->get_bool(DefaultShadowOn_type_id);
		DefaultColorRGB = serialized->unwrap_into<rivet::ddl::generated::DDLVector3>(DefaultColorRGB_type_id); 
	}

	auto
	DefaultPhotoLightSettings::get_type_id() const noexcept -> rivet::rivet_type_id {
		return type_id;
	}

	[[nodiscard]] auto
	DefaultPhotoLightSettings::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	DefaultPhotoLightSettings::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<DefaultPhotoLightSettings> {
		if (incoming_type_id == DefaultPhotoLightSettings::type_id) {
			return std::make_shared<DefaultPhotoLightSettings>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated