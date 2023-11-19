// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/LoggerLevelMissionCheckpointInfo.hpp>

namespace rivet::ddl::generated {
	LoggerLevelMissionCheckpointInfo::LoggerLevelMissionCheckpointInfo([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		LevelName = serialized->get_string(LevelName_type_id);
		MissionName = serialized->get_string(MissionName_type_id);
		CheckpointName = serialized->get_string(CheckpointName_type_id); 
	}

	[[nodiscard]] auto
	LoggerLevelMissionCheckpointInfo::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	LoggerLevelMissionCheckpointInfo::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<LoggerLevelMissionCheckpointInfo> {
		if (incoming_type_id == LoggerLevelMissionCheckpointInfo::type_id) {
			return std::make_shared<LoggerLevelMissionCheckpointInfo>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated