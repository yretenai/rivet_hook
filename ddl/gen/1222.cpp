// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/PerfSpecData.hpp>

namespace rivet::ddl::generated {
	PerfSpecData::PerfSpecData([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		Spec = serialized->get_enum<rivet::ddl::generated::x11adfe43>(Spec_type_id, rivet::ddl::generated::x11adfe43_values);
		LodScaleMultiplier = serialized->get_float(LodScaleMultiplier_type_id);
		ModelLodClamp = serialized->get_enum<rivet::ddl::generated::x4a11042>(ModelLodClamp_type_id, rivet::ddl::generated::x4a11042_values);
		CsmLodCountBias = serialized->get_int32(CsmLodCountBias_type_id);
		ShadowDrawDistMultiplier = serialized->get_float(ShadowDrawDistMultiplier_type_id);
		VolumetricFarDistanceMultiplier = serialized->get_float(VolumetricFarDistanceMultiplier_type_id);
		VolumetricResolutionMultiplier = serialized->get_float(VolumetricResolutionMultiplier_type_id);
		AORadiusInMetersMultiplier = serialized->get_float(AORadiusInMetersMultiplier_type_id);
		AODistanceInMetersMultiplier = serialized->get_float(AODistanceInMetersMultiplier_type_id);
		WeatherVFXSplashRangeMultiplier = serialized->get_float(WeatherVFXSplashRangeMultiplier_type_id);
		WeatherParticlesMaxDrawDistanceMultiplier = serialized->get_float(WeatherParticlesMaxDrawDistanceMultiplier_type_id);
		WeatherParticlesDensityMultiplier = serialized->get_float(WeatherParticlesDensityMultiplier_type_id);
		EnabledVolumetricClouds = serialized->get_bool(EnabledVolumetricClouds_type_id);
		CloudDownSample = serialized->get_float(CloudDownSample_type_id);
		EnabledCloudEdgeBlur = serialized->get_bool(EnabledCloudEdgeBlur_type_id);
		EnabledCloudLODDepth = serialized->get_bool(EnabledCloudLODDepth_type_id);
		EnabledCloudShadow = serialized->get_bool(EnabledCloudShadow_type_id);
		EnabledCloudGodray = serialized->get_bool(EnabledCloudGodray_type_id);
		EstTimeToRenderEnvProbeFaceCpu = serialized->get_float(EstTimeToRenderEnvProbeFaceCpu_type_id);
		EstTimeToRenderEnvProbeFaceGpu = serialized->get_float(EstTimeToRenderEnvProbeFaceGpu_type_id); 
	}

	auto
	PerfSpecData::get_type_id() const noexcept -> rivet::rivet_type_id {
		return type_id;
	}

	[[nodiscard]] auto
	PerfSpecData::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	PerfSpecData::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<PerfSpecData> {
		if (incoming_type_id == PerfSpecData::type_id) {
			return std::make_shared<PerfSpecData>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated