// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/ProjectileFlyingStopEvent.hpp>

namespace rivet::ddl::generated {
	ProjectileFlyingStopEvent::ProjectileFlyingStopEvent([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): EventBase(serialized) {
		WeaponTypeName = serialized->get_string(WeaponTypeName_type_id);
		PerkName = serialized->get_string(PerkName_type_id); 
	}

	[[nodiscard]] auto
	ProjectileFlyingStopEvent::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	ProjectileFlyingStopEvent::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<ProjectileFlyingStopEvent> {
		if (incoming_type_id == ProjectileFlyingStopEvent::type_id) {
			return std::make_shared<ProjectileFlyingStopEvent>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated