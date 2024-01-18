// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/DDLVector3.hpp> 

#include <rivet/ddl/generated/VolumetricFogSettingsDef.hpp>

namespace rivet::ddl::generated {
	VolumetricFogSettingsDef::VolumetricFogSettingsDef([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		Enabled = serialized->get_bool(Enabled_type_id, false);
		Color = serialized->unwrap_into<rivet::ddl::generated::DDLVector3>(Color_type_id);
		Opacity = serialized->get_float(Opacity_type_id, 0.500000f);
		BottomHeight = serialized->get_float(BottomHeight_type_id, -100.000000f);
		TopHeight = serialized->get_float(TopHeight_type_id, 100.000000f);
		NearDistance = serialized->get_float(NearDistance_type_id, 0.000000f);
		FarDistance = serialized->get_float(FarDistance_type_id, 64.000000f);
		SunLightScale = serialized->get_float(SunLightScale_type_id, 0.500000f);
		LightsScale = serialized->get_float(LightsScale_type_id, 0.500000f);
		GIScale = serialized->get_float(GIScale_type_id, 0.250000f);
		NoiseVSpeed = serialized->get_float(NoiseVSpeed_type_id, 0.000000f);
		NoiseSpeed = serialized->get_float(NoiseSpeed_type_id, 0.500000f);
		NoiseScale = serialized->get_float(NoiseScale_type_id, 0.500000f); 
	}

	[[nodiscard]] auto
	VolumetricFogSettingsDef::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	VolumetricFogSettingsDef::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<VolumetricFogSettingsDef> {
		if (incoming_type_id == VolumetricFogSettingsDef::type_id) {
			return std::make_shared<VolumetricFogSettingsDef>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
