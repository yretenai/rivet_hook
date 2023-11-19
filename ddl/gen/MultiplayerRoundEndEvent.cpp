// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/MultiplayerRoundEndEvent.hpp>

namespace rivet::ddl::generated {
	MultiplayerRoundEndEvent::MultiplayerRoundEndEvent([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): EventBase(serialized) {
		Reason = serialized->get_enum<rivet::ddl::generated::x33ef665a>(Reason_type_id, rivet::ddl::generated::x33ef665a_values); 
	}

	[[nodiscard]] auto
	MultiplayerRoundEndEvent::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	MultiplayerRoundEndEvent::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<MultiplayerRoundEndEvent> {
		if (incoming_type_id == MultiplayerRoundEndEvent::type_id) {
			return std::make_shared<MultiplayerRoundEndEvent>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated