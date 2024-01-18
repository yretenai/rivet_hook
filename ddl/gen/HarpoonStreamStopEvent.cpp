// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/HarpoonStreamStopEvent.hpp>

namespace rivet::ddl::generated {
	HarpoonStreamStopEvent::HarpoonStreamStopEvent([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): EventBase(serialized) {
		StreamLength = serialized->get_float(StreamLength_type_id, 1.000000f); 
	}

	[[nodiscard]] auto
	HarpoonStreamStopEvent::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	HarpoonStreamStopEvent::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<HarpoonStreamStopEvent> {
		if (incoming_type_id == HarpoonStreamStopEvent::type_id) {
			return std::make_shared<HarpoonStreamStopEvent>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
