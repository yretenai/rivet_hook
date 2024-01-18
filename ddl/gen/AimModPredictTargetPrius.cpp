// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/AimModPredictTargetPrius.hpp>

namespace rivet::ddl::generated {
	AimModPredictTargetPrius::AimModPredictTargetPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): AimModifierPrius(serialized) {
		TimeToFullAccuracy = serialized->get_float(TimeToFullAccuracy_type_id, 1.000000f);
		MaxPredictiveSpeed = serialized->get_float(MaxPredictiveSpeed_type_id, 0.000000f);
		AdditionalLeadTime = serialized->get_float(AdditionalLeadTime_type_id, 0.000000f);
		AimAccel = serialized->get_float(AimAccel_type_id, 50.000000f);
		AimSpeedMax = serialized->get_float(AimSpeedMax_type_id, 50.000000f);
		FollowGround = serialized->get_bool(FollowGround_type_id, false); 
	}

	[[nodiscard]] auto
	AimModPredictTargetPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	AimModPredictTargetPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<AimModPredictTargetPrius> {
		if (incoming_type_id == AimModPredictTargetPrius::type_id) {
			return std::make_shared<AimModPredictTargetPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
