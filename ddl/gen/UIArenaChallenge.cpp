// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/UIArenaChallengeReward.hpp> 

#include <rivet/ddl/generated/UIArenaChallenge.hpp>

namespace rivet::ddl::generated {
	UIArenaChallenge::UIArenaChallenge([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		Title = serialized->get_string(Title_type_id);
		Description = serialized->get_string(Description_type_id);
		Reward = serialized->unwrap_into<rivet::ddl::generated::UIArenaChallengeReward>(Reward_type_id);
		RewardSecondary = serialized->unwrap_into<rivet::ddl::generated::UIArenaChallengeReward>(RewardSecondary_type_id);
		ChallengeModeReward = serialized->unwrap_into<rivet::ddl::generated::UIArenaChallengeReward>(ChallengeModeReward_type_id);
		ChallengeModeRewardSecondary = serialized->unwrap_into<rivet::ddl::generated::UIArenaChallengeReward>(ChallengeModeRewardSecondary_type_id);
		MissionName = serialized->get_string(MissionName_type_id);
		GlobalSaveTableKey = serialized->get_string(GlobalSaveTableKey_type_id); 
	}

	[[nodiscard]] auto
	UIArenaChallenge::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	UIArenaChallenge::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<UIArenaChallenge> {
		if (incoming_type_id == UIArenaChallenge::type_id) {
			return std::make_shared<UIArenaChallenge>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
