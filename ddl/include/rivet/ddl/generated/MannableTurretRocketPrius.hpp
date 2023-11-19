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
	struct RIVET_DDL_SHARED MannableTurretRocketPrius : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "MannableTurretRocketPrius";
		constexpr static rivet::rivet_type_id type_id = 0xb9e84af3;

		constexpr static std::string_view FreeYaw_type_name = "FreeYaw";
		constexpr static rivet::rivet_type_id FreeYaw_type_id = 0xbeca3d19;
		constexpr static std::string_view YawLimitMin_type_name = "YawLimitMin";
		constexpr static rivet::rivet_type_id YawLimitMin_type_id = 0xbad2fd6;
		constexpr static std::string_view YawLimitMax_type_name = "YawLimitMax";
		constexpr static rivet::rivet_type_id YawLimitMax_type_id = 0x37a0108f;
		constexpr static std::string_view PitchLimitMin_type_name = "PitchLimitMin";
		constexpr static rivet::rivet_type_id PitchLimitMin_type_id = 0x6eec5171;
		constexpr static std::string_view PitchLimitMax_type_name = "PitchLimitMax";
		constexpr static rivet::rivet_type_id PitchLimitMax_type_id = 0x52e16e28;
		constexpr static std::string_view OnlyHeroes_type_name = "OnlyHeroes";
		constexpr static rivet::rivet_type_id OnlyHeroes_type_id = 0x93a738da;
		constexpr static std::string_view MaxYawSpeed_type_name = "MaxYawSpeed";
		constexpr static rivet::rivet_type_id MaxYawSpeed_type_id = 0x710f81a1;
		constexpr static std::string_view MaxPitchSpeed_type_name = "MaxPitchSpeed";
		constexpr static rivet::rivet_type_id MaxPitchSpeed_type_id = 0xb9365e9b; 

		explicit MannableTurretRocketPrius() = default;
		explicit MannableTurretRocketPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		bool FreeYaw {};
		float YawLimitMin {};
		float YawLimitMax {};
		float PitchLimitMin {};
		float PitchLimitMax {};
		bool OnlyHeroes {};
		float MaxYawSpeed {};
		float MaxPitchSpeed {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<MannableTurretRocketPrius>;
	};
} // namespace rivet::ddl::generated

// clang-format on