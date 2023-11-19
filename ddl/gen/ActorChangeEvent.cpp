// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/ActorChangeEvent.hpp>

namespace rivet::ddl::generated {
	ActorChangeEvent::ActorChangeEvent([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): UDSEventBase(serialized) {
		primaryActor = serialized->get_string(primaryActor_type_id);
		secondaryActors = serialized->get_strings(secondaryActors_type_id); 
	}

	[[nodiscard]] auto
	ActorChangeEvent::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	ActorChangeEvent::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<ActorChangeEvent> {
		if (incoming_type_id == ActorChangeEvent::type_id) {
			return std::make_shared<ActorChangeEvent>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated