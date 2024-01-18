// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/HeroPortalZipLineData.hpp> 

#include <rivet/ddl/generated/HeroPortalZipConfig.hpp>

namespace rivet::ddl::generated {
	HeroPortalZipConfig::HeroPortalZipConfig([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): ConfigBase(serialized) {
		MinTargetDistance = serialized->get_float(MinTargetDistance_type_id, 10.000000f);
		MaxTargetDistance = serialized->get_float(MaxTargetDistance_type_id, 40.000000f);
		MaxAngleStartAutoTarget = serialized->get_float(MaxAngleStartAutoTarget_type_id, 7.000000f);
		MinAngleEndAutoTarget = serialized->get_float(MinAngleEndAutoTarget_type_id, 14.000000f);
		CombatMaxAngleStartAutoTarget = serialized->get_float(CombatMaxAngleStartAutoTarget_type_id, 7.000000f);
		CombatMinAngleEndAutoTarget = serialized->get_float(CombatMinAngleEndAutoTarget_type_id, 14.000000f);
		StopMomentumTime = serialized->get_float(StopMomentumTime_type_id, 0.600000f);
		MaxMomentumDistance = serialized->get_float(MaxMomentumDistance_type_id, 3.000000f);
		PortalInitialScale = serialized->get_float(PortalInitialScale_type_id, 0.010000f);
		PortalPreReturnScale = serialized->get_float(PortalPreReturnScale_type_id, 1.000000f);
		PortalPostReturnScale = serialized->get_float(PortalPostReturnScale_type_id, 1.000000f);
		PortalFinalScale = serialized->get_float(PortalFinalScale_type_id, 3.000000f);
		PreWarpTime = serialized->get_float(PreWarpTime_type_id, 0.200000f);
		LineData = serialized->unwrap_into<rivet::ddl::generated::HeroPortalZipLineData>(LineData_type_id);
		PortalActor = serialized->get_string(PortalActor_type_id, {});
		PortalVFXActor = serialized->get_string(PortalVFXActor_type_id, {});
		CameraAimContext = serialized->get_string(CameraAimContext_type_id, {});
		PortalRightAimContext = serialized->get_string(PortalRightAimContext_type_id, {});
		PortalLeftAimContext = serialized->get_string(PortalLeftAimContext_type_id, {});
		MaxPortalSpeed = serialized->get_float(MaxPortalSpeed_type_id, 40.000000f);
		PortalAccel = serialized->get_float(PortalAccel_type_id, 70.000000f); 
	}

	[[nodiscard]] auto
	HeroPortalZipConfig::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	HeroPortalZipConfig::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<HeroPortalZipConfig> {
		if (incoming_type_id == HeroPortalZipConfig::type_id) {
			return std::make_shared<HeroPortalZipConfig>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
