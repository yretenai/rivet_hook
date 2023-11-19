// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/SyncedBoxActivateEvent.hpp>

namespace rivet::ddl::generated {
	SyncedBoxActivateEvent::SyncedBoxActivateEvent([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): EventBase(serialized) {

	}

	[[nodiscard]] auto
	SyncedBoxActivateEvent::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	SyncedBoxActivateEvent::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<SyncedBoxActivateEvent> {
		if (incoming_type_id == SyncedBoxActivateEvent::type_id) {
			return std::make_shared<SyncedBoxActivateEvent>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated