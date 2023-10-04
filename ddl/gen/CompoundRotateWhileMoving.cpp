// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/CompoundRotateWhileMoving.hpp>

namespace rivet::ddl::generated {
	CompoundRotateWhileMoving::CompoundRotateWhileMoving([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): OrientationMode(serialized) {
		MotionOrientedAxis = serialized->get_enum<rivet::ddl::generated::xea512758>(MotionOrientedAxis_type_id, rivet::ddl::generated::xea512758_values);
		MotionOrientedRotationalSpeed = serialized->get_float(MotionOrientedRotationalSpeed_type_id);
		LocalAxis = serialized->get_enum<rivet::ddl::generated::xea512758>(LocalAxis_type_id, rivet::ddl::generated::xea512758_values);
		LocalRotationalSpeed = serialized->get_float(LocalRotationalSpeed_type_id); 
	}

	[[nodiscard]] auto
	CompoundRotateWhileMoving::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	CompoundRotateWhileMoving::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<CompoundRotateWhileMoving> {
		if (incoming_type_id == CompoundRotateWhileMoving::type_id) {
			return std::make_shared<CompoundRotateWhileMoving>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
