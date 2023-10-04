// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/FocusTrackingSolverData.hpp>

namespace rivet::ddl::generated {
	FocusTrackingSolverData::FocusTrackingSolverData([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		JointChain = serialized->get_string(JointChain_type_id);
		EndEffectorJoint = serialized->get_string(EndEffectorJoint_type_id);
		FocusPositionName = serialized->get_string(FocusPositionName_type_id);
		PollRefPoseEveryTick = serialized->get_bool(PollRefPoseEveryTick_type_id);
		ReferencePoseTime = serialized->get_float(ReferencePoseTime_type_id);
		SetEndEffectorFwdToModelFwd = serialized->get_bool(SetEndEffectorFwdToModelFwd_type_id);
		MinYawAngle = serialized->get_float(MinYawAngle_type_id);
		MaxYawAngle = serialized->get_float(MaxYawAngle_type_id);
		MinPitchAngle = serialized->get_float(MinPitchAngle_type_id);
		MaxPitchAngle = serialized->get_float(MaxPitchAngle_type_id);
		WeightSpreadScheme = serialized->get_enum<rivet::ddl::generated::WeightSpreadScheme>(WeightSpreadScheme_type_id, rivet::ddl::generated::WeightSpreadScheme_values); 
	}

	[[nodiscard]] auto
	FocusTrackingSolverData::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	FocusTrackingSolverData::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<FocusTrackingSolverData> {
		if (incoming_type_id == FocusTrackingSolverData::type_id) {
			return std::make_shared<FocusTrackingSolverData>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
