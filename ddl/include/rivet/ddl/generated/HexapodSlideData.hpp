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
	struct RIVET_DDL_SHARED HexapodSlideData : rivet::structures::rivet_ddl_base {
		constexpr const static std::string_view type_name = "HexapodSlideData";
		constexpr const static rivet::rivet_type_id type_id = 0x9fe647dc;

		constexpr const static std::string_view MaxSpeed_type_name = "MaxSpeed";
		constexpr const static rivet::rivet_type_id MaxSpeed_type_id = 0x16b83961;
		constexpr const static std::string_view GravityAccel_type_name = "GravityAccel";
		constexpr const static rivet::rivet_type_id GravityAccel_type_id = 0x5ef2b816;
		constexpr const static std::string_view SlidePastTime_type_name = "SlidePastTime";
		constexpr const static rivet::rivet_type_id SlidePastTime_type_id = 0xe8eb3818;
		constexpr const static std::string_view WalkSpeedHorizontal_type_name = "WalkSpeedHorizontal";
		constexpr const static rivet::rivet_type_id WalkSpeedHorizontal_type_id = 0x3b043e98;
		constexpr const static std::string_view WalkSpeedVertical_type_name = "WalkSpeedVertical";
		constexpr const static rivet::rivet_type_id WalkSpeedVertical_type_id = 0x24031498;
		constexpr const static std::string_view DashSpeedHorizontal_type_name = "DashSpeedHorizontal";
		constexpr const static rivet::rivet_type_id DashSpeedHorizontal_type_id = 0x730b9d61;
		constexpr const static std::string_view DashSpeedVertical_type_name = "DashSpeedVertical";
		constexpr const static rivet::rivet_type_id DashSpeedVertical_type_id = 0xc43af68;
		constexpr const static std::string_view MoveAccel_type_name = "MoveAccel";
		constexpr const static rivet::rivet_type_id MoveAccel_type_id = 0x4d8dca42;
		constexpr const static std::string_view SlopeMinDot_type_name = "SlopeMinDot";
		constexpr const static rivet::rivet_type_id SlopeMinDot_type_id = 0x82c7e773;
		constexpr const static std::string_view SlopeMaxDot_type_name = "SlopeMaxDot";
		constexpr const static rivet::rivet_type_id SlopeMaxDot_type_id = 0xc7c5a4f1; 

		explicit HexapodSlideData() = default;
		explicit HexapodSlideData([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		float MaxSpeed {};
		float GravityAccel {};
		float SlidePastTime {};
		float WalkSpeedHorizontal {};
		float WalkSpeedVertical {};
		float DashSpeedHorizontal {};
		float DashSpeedVertical {};
		float MoveAccel {};
		float SlopeMinDot {};
		float SlopeMaxDot {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<HexapodSlideData>;
	};
} // namespace rivet::ddl::generated

// clang-format on
