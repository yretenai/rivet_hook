// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/ShootAtMortarFiringStyle.hpp>
#include <rivet/ddl/generated/ShootAtCurveFiringEmitData.hpp> 

#include <rivet/ddl/generated/ShootAtMortarCurveData.hpp>

namespace rivet::ddl::generated {
	ShootAtMortarCurveData::ShootAtMortarCurveData([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		ShotConfig = serialized->get_string(ShotConfig_type_id, {});
		ShotTimeToTarget = serialized->get_float(ShotTimeToTarget_type_id, -1.000000f);
		DamageHash = serialized->get_string(DamageHash_type_id, {});
		IntroDriver = serialized->get_string(IntroDriver_type_id, {});
		TargetingLoopDriver = serialized->get_string(TargetingLoopDriver_type_id, {});
		ShootingLoopDriver = serialized->get_string(ShootingLoopDriver_type_id, {});
		OutroDriver = serialized->get_string(OutroDriver_type_id, {});
		FiringEmitData = serialized->unwrap_into_many<rivet::ddl::generated::ShootAtCurveFiringEmitData>(FiringEmitData_type_id);
		FiringCurveActor = serialized->get_uint64(FiringCurveActor_type_id, 0ull);
		FiringRate = serialized->get_float(FiringRate_type_id, 1.500000f);
		FiringCurveStride = serialized->get_uint32(FiringCurveStride_type_id, 1u);
		FaceTargetWhenFiring = serialized->get_bool(FaceTargetWhenFiring_type_id, false);
		TargetingDuration = serialized->get_float(TargetingDuration_type_id, -1.000000f);
		FiringDuration = serialized->get_float(FiringDuration_type_id, -1.000000f);
		EarlyOutroAtRange = serialized->get_float(EarlyOutroAtRange_type_id, -1.000000f);
		ShotTargetWarningRadius = serialized->get_float(ShotTargetWarningRadius_type_id, 5.000000f);
		ShowShotWarningIndicators = serialized->get_bool(ShowShotWarningIndicators_type_id, true);
		StopFiringOnDamage = serialized->get_bool(StopFiringOnDamage_type_id, false);
		TargetingEmitLocator = serialized->get_string(TargetingEmitLocator_type_id, {});
		MortarFiringStyle = serialized->unwrap_into<rivet::ddl::generated::ShootAtMortarFiringStyle>(MortarFiringStyle_type_id); 
	}

	[[nodiscard]] auto
	ShootAtMortarCurveData::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	ShootAtMortarCurveData::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<ShootAtMortarCurveData> {
		if (incoming_type_id == ShootAtMortarCurveData::type_id) {
			return std::make_shared<ShootAtMortarCurveData>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
