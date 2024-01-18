// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/VolumetricClouds2DLayerDef.hpp>

namespace rivet::ddl::generated {
	VolumetricClouds2DLayerDef::VolumetricClouds2DLayerDef([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		Enabled = serialized->get_bool(Enabled_type_id, false);
		CloudsLayerStart = serialized->get_float(CloudsLayerStart_type_id, 80000.000000f);
		BaseTile = serialized->get_float(BaseTile_type_id, 0.621000f);
		DetailTile = serialized->get_float(DetailTile_type_id, 5.781000f);
		DetailStrength = serialized->get_float(DetailStrength_type_id, 0.250000f);
		CurlTile = serialized->get_float(CurlTile_type_id, 0.100000f);
		CurlStrength = serialized->get_float(CurlStrength_type_id, 2000.000000f);
		CloudSize = serialized->get_float(CloudSize_type_id, 100000.000000f);
		CloudDensity = serialized->get_float(CloudDensity_type_id, 3.000000f);
		CloudCoverageModifier = serialized->get_float(CloudCoverageModifier_type_id, 0.000000f);
		CloudTypeModifier = serialized->get_float(CloudTypeModifier_type_id, 0.000000f);
		WeatherTexSize = serialized->get_float(WeatherTexSize_type_id, 1000000.000000f);
		WeatherTexOffsetAzimuth = serialized->get_float(WeatherTexOffsetAzimuth_type_id, 0.000000f);
		WeatherTexOffsetDistance = serialized->get_float(WeatherTexOffsetDistance_type_id, 0.000000f);
		WindAzimuth = serialized->get_float(WindAzimuth_type_id, 0.000000f);
		WindIntensity = serialized->get_float(WindIntensity_type_id, 0.000000f);
		EnabledRotation = serialized->get_bool(EnabledRotation_type_id, false);
		RotationPivotAzimuth = serialized->get_float(RotationPivotAzimuth_type_id, 0.000000f);
		RotationPivotDistance = serialized->get_float(RotationPivotDistance_type_id, 0.000000f);
		RotationIntensity = serialized->get_float(RotationIntensity_type_id, 1.000000f);
		NoiseFlowAzimuth = serialized->get_float(NoiseFlowAzimuth_type_id, 180.000000f);
		NoiseFlowIntensity = serialized->get_float(NoiseFlowIntensity_type_id, 10.000000f); 
	}

	[[nodiscard]] auto
	VolumetricClouds2DLayerDef::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	VolumetricClouds2DLayerDef::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<VolumetricClouds2DLayerDef> {
		if (incoming_type_id == VolumetricClouds2DLayerDef::type_id) {
			return std::make_shared<VolumetricClouds2DLayerDef>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
