// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/HoverbootJumpData.hpp>

namespace rivet::ddl::generated {
	HoverbootJumpData::HoverbootJumpData([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		MinInitialHorizontalSpeed = serialized->get_float(MinInitialHorizontalSpeed_type_id, 0.000000f);
		TurnSpeedGain = serialized->get_float(TurnSpeedGain_type_id, -15.000000f);
		TurnSpeedDamp = serialized->get_float(TurnSpeedDamp_type_id, -8.000000f);
		TurnSpeedMax = serialized->get_float(TurnSpeedMax_type_id, 90.000000f);
		BreakableSpeedThreshold = serialized->get_float(BreakableSpeedThreshold_type_id, 10.000000f); 
	}

	[[nodiscard]] auto
	HoverbootJumpData::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	HoverbootJumpData::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<HoverbootJumpData> {
		if (incoming_type_id == HoverbootJumpData::type_id) {
			return std::make_shared<HoverbootJumpData>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
