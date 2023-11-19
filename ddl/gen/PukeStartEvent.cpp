// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/PukeStartEvent.hpp>

namespace rivet::ddl::generated {
	PukeStartEvent::PukeStartEvent([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): EventBase(serialized) {
		Locator = serialized->get_string(Locator_type_id); 
	}

	[[nodiscard]] auto
	PukeStartEvent::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	PukeStartEvent::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<PukeStartEvent> {
		if (incoming_type_id == PukeStartEvent::type_id) {
			return std::make_shared<PukeStartEvent>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated