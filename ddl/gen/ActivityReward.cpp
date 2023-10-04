// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/ActivityReward.hpp>

namespace rivet::ddl::generated {
	ActivityReward::ActivityReward([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		RewardTag = serialized->get_string(RewardTag_type_id);
		RewardImagePath = serialized->get_string(RewardImagePath_type_id); 
	}

	[[nodiscard]] auto
	ActivityReward::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	ActivityReward::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<ActivityReward> {
		if (incoming_type_id == ActivityReward::type_id) {
			return std::make_shared<ActivityReward>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
