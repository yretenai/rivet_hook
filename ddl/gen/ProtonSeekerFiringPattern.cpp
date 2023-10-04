// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/ProtonSeekerFiringPattern.hpp>

namespace rivet::ddl::generated {
	ProtonSeekerFiringPattern::ProtonSeekerFiringPattern([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		Weight = serialized->get_float(Weight_type_id);
		AttackDelay = serialized->get_float(AttackDelay_type_id);
		ShotDelay = serialized->get_float(ShotDelay_type_id);
		AttackCount = serialized->get_uint8(AttackCount_type_id);
		ShotCount = serialized->get_uint8(ShotCount_type_id);
		ExtraShotCount = serialized->get_uint8(ExtraShotCount_type_id);
		ExplosiveShotCount = serialized->get_uint8(ExplosiveShotCount_type_id);
		Scatter = serialized->get_bool(Scatter_type_id);
		Concurrent = serialized->get_bool(Concurrent_type_id);
		TimeToCenterOfCurve = serialized->get_float(TimeToCenterOfCurve_type_id);
		ShotDuration = serialized->get_float(ShotDuration_type_id);
		ExplosiveShotFuseMin = serialized->get_float(ExplosiveShotFuseMin_type_id);
		ExplosiveShotFuseMax = serialized->get_float(ExplosiveShotFuseMax_type_id);
		CurveActor = serialized->get_uint64(CurveActor_type_id);
		AttachCurveToTarget = serialized->get_bool(AttachCurveToTarget_type_id);
		AttachCurveTargetVol = serialized->get_uint64(AttachCurveTargetVol_type_id); 
	}

	[[nodiscard]] auto
	ProtonSeekerFiringPattern::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	ProtonSeekerFiringPattern::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<ProtonSeekerFiringPattern> {
		if (incoming_type_id == ProtonSeekerFiringPattern::type_id) {
			return std::make_shared<ProtonSeekerFiringPattern>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
