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
	struct RIVET_DDL_SHARED StickConfig : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "StickConfig";
		constexpr static rivet::rivet_type_id type_id = 0x3bc8f276;

		constexpr static std::string_view YawSpeedSlow_type_name = "YawSpeedSlow";
		constexpr static rivet::rivet_type_id YawSpeedSlow_type_id = 0x3a8c5369;
		constexpr static std::string_view YawSpeedMid_type_name = "YawSpeedMid";
		constexpr static rivet::rivet_type_id YawSpeedMid_type_id = 0xc51f04a1;
		constexpr static std::string_view YawSpeedFast_type_name = "YawSpeedFast";
		constexpr static rivet::rivet_type_id YawSpeedFast_type_id = 0x2aed6b70;
		constexpr static std::string_view YawRangeSlow_type_name = "YawRangeSlow";
		constexpr static rivet::rivet_type_id YawRangeSlow_type_id = 0xef49aade;
		constexpr static std::string_view YawRangeFast_type_name = "YawRangeFast";
		constexpr static rivet::rivet_type_id YawRangeFast_type_id = 0xff2892c7;
		constexpr static std::string_view YawAccel_type_name = "YawAccel";
		constexpr static rivet::rivet_type_id YawAccel_type_id = 0x4dc57c76;
		constexpr static std::string_view YawDecel_type_name = "YawDecel";
		constexpr static rivet::rivet_type_id YawDecel_type_id = 0xa04eacda;
		constexpr static std::string_view PitchSpeedSlow_type_name = "PitchSpeedSlow";
		constexpr static rivet::rivet_type_id PitchSpeedSlow_type_id = 0x725b245c;
		constexpr static std::string_view PitchSpeedMid_type_name = "PitchSpeedMid";
		constexpr static rivet::rivet_type_id PitchSpeedMid_type_id = 0xa05e7a06;
		constexpr static std::string_view PitchSpeedFast_type_name = "PitchSpeedFast";
		constexpr static rivet::rivet_type_id PitchSpeedFast_type_id = 0x623a1c45;
		constexpr static std::string_view PitchRangeSlow_type_name = "PitchRangeSlow";
		constexpr static rivet::rivet_type_id PitchRangeSlow_type_id = 0xa79eddeb;
		constexpr static std::string_view PitchRangeFast_type_name = "PitchRangeFast";
		constexpr static rivet::rivet_type_id PitchRangeFast_type_id = 0xb7ffe5f2;
		constexpr static std::string_view PitchAccel_type_name = "PitchAccel";
		constexpr static rivet::rivet_type_id PitchAccel_type_id = 0x12c92ef1;
		constexpr static std::string_view PitchDecel_type_name = "PitchDecel";
		constexpr static rivet::rivet_type_id PitchDecel_type_id = 0xff42fe5d;
		constexpr static std::string_view NudgeFactor_type_name = "NudgeFactor";
		constexpr static rivet::rivet_type_id NudgeFactor_type_id = 0xade04108;
		constexpr static std::string_view YawBias_type_name = "YawBias";
		constexpr static rivet::rivet_type_id YawBias_type_id = 0xaeddd3e7;
		constexpr static std::string_view CardinalBias_type_name = "CardinalBias";
		constexpr static rivet::rivet_type_id CardinalBias_type_id = 0xcd485c00;
		constexpr static std::string_view DeadZoneLow_type_name = "DeadZoneLow";
		constexpr static rivet::rivet_type_id DeadZoneLow_type_id = 0x2f58d327;
		constexpr static std::string_view DeadZoneHigh_type_name = "DeadZoneHigh";
		constexpr static rivet::rivet_type_id DeadZoneHigh_type_id = 0x2761fd66; 

		explicit StickConfig() = default;
		explicit StickConfig([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		float YawSpeedSlow {};
		float YawSpeedMid {};
		float YawSpeedFast {};
		float YawRangeSlow {};
		float YawRangeFast {};
		float YawAccel {};
		float YawDecel {};
		float PitchSpeedSlow {};
		float PitchSpeedMid {};
		float PitchSpeedFast {};
		float PitchRangeSlow {};
		float PitchRangeFast {};
		float PitchAccel {};
		float PitchDecel {};
		float NudgeFactor {};
		float YawBias {};
		float CardinalBias {};
		float DeadZoneLow {};
		float DeadZoneHigh {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<StickConfig>;
	};
} // namespace rivet::ddl::generated

// clang-format on