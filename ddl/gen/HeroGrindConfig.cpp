// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/GrindVolumeApproachData.hpp>
#include <rivet/ddl/generated/GrindSlopeData.hpp>
#include <rivet/ddl/generated/GrindMoveData.hpp> 

#include <rivet/ddl/generated/HeroGrindConfig.hpp>

namespace rivet::ddl::generated {
	HeroGrindConfig::HeroGrindConfig([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): ConfigBase(serialized) {
		MoveData = serialized->unwrap_into<rivet::ddl::generated::GrindMoveData>(MoveData_type_id);
		SlopeData = serialized->unwrap_into<rivet::ddl::generated::GrindSlopeData>(SlopeData_type_id);
		GapApproachData = serialized->unwrap_into<rivet::ddl::generated::GrindVolumeApproachData>(GapApproachData_type_id);
		HazardApproachData = serialized->unwrap_into<rivet::ddl::generated::GrindVolumeApproachData>(HazardApproachData_type_id);
		MinAccessibilityTimeSlowScale = serialized->get_float(MinAccessibilityTimeSlowScale_type_id, 0.250000f);
		CameraShakeConfig = serialized->get_string(CameraShakeConfig_type_id, {});
		GrindHorizontalTolerance = serialized->get_float(GrindHorizontalTolerance_type_id, 0.650000f);
		GrindVerticalTolerance = serialized->get_float(GrindVerticalTolerance_type_id, 0.650000f);
		GrindPreferCameraAngleTol = serialized->get_float(GrindPreferCameraAngleTol_type_id, 70.000000f);
		GrindPreferPlayerAngleTol = serialized->get_float(GrindPreferPlayerAngleTol_type_id, 45.000000f);
		GrindForwardToleranceJump = serialized->get_float(GrindForwardToleranceJump_type_id, 8.500000f);
		GrindVerticalToleranceJump = serialized->get_float(GrindVerticalToleranceJump_type_id, 2.000000f);
		GrindHorizontalMinimumJump = serialized->get_float(GrindHorizontalMinimumJump_type_id, 1.000000f);
		GrindHorizontalMaximumJump = serialized->get_float(GrindHorizontalMaximumJump_type_id, 4.500000f);
		WallRunTransferLookAheadTime = serialized->get_float(WallRunTransferLookAheadTime_type_id, 0.300000f);
		FastSpeedThresholdPercent = serialized->get_float(FastSpeedThresholdPercent_type_id, 0.800000f); 
	}

	[[nodiscard]] auto
	HeroGrindConfig::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	HeroGrindConfig::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<HeroGrindConfig> {
		if (incoming_type_id == HeroGrindConfig::type_id) {
			return std::make_shared<HeroGrindConfig>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
