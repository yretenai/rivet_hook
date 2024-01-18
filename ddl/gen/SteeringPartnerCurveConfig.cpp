// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/SteeringPartnerCurveConfig.hpp>

namespace rivet::ddl::generated {
	SteeringPartnerCurveConfig::SteeringPartnerCurveConfig([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		PersonalSpaceRadius = serialized->get_float(PersonalSpaceRadius_type_id, 2.000000f);
		MinRateOfAcceleration = serialized->get_float(MinRateOfAcceleration_type_id, 0.200000f);
		MaxRateOfAcceleration = serialized->get_float(MaxRateOfAcceleration_type_id, 5.000000f);
		MinRateOfDeceleration = serialized->get_float(MinRateOfDeceleration_type_id, 0.200000f);
		MaxRateOfDeceleration = serialized->get_float(MaxRateOfDeceleration_type_id, 5.000000f);
		IdleAccelDecel = serialized->get_float(IdleAccelDecel_type_id, 2.000000f);
		SpeedUpDistance = serialized->get_float(SpeedUpDistance_type_id, 3.000000f);
		SlowDownDistance = serialized->get_float(SlowDownDistance_type_id, 2.000000f);
		MaxSpeedVariance = serialized->get_float(MaxSpeedVariance_type_id, 0.600000f);
		MaxTurningVariance = serialized->get_float(MaxTurningVariance_type_id, 0.450000f);
		MinTimeTillReachDestAccel = serialized->get_float(MinTimeTillReachDestAccel_type_id, 1.000000f);
		MaxTimeTillReachDestAccel = serialized->get_float(MaxTimeTillReachDestAccel_type_id, 3.000000f);
		MinTimeTillReachDestDecel = serialized->get_float(MinTimeTillReachDestDecel_type_id, 0.200000f);
		MaxTimeTillReachDestDecel = serialized->get_float(MaxTimeTillReachDestDecel_type_id, 3.000000f);
		UseCurvePathing = serialized->get_bool(UseCurvePathing_type_id, false);
		MaxDistanceFromPath = serialized->get_float(MaxDistanceFromPath_type_id, 8.000000f);
		PartnerSwitchDistance = serialized->get_float(PartnerSwitchDistance_type_id, 5.000000f);
		CurveSwitchDistance = serialized->get_float(CurveSwitchDistance_type_id, 7.000000f); 
	}

	[[nodiscard]] auto
	SteeringPartnerCurveConfig::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	SteeringPartnerCurveConfig::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<SteeringPartnerCurveConfig> {
		if (incoming_type_id == SteeringPartnerCurveConfig::type_id) {
			return std::make_shared<SteeringPartnerCurveConfig>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
