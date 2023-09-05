// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#pragma once

// clang-format off

#include <cstdint>
#include <memory>
#include <string_view>
#include <vector>

#include <rivet/hash/type_id.hpp>
#include <rivet/rivet_array.hpp>
#include <rivet/rivet_keywords.hpp>
#include <rivet/structures/rivet_serialization.hpp>

namespace rivet::ddl::generated {
	struct ActivityReward; 

	struct RIVET_DDL_SHARED RynoActivityData : rivet::structures::rivet_ddl_base {
		constexpr const static std::string_view type_name = "RynoActivityData";
		constexpr const static rivet::rivet_type_id type_id = 0xbae9f85c;

		constexpr const static std::string_view Enabled_type_name = "Enabled";
		constexpr const static rivet::rivet_type_id Enabled_type_id = 0x5113d8bc;
		constexpr const static std::string_view CardNameTag_type_name = "CardNameTag";
		constexpr const static rivet::rivet_type_id CardNameTag_type_id = 0xe5ff7435;
		constexpr const static std::string_view CardDescTag_type_name = "CardDescTag";
		constexpr const static rivet::rivet_type_id CardDescTag_type_id = 0x20a51f52;
		constexpr const static std::string_view CardSmallImage_type_name = "CardSmallImage";
		constexpr const static rivet::rivet_type_id CardSmallImage_type_id = 0x9af615f0;
		constexpr const static std::string_view CardLargeImage_type_name = "CardLargeImage";
		constexpr const static rivet::rivet_type_id CardLargeImage_type_id = 0x7d5b0f7b;
		constexpr const static std::string_view PlaytimeEstimate_type_name = "PlaytimeEstimate";
		constexpr const static rivet::rivet_type_id PlaytimeEstimate_type_id = 0x292b559d;
		constexpr const static std::string_view Reward_type_name = "Reward";
		constexpr const static rivet::rivet_type_id Reward_type_id = 0x70a93c34; 

		explicit RynoActivityData() = default;
		explicit RynoActivityData([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		bool Enabled {};
		std::string_view CardNameTag {};
		std::string_view CardDescTag {};
		std::string_view CardSmallImage {};
		std::string_view CardLargeImage {};
		uint32_t PlaytimeEstimate {};
		std::shared_ptr<rivet::ddl::generated::ActivityReward> Reward {}; 

		auto
		get_type_id() const noexcept -> rivet::rivet_type_id override;

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<RynoActivityData>;
	};
} // namespace rivet::ddl::generated

// clang-format on