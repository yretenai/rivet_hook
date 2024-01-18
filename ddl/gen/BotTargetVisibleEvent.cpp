// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/DDLVector3.hpp> 

#include <rivet/ddl/generated/BotTargetVisibleEvent.hpp>

namespace rivet::ddl::generated {
	BotTargetVisibleEvent::BotTargetVisibleEvent([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): EventBase(serialized) {
		TargetState = serialized->get_int32(TargetState_type_id, 0u);
		LastKnownPos = serialized->unwrap_into<rivet::ddl::generated::DDLVector3>(LastKnownPos_type_id);
		TargetLosable = serialized->get_bool(TargetLosable_type_id, true); 
	}

	[[nodiscard]] auto
	BotTargetVisibleEvent::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	BotTargetVisibleEvent::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<BotTargetVisibleEvent> {
		if (incoming_type_id == BotTargetVisibleEvent::type_id) {
			return std::make_shared<BotTargetVisibleEvent>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
