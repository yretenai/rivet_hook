// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/SpawnShotForwardConeTargetingPrius.hpp>
#include <rivet/ddl/generated/SpawnShotAimOffsetTargetingPrius.hpp>
#include <rivet/ddl/generated/SpawnShotForwardTargetingPrius.hpp>
#include <rivet/ddl/generated/SpawnShotBotTargetingPrius.hpp>
#include <rivet/ddl/generated/SpawnShotCodeTargetingPrius.hpp>
#include <rivet/ddl/generated/SpawnShotHeroTargetingPrius.hpp>
#include <rivet/ddl/generated/SpawnShotForwardRandomTargetingPrius.hpp>
#include <rivet/ddl/generated/SpawnShotForwardRandomAimTargetingPrius.hpp>
#include <rivet/ddl/generated/SpawnShotForwardStrafingTargetingPrius.hpp> 

#include <rivet/ddl/generated/SpawnShotTargetingPrius.hpp>

namespace rivet::ddl::generated {
	SpawnShotTargetingPrius::SpawnShotTargetingPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {

	}

	[[nodiscard]] auto
	SpawnShotTargetingPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	SpawnShotTargetingPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<SpawnShotTargetingPrius> {
		if (incoming_type_id == SpawnShotTargetingPrius::type_id) {
			return std::make_shared<SpawnShotTargetingPrius>(serialized);
		}

		auto SpawnShotAimOffsetTargetingPrius_ptr = SpawnShotAimOffsetTargetingPrius::from_substruct(incoming_type_id, serialized);
		if (SpawnShotAimOffsetTargetingPrius_ptr != nullptr) {
			return SpawnShotAimOffsetTargetingPrius_ptr;
		}

		auto SpawnShotBotTargetingPrius_ptr = SpawnShotBotTargetingPrius::from_substruct(incoming_type_id, serialized);
		if (SpawnShotBotTargetingPrius_ptr != nullptr) {
			return SpawnShotBotTargetingPrius_ptr;
		}

		auto SpawnShotForwardConeTargetingPrius_ptr = SpawnShotForwardConeTargetingPrius::from_substruct(incoming_type_id, serialized);
		if (SpawnShotForwardConeTargetingPrius_ptr != nullptr) {
			return SpawnShotForwardConeTargetingPrius_ptr;
		}

		auto SpawnShotCodeTargetingPrius_ptr = SpawnShotCodeTargetingPrius::from_substruct(incoming_type_id, serialized);
		if (SpawnShotCodeTargetingPrius_ptr != nullptr) {
			return SpawnShotCodeTargetingPrius_ptr;
		}

		auto SpawnShotForwardRandomTargetingPrius_ptr = SpawnShotForwardRandomTargetingPrius::from_substruct(incoming_type_id, serialized);
		if (SpawnShotForwardRandomTargetingPrius_ptr != nullptr) {
			return SpawnShotForwardRandomTargetingPrius_ptr;
		}

		auto SpawnShotForwardStrafingTargetingPrius_ptr = SpawnShotForwardStrafingTargetingPrius::from_substruct(incoming_type_id, serialized);
		if (SpawnShotForwardStrafingTargetingPrius_ptr != nullptr) {
			return SpawnShotForwardStrafingTargetingPrius_ptr;
		}

		auto SpawnShotForwardRandomAimTargetingPrius_ptr = SpawnShotForwardRandomAimTargetingPrius::from_substruct(incoming_type_id, serialized);
		if (SpawnShotForwardRandomAimTargetingPrius_ptr != nullptr) {
			return SpawnShotForwardRandomAimTargetingPrius_ptr;
		}

		auto SpawnShotForwardTargetingPrius_ptr = SpawnShotForwardTargetingPrius::from_substruct(incoming_type_id, serialized);
		if (SpawnShotForwardTargetingPrius_ptr != nullptr) {
			return SpawnShotForwardTargetingPrius_ptr;
		}

		auto SpawnShotHeroTargetingPrius_ptr = SpawnShotHeroTargetingPrius::from_substruct(incoming_type_id, serialized);
		if (SpawnShotHeroTargetingPrius_ptr != nullptr) {
			return SpawnShotHeroTargetingPrius_ptr;
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated