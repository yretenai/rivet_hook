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

#include <rivet/ddl/generated/BotComboLaserShotType.hpp> 

namespace rivet::ddl::generated {
	struct RIVET_DDL_SHARED LaserShotTypeSweepFollow : BotComboLaserShotType {
		constexpr const static std::string_view type_name = "LaserShotTypeSweepFollow";
		constexpr const static rivet::rivet_type_id type_id = 0x25927b42;

		constexpr const static std::string_view LaserSweepTime_type_name = "LaserSweepTime";
		constexpr const static rivet::rivet_type_id LaserSweepTime_type_id = 0xd88b95e;
		constexpr const static std::string_view LaserFollowTime_type_name = "LaserFollowTime";
		constexpr const static rivet::rivet_type_id LaserFollowTime_type_id = 0x543e7292;
		constexpr const static std::string_view InitFollowSpeed_type_name = "InitFollowSpeed";
		constexpr const static rivet::rivet_type_id InitFollowSpeed_type_id = 0x49065dfd;
		constexpr const static std::string_view MaxFollowSpeed_type_name = "MaxFollowSpeed";
		constexpr const static rivet::rivet_type_id MaxFollowSpeed_type_id = 0x9f9ef4f;
		constexpr const static std::string_view FollowAccel_type_name = "FollowAccel";
		constexpr const static rivet::rivet_type_id FollowAccel_type_id = 0x7203cb7c;
		constexpr const static std::string_view FollowDecel_type_name = "FollowDecel";
		constexpr const static rivet::rivet_type_id FollowDecel_type_id = 0x9f881bd0;
		constexpr const static std::string_view TimeToStopAfterDamageTarget_type_name = "TimeToStopAfterDamageTarget";
		constexpr const static rivet::rivet_type_id TimeToStopAfterDamageTarget_type_id = 0x19fdfb2b; 

		explicit LaserShotTypeSweepFollow() = default;
		explicit LaserShotTypeSweepFollow([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		float LaserSweepTime {};
		float LaserFollowTime {};
		float InitFollowSpeed {};
		float MaxFollowSpeed {};
		float FollowAccel {};
		float FollowDecel {};
		float TimeToStopAfterDamageTarget {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<LaserShotTypeSweepFollow>;
	};
} // namespace rivet::ddl::generated

// clang-format on
