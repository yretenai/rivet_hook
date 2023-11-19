// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/PrefabZoneDeactivatedEvent.hpp>

namespace rivet::ddl::generated {
	PrefabZoneDeactivatedEvent::PrefabZoneDeactivatedEvent([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): EventBase(serialized) {
		ZoneId = serialized->get_uint64(ZoneId_type_id); 
	}

	[[nodiscard]] auto
	PrefabZoneDeactivatedEvent::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	PrefabZoneDeactivatedEvent::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<PrefabZoneDeactivatedEvent> {
		if (incoming_type_id == PrefabZoneDeactivatedEvent::type_id) {
			return std::make_shared<PrefabZoneDeactivatedEvent>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated