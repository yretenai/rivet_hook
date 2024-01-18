// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/DDLVector3.hpp> 

#include <rivet/ddl/generated/SpaceDebrisMotionPrius.hpp>

namespace rivet::ddl::generated {
	SpaceDebrisMotionPrius::SpaceDebrisMotionPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		MinRotationRate = serialized->get_float(MinRotationRate_type_id, 0.000000f);
		MaxRotationRate = serialized->get_float(MaxRotationRate_type_id, 360.000000f);
		RotateAxis = serialized->unwrap_into<rivet::ddl::generated::DDLVector3>(RotateAxis_type_id);
		UseRandomRotateAxis = serialized->get_bool(UseRandomRotateAxis_type_id, true);
		MinSpeed = serialized->get_float(MinSpeed_type_id, 0.000000f);
		MaxSpeed = serialized->get_float(MaxSpeed_type_id, 0.000000f);
		MoveDir = serialized->unwrap_into<rivet::ddl::generated::DDLVector3>(MoveDir_type_id);
		UseRandomMoveDir = serialized->get_bool(UseRandomMoveDir_type_id, true); 
	}

	[[nodiscard]] auto
	SpaceDebrisMotionPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	SpaceDebrisMotionPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<SpaceDebrisMotionPrius> {
		if (incoming_type_id == SpaceDebrisMotionPrius::type_id) {
			return std::make_shared<SpaceDebrisMotionPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
