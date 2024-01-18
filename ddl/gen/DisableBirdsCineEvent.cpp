// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/DisableBirdsCineEvent.hpp>

namespace rivet::ddl::generated {
	DisableBirdsCineEvent::DisableBirdsCineEvent([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): EventBase(serialized) {
		FadeOutTime = serialized->get_float(FadeOutTime_type_id, 1.000000f); 
	}

	[[nodiscard]] auto
	DisableBirdsCineEvent::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	DisableBirdsCineEvent::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<DisableBirdsCineEvent> {
		if (incoming_type_id == DisableBirdsCineEvent::type_id) {
			return std::make_shared<DisableBirdsCineEvent>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
