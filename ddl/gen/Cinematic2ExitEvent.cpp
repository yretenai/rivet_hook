// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/Cinematic2ExitEvent.hpp>

namespace rivet::ddl::generated {
	Cinematic2ExitEvent::Cinematic2ExitEvent([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): EventBase(serialized) {
		EarlyExit = serialized->get_bool(EarlyExit_type_id); 
	}

	[[nodiscard]] auto
	Cinematic2ExitEvent::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	Cinematic2ExitEvent::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<Cinematic2ExitEvent> {
		if (incoming_type_id == Cinematic2ExitEvent::type_id) {
			return std::make_shared<Cinematic2ExitEvent>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated