// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/MissionEndedDevstatsEventBase.hpp>

namespace rivet::ddl::generated {
	MissionEndedDevstatsEventBase::MissionEndedDevstatsEventBase([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): EventBase(serialized) {
		MissionName = serialized->get_string(MissionName_type_id, {});
		MissionResult = serialized->get_enum<rivet::ddl::generated::MissionResult>(MissionResult_type_id, rivet::ddl::generated::MissionResult_values, rivet::ddl::generated::MissionResult::Failed);
		MissionTime = serialized->get_float(MissionTime_type_id, -1.000000f);
		TimeInMenu = serialized->get_float(TimeInMenu_type_id, -1.000000f); 
	}

	[[nodiscard]] auto
	MissionEndedDevstatsEventBase::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	MissionEndedDevstatsEventBase::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<MissionEndedDevstatsEventBase> {
		if (incoming_type_id == MissionEndedDevstatsEventBase::type_id) {
			return std::make_shared<MissionEndedDevstatsEventBase>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
