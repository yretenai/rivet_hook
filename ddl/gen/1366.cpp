// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/RecoveryLedgeLowerClearanceParams.hpp> 

#include <rivet/ddl/generated/RecoveryLedgeModeParams.hpp>

namespace rivet::ddl::generated {
	RecoveryLedgeModeParams::RecoveryLedgeModeParams([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		QueryRadius = serialized->get_float(QueryRadius_type_id);
		RightHandQueryRadius = serialized->get_float(RightHandQueryRadius_type_id);
		DistanceBetweenHands = serialized->get_float(DistanceBetweenHands_type_id);
		MinDistanceBetweenHands = serialized->get_float(MinDistanceBetweenHands_type_id);
		RightHandQueryDepth = serialized->get_float(RightHandQueryDepth_type_id);
		LedgeOffsetTolerance = serialized->get_float(LedgeOffsetTolerance_type_id);
		MaxLedgeSearchHeight = serialized->get_float(MaxLedgeSearchHeight_type_id);
		MinLedgeSearchHeight = serialized->get_float(MinLedgeSearchHeight_type_id);
		MaxHeightAboveLastGround = serialized->get_float(MaxHeightAboveLastGround_type_id);
		MaxUpperGroundSlope = serialized->get_float(MaxUpperGroundSlope_type_id);
		GroundClearance = serialized->unwrap_into<rivet::ddl::generated::RecoveryLedgeLowerClearanceParams>(GroundClearance_type_id);
		FluidClearance = serialized->unwrap_into<rivet::ddl::generated::RecoveryLedgeLowerClearanceParams>(FluidClearance_type_id);
		WallCheckVerticalOffset = serialized->get_float(WallCheckVerticalOffset_type_id);
		UpperClearanceHorizDist = serialized->get_float(UpperClearanceHorizDist_type_id);
		ClearanceQueryRadius = serialized->get_float(ClearanceQueryRadius_type_id); 
	}

	auto
	RecoveryLedgeModeParams::get_type_id() const noexcept -> rivet::rivet_type_id {
		return type_id;
	}

	[[nodiscard]] auto
	RecoveryLedgeModeParams::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	RecoveryLedgeModeParams::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<RecoveryLedgeModeParams> {
		if (incoming_type_id == RecoveryLedgeModeParams::type_id) {
			return std::make_shared<RecoveryLedgeModeParams>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated