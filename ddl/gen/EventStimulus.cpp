// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/EventStimulus.hpp>

namespace rivet::ddl::generated {
	EventStimulus::EventStimulus([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		Event = serialized->get_field(Event_type_id);
		BonusConfirmTime = serialized->get_float(BonusConfirmTime_type_id);
		NewMinTargetAwareness = serialized->get_enum<rivet::ddl::generated::xbd2e617d>(NewMinTargetAwareness_type_id, rivet::ddl::generated::xbd2e617d_values);
		Aggro = serialized->get_float(Aggro_type_id);
		ListenRadius = serialized->get_float(ListenRadius_type_id);
		StealTargetFromFriendlySender = serialized->get_bool(StealTargetFromFriendlySender_type_id);
		StealthDamage = serialized->get_bool(StealthDamage_type_id);
		RelevantAwareness = serialized->get_bitset<rivet::ddl::generated::RelevantAwareness>(RelevantAwareness_type_id, rivet::ddl::generated::RelevantAwareness_values); 
	}

	[[nodiscard]] auto
	EventStimulus::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	EventStimulus::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<EventStimulus> {
		if (incoming_type_id == EventStimulus::type_id) {
			return std::make_shared<EventStimulus>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated