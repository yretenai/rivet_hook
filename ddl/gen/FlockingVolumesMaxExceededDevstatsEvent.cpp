// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/FlockingVolumesMaxExceededDevstatsEvent.hpp>

namespace rivet::ddl::generated {
	FlockingVolumesMaxExceededDevstatsEvent::FlockingVolumesMaxExceededDevstatsEvent([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): EventBase(serialized) {
		EventId = serialized->get_string(EventId_type_id, {});
		Level = serialized->get_string(Level_type_id, {});
		LocationType = serialized->get_enum<rivet::ddl::generated::x3947cf7f>(LocationType_type_id, rivet::ddl::generated::x3947cf7f_values, rivet::ddl::generated::x3947cf7f::FlockingVolume);
		RequiredMax = serialized->get_int32(RequiredMax_type_id, 0u); 
	}

	[[nodiscard]] auto
	FlockingVolumesMaxExceededDevstatsEvent::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	FlockingVolumesMaxExceededDevstatsEvent::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<FlockingVolumesMaxExceededDevstatsEvent> {
		if (incoming_type_id == FlockingVolumesMaxExceededDevstatsEvent::type_id) {
			return std::make_shared<FlockingVolumesMaxExceededDevstatsEvent>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
