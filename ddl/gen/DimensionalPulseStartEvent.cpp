// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/DimensionalPulseStartEvent.hpp>

namespace rivet::ddl::generated {
	DimensionalPulseStartEvent::DimensionalPulseStartEvent([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): EventBase(serialized) {
		DefaultEffectChance = serialized->get_float(DefaultEffectChance_type_id, 0.000000f); 
	}

	[[nodiscard]] auto
	DimensionalPulseStartEvent::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	DimensionalPulseStartEvent::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<DimensionalPulseStartEvent> {
		if (incoming_type_id == DimensionalPulseStartEvent::type_id) {
			return std::make_shared<DimensionalPulseStartEvent>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
