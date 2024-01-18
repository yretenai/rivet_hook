// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/AnimIKFootDownEvent.hpp>

namespace rivet::ddl::generated {
	AnimIKFootDownEvent::AnimIKFootDownEvent([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): EventBase(serialized) {
		Duration = serialized->get_float(Duration_type_id, 1.000000f);
		Locator = serialized->get_string(Locator_type_id, {}); 
	}

	[[nodiscard]] auto
	AnimIKFootDownEvent::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	AnimIKFootDownEvent::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<AnimIKFootDownEvent> {
		if (incoming_type_id == AnimIKFootDownEvent::type_id) {
			return std::make_shared<AnimIKFootDownEvent>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
