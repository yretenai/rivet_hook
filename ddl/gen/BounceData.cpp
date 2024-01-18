// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/BounceData.hpp>

namespace rivet::ddl::generated {
	BounceData::BounceData([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		RollBounceScale = serialized->get_float(RollBounceScale_type_id, 0.700000f);
		FlatHitBounceScale = serialized->get_float(FlatHitBounceScale_type_id, 0.700000f);
		EnvironmentHitGravity = serialized->get_float(EnvironmentHitGravity_type_id, 10.000000f);
		ActorRollBounceScale = serialized->get_float(ActorRollBounceScale_type_id, 0.700000f);
		ActorFlatHitBounceScale = serialized->get_float(ActorFlatHitBounceScale_type_id, 0.700000f);
		ActorBounceGravity = serialized->get_float(ActorBounceGravity_type_id, 10.000000f);
		RotationScale = serialized->get_float(RotationScale_type_id, 1.000000f);
		MinBounceSpeed = serialized->get_float(MinBounceSpeed_type_id, 0.000000f); 
	}

	[[nodiscard]] auto
	BounceData::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	BounceData::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<BounceData> {
		if (incoming_type_id == BounceData::type_id) {
			return std::make_shared<BounceData>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
