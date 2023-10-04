// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/HoverbootKickData.hpp>

namespace rivet::ddl::generated {
	HoverbootKickData::HoverbootKickData([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		MaxSpeedDecel = serialized->get_float(MaxSpeedDecel_type_id);
		MaxSpeedLateralDecel = serialized->get_float(MaxSpeedLateralDecel_type_id);
		MaxSpeedTurnGain = serialized->get_float(MaxSpeedTurnGain_type_id);
		ExtraSpeedPerKickBad = serialized->get_float(ExtraSpeedPerKickBad_type_id);
		ExtraSpeedPerKickGood = serialized->get_float(ExtraSpeedPerKickGood_type_id);
		MaxExtraSpeed = serialized->get_float(MaxExtraSpeed_type_id);
		ExtraSpeedAccel = serialized->get_float(ExtraSpeedAccel_type_id);
		ExtraSpeedDecel = serialized->get_float(ExtraSpeedDecel_type_id);
		ExtraSpeedDecayRate = serialized->get_float(ExtraSpeedDecayRate_type_id);
		KickDurationInitial = serialized->get_float(KickDurationInitial_type_id);
		KickDurationFull = serialized->get_float(KickDurationFull_type_id);
		InputAnalogValueThreshold = serialized->get_float(InputAnalogValueThreshold_type_id);
		TriggerEffectConfig = serialized->get_string(TriggerEffectConfig_type_id); 
	}

	[[nodiscard]] auto
	HoverbootKickData::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	HoverbootKickData::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<HoverbootKickData> {
		if (incoming_type_id == HoverbootKickData::type_id) {
			return std::make_shared<HoverbootKickData>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
