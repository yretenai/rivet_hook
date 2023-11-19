// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/PauseMenuHideEvent.hpp>

namespace rivet::ddl::generated {
	PauseMenuHideEvent::PauseMenuHideEvent([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): EventBase(serialized) {

	}

	[[nodiscard]] auto
	PauseMenuHideEvent::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	PauseMenuHideEvent::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<PauseMenuHideEvent> {
		if (incoming_type_id == PauseMenuHideEvent::type_id) {
			return std::make_shared<PauseMenuHideEvent>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated