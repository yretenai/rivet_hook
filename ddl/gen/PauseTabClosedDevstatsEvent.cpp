// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/PauseTabClosedDevstatsEvent.hpp>

namespace rivet::ddl::generated {
	PauseTabClosedDevstatsEvent::PauseTabClosedDevstatsEvent([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): EventBase(serialized) {
		EventId = serialized->get_string(EventId_type_id);
		TabSegmentId = serialized->get_string(TabSegmentId_type_id);
		ClosedTab = serialized->get_enum<rivet::ddl::generated::PauseTabs>(ClosedTab_type_id, rivet::ddl::generated::PauseTabs_values);
		Duration = serialized->get_float(Duration_type_id); 
	}

	[[nodiscard]] auto
	PauseTabClosedDevstatsEvent::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	PauseTabClosedDevstatsEvent::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<PauseTabClosedDevstatsEvent> {
		if (incoming_type_id == PauseTabClosedDevstatsEvent::type_id) {
			return std::make_shared<PauseTabClosedDevstatsEvent>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated