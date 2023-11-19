// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/DDLVector3.hpp> 

#include <rivet/ddl/generated/RaycastStateChangedEvent.hpp>

namespace rivet::ddl::generated {
	RaycastStateChangedEvent::RaycastStateChangedEvent([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): EventBase(serialized) {
		Blocked = serialized->get_bool(Blocked_type_id);
		HitPos = serialized->unwrap_into<rivet::ddl::generated::DDLVector3>(HitPos_type_id); 
	}

	[[nodiscard]] auto
	RaycastStateChangedEvent::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	RaycastStateChangedEvent::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<RaycastStateChangedEvent> {
		if (incoming_type_id == RaycastStateChangedEvent::type_id) {
			return std::make_shared<RaycastStateChangedEvent>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated