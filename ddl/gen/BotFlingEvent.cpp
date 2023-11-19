// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/BotFlingEvent.hpp>

namespace rivet::ddl::generated {
	BotFlingEvent::BotFlingEvent([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): BotForceMoveBaseEvent(serialized) {
		TargetLocator = serialized->get_string(TargetLocator_type_id);
		FlingLocator = serialized->get_string(FlingLocator_type_id);
		Speed = serialized->get_float(Speed_type_id);
		OverrideAutoTargetAngle = serialized->get_float(OverrideAutoTargetAngle_type_id);
		VaryDirection = serialized->get_bool(VaryDirection_type_id);
		PreserveYVelocity = serialized->get_bool(PreserveYVelocity_type_id);
		UseSourceActorFacing = serialized->get_bool(UseSourceActorFacing_type_id);
		UseSourceActorFacingForTargeting = serialized->get_bool(UseSourceActorFacingForTargeting_type_id); 
	}

	[[nodiscard]] auto
	BotFlingEvent::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	BotFlingEvent::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<BotFlingEvent> {
		if (incoming_type_id == BotFlingEvent::type_id) {
			return std::make_shared<BotFlingEvent>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated