// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/DialogEvent.hpp>

namespace rivet::ddl::generated {
	DialogEvent::DialogEvent([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): SoundEvent(serialized) {
		SeekOffset = serialized->get_float(SeekOffset_type_id, 0.000000f);
		StartTime = serialized->get_float(StartTime_type_id, 0.000000f);
		TickSubtitlesOnPause = serialized->get_bool(TickSubtitlesOnPause_type_id, false);
		IgnoreAnimPerformance = serialized->get_bool(IgnoreAnimPerformance_type_id, false);
		PlayOnlyOnAuthority = serialized->get_bool(PlayOnlyOnAuthority_type_id, false); 
	}

	[[nodiscard]] auto
	DialogEvent::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	DialogEvent::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<DialogEvent> {
		if (incoming_type_id == DialogEvent::type_id) {
			return std::make_shared<DialogEvent>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
