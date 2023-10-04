// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/SpawnShotForwardConeRandomTargetingPrius.hpp> 

#include <rivet/ddl/generated/SpawnShotForwardConeTargetingPrius.hpp>

namespace rivet::ddl::generated {
	SpawnShotForwardConeTargetingPrius::SpawnShotForwardConeTargetingPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): SpawnShotTargetingPrius(serialized) {
		MaxAimAngle = serialized->get_float(MaxAimAngle_type_id); 
	}

	[[nodiscard]] auto
	SpawnShotForwardConeTargetingPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	SpawnShotForwardConeTargetingPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<SpawnShotForwardConeTargetingPrius> {
		if (incoming_type_id == SpawnShotForwardConeTargetingPrius::type_id) {
			return std::make_shared<SpawnShotForwardConeTargetingPrius>(serialized);
		}

		auto SpawnShotForwardConeRandomTargetingPrius_ptr = SpawnShotForwardConeRandomTargetingPrius::from_substruct(incoming_type_id, serialized);
		if (SpawnShotForwardConeRandomTargetingPrius_ptr != nullptr) {
			return SpawnShotForwardConeRandomTargetingPrius_ptr;
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated