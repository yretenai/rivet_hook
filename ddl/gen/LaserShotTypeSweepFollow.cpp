// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/LaserShotTypeSweepFollow.hpp>

namespace rivet::ddl::generated {
	LaserShotTypeSweepFollow::LaserShotTypeSweepFollow([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): BotComboLaserShotType(serialized) {
		LaserSweepTime = serialized->get_float(LaserSweepTime_type_id);
		LaserFollowTime = serialized->get_float(LaserFollowTime_type_id);
		InitFollowSpeed = serialized->get_float(InitFollowSpeed_type_id);
		MaxFollowSpeed = serialized->get_float(MaxFollowSpeed_type_id);
		FollowAccel = serialized->get_float(FollowAccel_type_id);
		FollowDecel = serialized->get_float(FollowDecel_type_id);
		TimeToStopAfterDamageTarget = serialized->get_float(TimeToStopAfterDamageTarget_type_id); 
	}

	[[nodiscard]] auto
	LaserShotTypeSweepFollow::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	LaserShotTypeSweepFollow::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<LaserShotTypeSweepFollow> {
		if (incoming_type_id == LaserShotTypeSweepFollow::type_id) {
			return std::make_shared<LaserShotTypeSweepFollow>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
