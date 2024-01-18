// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/CameraSplineMotionProximityPrius.hpp>
#include <rivet/ddl/generated/CameraSplineMotionTargetMatchPrius.hpp>
#include <rivet/ddl/generated/CameraSplineMotionPathFollowPrius.hpp> 

#include <rivet/ddl/generated/CameraSplineMotionBasePrius.hpp>

namespace rivet::ddl::generated {
	CameraSplineMotionBasePrius::CameraSplineMotionBasePrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		MotionSpline = serialized->get_uint64(MotionSpline_type_id, 0ull);
		SpeedAccel = serialized->get_float(SpeedAccel_type_id, 3.000000f);
		SpeedDecel = serialized->get_float(SpeedDecel_type_id, 3.000000f);
		SpeedMax = serialized->get_float(SpeedMax_type_id, 3.000000f); 
	}

	[[nodiscard]] auto
	CameraSplineMotionBasePrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	CameraSplineMotionBasePrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<CameraSplineMotionBasePrius> {
		if (incoming_type_id == CameraSplineMotionBasePrius::type_id) {
			return std::make_shared<CameraSplineMotionBasePrius>(serialized);
		}

		auto CameraSplineMotionPathFollowPrius_ptr = CameraSplineMotionPathFollowPrius::from_substruct(incoming_type_id, serialized);
		if (CameraSplineMotionPathFollowPrius_ptr != nullptr) {
			return CameraSplineMotionPathFollowPrius_ptr;
		}

		auto CameraSplineMotionTargetMatchPrius_ptr = CameraSplineMotionTargetMatchPrius::from_substruct(incoming_type_id, serialized);
		if (CameraSplineMotionTargetMatchPrius_ptr != nullptr) {
			return CameraSplineMotionTargetMatchPrius_ptr;
		}

		auto CameraSplineMotionProximityPrius_ptr = CameraSplineMotionProximityPrius::from_substruct(incoming_type_id, serialized);
		if (CameraSplineMotionProximityPrius_ptr != nullptr) {
			return CameraSplineMotionProximityPrius_ptr;
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
