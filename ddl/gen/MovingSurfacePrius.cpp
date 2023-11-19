// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/GameMovingSurfaceSegmentedPrius.hpp>
#include <rivet/ddl/generated/GameMovingSurfaceConveyorPrius.hpp>
#include <rivet/ddl/generated/GameRotatingConveyorPrius.hpp>
#include <rivet/ddl/generated/GameCurveConveyorPrius.hpp> 

#include <rivet/ddl/generated/MovingSurfacePrius.hpp>

namespace rivet::ddl::generated {
	MovingSurfacePrius::MovingSurfacePrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		MotionStyle = serialized->get_enum<rivet::ddl::generated::x77402cb9>(MotionStyle_type_id, rivet::ddl::generated::x77402cb9_values);
		ApplyStyle = serialized->get_enum<rivet::ddl::generated::xf41a4c2>(ApplyStyle_type_id, rivet::ddl::generated::xf41a4c2_values);
		CameraStyle = serialized->get_enum<rivet::ddl::generated::x9b6c99b2>(CameraStyle_type_id, rivet::ddl::generated::x9b6c99b2_values);
		ReferenceJoint = serialized->get_string(ReferenceJoint_type_id);
		UpdateRiderGravity = serialized->get_bool(UpdateRiderGravity_type_id);
		NavDataZoneFile = serialized->get_string(NavDataZoneFile_type_id);
		SoundEmitterIDs = serialized->get_uint64s(SoundEmitterIDs_type_id); 
	}

	[[nodiscard]] auto
	MovingSurfacePrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	MovingSurfacePrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<MovingSurfacePrius> {
		if (incoming_type_id == MovingSurfacePrius::type_id) {
			return std::make_shared<MovingSurfacePrius>(serialized);
		}

		auto GameCurveConveyorPrius_ptr = GameCurveConveyorPrius::from_substruct(incoming_type_id, serialized);
		if (GameCurveConveyorPrius_ptr != nullptr) {
			return GameCurveConveyorPrius_ptr;
		}

		auto GameRotatingConveyorPrius_ptr = GameRotatingConveyorPrius::from_substruct(incoming_type_id, serialized);
		if (GameRotatingConveyorPrius_ptr != nullptr) {
			return GameRotatingConveyorPrius_ptr;
		}

		auto GameMovingSurfaceConveyorPrius_ptr = GameMovingSurfaceConveyorPrius::from_substruct(incoming_type_id, serialized);
		if (GameMovingSurfaceConveyorPrius_ptr != nullptr) {
			return GameMovingSurfaceConveyorPrius_ptr;
		}

		auto GameMovingSurfaceSegmentedPrius_ptr = GameMovingSurfaceSegmentedPrius::from_substruct(incoming_type_id, serialized);
		if (GameMovingSurfaceSegmentedPrius_ptr != nullptr) {
			return GameMovingSurfaceSegmentedPrius_ptr;
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated