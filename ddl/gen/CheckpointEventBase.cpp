// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/CheckpointTriggeredEvent.hpp>
#include <rivet/ddl/generated/CheckpointLoadedEvent.hpp> 

#include <rivet/ddl/generated/CheckpointEventBase.hpp>

namespace rivet::ddl::generated {
	CheckpointEventBase::CheckpointEventBase([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): EventBase(serialized) {

	}

	[[nodiscard]] auto
	CheckpointEventBase::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	CheckpointEventBase::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<CheckpointEventBase> {
		if (incoming_type_id == CheckpointEventBase::type_id) {
			return std::make_shared<CheckpointEventBase>(serialized);
		}

		auto CheckpointLoadedEvent_ptr = CheckpointLoadedEvent::from_substruct(incoming_type_id, serialized);
		if (CheckpointLoadedEvent_ptr != nullptr) {
			return CheckpointLoadedEvent_ptr;
		}

		auto CheckpointTriggeredEvent_ptr = CheckpointTriggeredEvent::from_substruct(incoming_type_id, serialized);
		if (CheckpointTriggeredEvent_ptr != nullptr) {
			return CheckpointTriggeredEvent_ptr;
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated