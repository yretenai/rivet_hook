// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/AnimBodyMoveArmLeftEvent.hpp>
#include <rivet/ddl/generated/AnimBodyMoveHeadEvent.hpp>
#include <rivet/ddl/generated/AnimBodyMoveLegRightEvent.hpp>
#include <rivet/ddl/generated/AnimBodyMoveArmRightEvent.hpp>
#include <rivet/ddl/generated/AnimBodyMoveHandLeftEvent.hpp>
#include <rivet/ddl/generated/AnimBodyMoveHandRightEvent.hpp>
#include <rivet/ddl/generated/AnimBodyMoveTorsoEvent.hpp>
#include <rivet/ddl/generated/AnimBodyMoveHipsEvent.hpp>
#include <rivet/ddl/generated/AnimBodyMoveLegLeftEvent.hpp> 

#include <rivet/ddl/generated/AnimBodyMoveBaseEvent.hpp>

namespace rivet::ddl::generated {
	AnimBodyMoveBaseEvent::AnimBodyMoveBaseEvent([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): EventBase(serialized) {
		Speed = serialized->get_enum<rivet::ddl::generated::x59a8f068>(Speed_type_id, rivet::ddl::generated::x59a8f068_values); 
	}

	[[nodiscard]] auto
	AnimBodyMoveBaseEvent::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	AnimBodyMoveBaseEvent::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<AnimBodyMoveBaseEvent> {
		if (incoming_type_id == AnimBodyMoveBaseEvent::type_id) {
			return std::make_shared<AnimBodyMoveBaseEvent>(serialized);
		}

		auto AnimBodyMoveLegLeftEvent_ptr = AnimBodyMoveLegLeftEvent::from_substruct(incoming_type_id, serialized);
		if (AnimBodyMoveLegLeftEvent_ptr != nullptr) {
			return AnimBodyMoveLegLeftEvent_ptr;
		}

		auto AnimBodyMoveTorsoEvent_ptr = AnimBodyMoveTorsoEvent::from_substruct(incoming_type_id, serialized);
		if (AnimBodyMoveTorsoEvent_ptr != nullptr) {
			return AnimBodyMoveTorsoEvent_ptr;
		}

		auto AnimBodyMoveHandRightEvent_ptr = AnimBodyMoveHandRightEvent::from_substruct(incoming_type_id, serialized);
		if (AnimBodyMoveHandRightEvent_ptr != nullptr) {
			return AnimBodyMoveHandRightEvent_ptr;
		}

		auto AnimBodyMoveHandLeftEvent_ptr = AnimBodyMoveHandLeftEvent::from_substruct(incoming_type_id, serialized);
		if (AnimBodyMoveHandLeftEvent_ptr != nullptr) {
			return AnimBodyMoveHandLeftEvent_ptr;
		}

		auto AnimBodyMoveLegRightEvent_ptr = AnimBodyMoveLegRightEvent::from_substruct(incoming_type_id, serialized);
		if (AnimBodyMoveLegRightEvent_ptr != nullptr) {
			return AnimBodyMoveLegRightEvent_ptr;
		}

		auto AnimBodyMoveHeadEvent_ptr = AnimBodyMoveHeadEvent::from_substruct(incoming_type_id, serialized);
		if (AnimBodyMoveHeadEvent_ptr != nullptr) {
			return AnimBodyMoveHeadEvent_ptr;
		}

		auto AnimBodyMoveArmRightEvent_ptr = AnimBodyMoveArmRightEvent::from_substruct(incoming_type_id, serialized);
		if (AnimBodyMoveArmRightEvent_ptr != nullptr) {
			return AnimBodyMoveArmRightEvent_ptr;
		}

		auto AnimBodyMoveHipsEvent_ptr = AnimBodyMoveHipsEvent::from_substruct(incoming_type_id, serialized);
		if (AnimBodyMoveHipsEvent_ptr != nullptr) {
			return AnimBodyMoveHipsEvent_ptr;
		}

		auto AnimBodyMoveArmLeftEvent_ptr = AnimBodyMoveArmLeftEvent::from_substruct(incoming_type_id, serialized);
		if (AnimBodyMoveArmLeftEvent_ptr != nullptr) {
			return AnimBodyMoveArmLeftEvent_ptr;
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated