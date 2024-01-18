// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/EventBase.hpp> 

#include <rivet/ddl/generated/EventMeterPrius.hpp>

namespace rivet::ddl::generated {
	EventMeterPrius::EventMeterPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		Event = serialized->unwrap_into<rivet::ddl::generated::EventBase>(Event_type_id);
		Radius = serialized->get_float(Radius_type_id, 0.000000f);
		IncrementPerEvent = serialized->get_float(IncrementPerEvent_type_id, 0.000000f);
		DecayPerSecond = serialized->get_float(DecayPerSecond_type_id, 0.000000f);
		SelfEventsOnly = serialized->get_bool(SelfEventsOnly_type_id, false);
		OnlyFromSenderHandle = serialized->get_uint32(OnlyFromSenderHandle_type_id, 0u); 
	}

	[[nodiscard]] auto
	EventMeterPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	EventMeterPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<EventMeterPrius> {
		if (incoming_type_id == EventMeterPrius::type_id) {
			return std::make_shared<EventMeterPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
