// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/AnimFootUpEvent.hpp>

namespace rivet::ddl::generated {
	AnimFootUpEvent::AnimFootUpEvent([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): EventBase(serialized) {
		Locator = serialized->get_string(Locator_type_id); 
	}

	[[nodiscard]] auto
	AnimFootUpEvent::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	AnimFootUpEvent::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<AnimFootUpEvent> {
		if (incoming_type_id == AnimFootUpEvent::type_id) {
			return std::make_shared<AnimFootUpEvent>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated