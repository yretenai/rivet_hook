// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/EngageEvent.hpp>

namespace rivet::ddl::generated {
	EngageEvent::EngageEvent([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): EventBase(serialized) {
		Unlosable = serialized->get_bool(Unlosable_type_id); 
	}

	[[nodiscard]] auto
	EngageEvent::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	EngageEvent::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<EngageEvent> {
		if (incoming_type_id == EngageEvent::type_id) {
			return std::make_shared<EngageEvent>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated