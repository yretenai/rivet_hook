// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/PickupDetachedEvent.hpp>

namespace rivet::ddl::generated {
	PickupDetachedEvent::PickupDetachedEvent([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): EventBase(serialized) {

	}

	[[nodiscard]] auto
	PickupDetachedEvent::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	PickupDetachedEvent::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<PickupDetachedEvent> {
		if (incoming_type_id == PickupDetachedEvent::type_id) {
			return std::make_shared<PickupDetachedEvent>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated