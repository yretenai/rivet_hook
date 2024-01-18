// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/DialogFinishedEvent.hpp>

namespace rivet::ddl::generated {
	DialogFinishedEvent::DialogFinishedEvent([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): EventBase(serialized) {
		PlayCountId = serialized->get_uint16(PlayCountId_type_id, 0u);
		SoundEventName = serialized->get_string(SoundEventName_type_id, {});
		Status = serialized->get_enum<rivet::ddl::generated::x7627517a>(Status_type_id, rivet::ddl::generated::x7627517a_values, rivet::ddl::generated::x7627517a::Finished); 
	}

	[[nodiscard]] auto
	DialogFinishedEvent::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	DialogFinishedEvent::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<DialogFinishedEvent> {
		if (incoming_type_id == DialogFinishedEvent::type_id) {
			return std::make_shared<DialogFinishedEvent>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
