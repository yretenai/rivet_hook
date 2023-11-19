// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/BurstPistolProjectileFlyingStopEvent.hpp>

namespace rivet::ddl::generated {
	BurstPistolProjectileFlyingStopEvent::BurstPistolProjectileFlyingStopEvent([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): ProjectileFlyingStartEvent(serialized) {

	}

	[[nodiscard]] auto
	BurstPistolProjectileFlyingStopEvent::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	BurstPistolProjectileFlyingStopEvent::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<BurstPistolProjectileFlyingStopEvent> {
		if (incoming_type_id == BurstPistolProjectileFlyingStopEvent::type_id) {
			return std::make_shared<BurstPistolProjectileFlyingStopEvent>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated