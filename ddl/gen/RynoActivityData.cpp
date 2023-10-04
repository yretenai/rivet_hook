// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/ActivityReward.hpp> 

#include <rivet/ddl/generated/RynoActivityData.hpp>

namespace rivet::ddl::generated {
	RynoActivityData::RynoActivityData([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		Enabled = serialized->get_bool(Enabled_type_id);
		CardNameTag = serialized->get_string(CardNameTag_type_id);
		CardDescTag = serialized->get_string(CardDescTag_type_id);
		CardSmallImage = serialized->get_string(CardSmallImage_type_id);
		CardLargeImage = serialized->get_string(CardLargeImage_type_id);
		PlaytimeEstimate = serialized->get_uint32(PlaytimeEstimate_type_id);
		Reward = serialized->unwrap_into<rivet::ddl::generated::ActivityReward>(Reward_type_id); 
	}

	[[nodiscard]] auto
	RynoActivityData::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	RynoActivityData::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<RynoActivityData> {
		if (incoming_type_id == RynoActivityData::type_id) {
			return std::make_shared<RynoActivityData>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
