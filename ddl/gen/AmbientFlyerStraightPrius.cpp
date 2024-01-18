// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/AmbientFlyerStraightPrius.hpp>

namespace rivet::ddl::generated {
	AmbientFlyerStraightPrius::AmbientFlyerStraightPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		StartHeightMin = serialized->get_float(StartHeightMin_type_id, 50.000000f);
		StartHeightMax = serialized->get_float(StartHeightMax_type_id, 75.000000f);
		AngleOffCamForward = serialized->get_bool(AngleOffCamForward_type_id, false);
		YawAngleMin = serialized->get_float(YawAngleMin_type_id, -60.000000f);
		YawAngleMax = serialized->get_float(YawAngleMax_type_id, 60.000000f);
		PitchAngleMin = serialized->get_float(PitchAngleMin_type_id, 0.000000f);
		PitchAngleMax = serialized->get_float(PitchAngleMax_type_id, 0.000000f);
		SpeedMin = serialized->get_float(SpeedMin_type_id, 6.000000f);
		SpeedMax = serialized->get_float(SpeedMax_type_id, 12.000000f);
		DistToDelete = serialized->get_float(DistToDelete_type_id, 500.000000f); 
	}

	[[nodiscard]] auto
	AmbientFlyerStraightPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	AmbientFlyerStraightPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<AmbientFlyerStraightPrius> {
		if (incoming_type_id == AmbientFlyerStraightPrius::type_id) {
			return std::make_shared<AmbientFlyerStraightPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
