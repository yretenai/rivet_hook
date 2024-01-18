// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/CameraRotationInputData.hpp>
#include <rivet/ddl/generated/OffsetSplineData.hpp>
#include <rivet/ddl/generated/DDLVector3.hpp> 

#include <rivet/ddl/generated/SplineCameraProximityPrius.hpp>

namespace rivet::ddl::generated {
	SplineCameraProximityPrius::SplineCameraProximityPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): CameraPrius(serialized) {
		MotionSpline = serialized->get_uint64(MotionSpline_type_id, 0ull);
		ProximityTarget = serialized->get_uint64(ProximityTarget_type_id, 0ull);
		LookTarget = serialized->get_uint64(LookTarget_type_id, 0ull);
		LookMode = serialized->get_enum<rivet::ddl::generated::x73a6f97a>(LookMode_type_id, rivet::ddl::generated::x73a6f97a_values, rivet::ddl::generated::x73a6f97a::Target);
		TargetOffset = serialized->unwrap_into<rivet::ddl::generated::DDLVector3>(TargetOffset_type_id);
		OffsetData = serialized->unwrap_into<rivet::ddl::generated::OffsetSplineData>(OffsetData_type_id);
		RotationInput = serialized->unwrap_into<rivet::ddl::generated::CameraRotationInputData>(RotationInput_type_id); 
	}

	[[nodiscard]] auto
	SplineCameraProximityPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	SplineCameraProximityPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<SplineCameraProximityPrius> {
		if (incoming_type_id == SplineCameraProximityPrius::type_id) {
			return std::make_shared<SplineCameraProximityPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
