// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/CameraRotationInputData.hpp> 

#include <rivet/ddl/generated/DualSplineCameraProximityPrius.hpp>

namespace rivet::ddl::generated {
	DualSplineCameraProximityPrius::DualSplineCameraProximityPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): CameraPrius(serialized) {
		MotionSpline = serialized->get_uint64(MotionSpline_type_id);
		TargetSpline = serialized->get_uint64(TargetSpline_type_id);
		TargetActor = serialized->get_uint64(TargetActor_type_id);
		MotionMode = serialized->get_enum<rivet::ddl::generated::xde534179>(MotionMode_type_id, rivet::ddl::generated::xde534179_values);
		RotationInput = serialized->unwrap_into<rivet::ddl::generated::CameraRotationInputData>(RotationInput_type_id); 
	}

	[[nodiscard]] auto
	DualSplineCameraProximityPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	DualSplineCameraProximityPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<DualSplineCameraProximityPrius> {
		if (incoming_type_id == DualSplineCameraProximityPrius::type_id) {
			return std::make_shared<DualSplineCameraProximityPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
