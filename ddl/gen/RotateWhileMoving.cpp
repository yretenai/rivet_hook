// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/RotateWhileMoving.hpp>

namespace rivet::ddl::generated {
	RotateWhileMoving::RotateWhileMoving([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): OrientationMode(serialized) {
		Axis = serialized->get_enum<rivet::ddl::generated::xea512758>(Axis_type_id, rivet::ddl::generated::xea512758_values);
		RotationalSpeed = serialized->get_float(RotationalSpeed_type_id);
		RotationJoint = serialized->get_string(RotationJoint_type_id);
		LocalToVelocity = serialized->get_bool(LocalToVelocity_type_id);
		TiltWithVelocity = serialized->get_bool(TiltWithVelocity_type_id);
		AxisIsWorld = serialized->get_bool(AxisIsWorld_type_id); 
	}

	[[nodiscard]] auto
	RotateWhileMoving::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	RotateWhileMoving::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<RotateWhileMoving> {
		if (incoming_type_id == RotateWhileMoving::type_id) {
			return std::make_shared<RotateWhileMoving>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
