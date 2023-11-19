// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/DimensionalPulseStopEvent.hpp>

namespace rivet::ddl::generated {
	DimensionalPulseStopEvent::DimensionalPulseStopEvent([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): EventBase(serialized) {

	}

	[[nodiscard]] auto
	DimensionalPulseStopEvent::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	DimensionalPulseStopEvent::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<DimensionalPulseStopEvent> {
		if (incoming_type_id == DimensionalPulseStopEvent::type_id) {
			return std::make_shared<DimensionalPulseStopEvent>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated