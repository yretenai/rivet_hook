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
	struct Burst;
	struct SubBurst; 

	struct RIVET_DDL_SHARED BurstSequence : rivet::structures::rivet_ddl_base {
		constexpr const static std::string_view type_name = "BurstSequence";
		constexpr const static rivet::rivet_type_id type_id = 0x3ae61082;

		constexpr const static std::string_view PrimaryBurst_type_name = "PrimaryBurst";
		constexpr const static rivet::rivet_type_id PrimaryBurst_type_id = 0x8bc798e7;
		constexpr const static std::string_view SubBursts_type_name = "SubBursts";
		constexpr const static rivet::rivet_type_id SubBursts_type_id = 0x333f5038;
		constexpr const static std::string_view TotalDuration_type_name = "TotalDuration";
		constexpr const static rivet::rivet_type_id TotalDuration_type_id = 0xc004400c;
		constexpr const static std::string_view TotalBurstShots_type_name = "TotalBurstShots";
		constexpr const static rivet::rivet_type_id TotalBurstShots_type_id = 0xd2ed5de5;
		constexpr const static std::string_view WaitDurationMin_type_name = "WaitDurationMin";
		constexpr const static rivet::rivet_type_id WaitDurationMin_type_id = 0xd348255d;
		constexpr const static std::string_view WaitDurationMax_type_name = "WaitDurationMax";
		constexpr const static rivet::rivet_type_id WaitDurationMax_type_id = 0xef451a04;
		constexpr const static std::string_view WaitDuration_type_name = "WaitDuration";
		constexpr const static rivet::rivet_type_id WaitDuration_type_id = 0xe3655ff0; 

		explicit BurstSequence() = default;
		explicit BurstSequence([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::shared_ptr<rivet::ddl::generated::Burst> PrimaryBurst {};
		std::vector<std::shared_ptr<rivet::ddl::generated::SubBurst>> SubBursts {};
		float TotalDuration {};
		int32_t TotalBurstShots {};
		float WaitDurationMin {};
		float WaitDurationMax {};
		float WaitDuration {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<BurstSequence>;
	};
} // namespace rivet::ddl::generated

// clang-format on
