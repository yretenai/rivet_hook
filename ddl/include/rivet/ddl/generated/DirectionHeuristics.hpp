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
	struct RIVET_DDL_SHARED DirectionHeuristics : rivet::structures::rivet_ddl_base {
		constexpr const static std::string_view type_name = "DirectionHeuristics";
		constexpr const static rivet::rivet_type_id type_id = 0xe39b3409;

		constexpr const static std::string_view PhalanxWeight_type_name = "PhalanxWeight";
		constexpr const static rivet::rivet_type_id PhalanxWeight_type_id = 0x1e7b2795;
		constexpr const static std::string_view BattleAxisWeight_type_name = "BattleAxisWeight";
		constexpr const static rivet::rivet_type_id BattleAxisWeight_type_id = 0xf4463a64;
		constexpr const static std::string_view BattleAxisSideDistMin_type_name = "BattleAxisSideDistMin";
		constexpr const static rivet::rivet_type_id BattleAxisSideDistMin_type_id = 0x656102fe;
		constexpr const static std::string_view BattleAxisSideDistMax_type_name = "BattleAxisSideDistMax";
		constexpr const static rivet::rivet_type_id BattleAxisSideDistMax_type_id = 0x596c3da7;
		constexpr const static std::string_view FlankWeight_type_name = "FlankWeight";
		constexpr const static rivet::rivet_type_id FlankWeight_type_id = 0x238a9617;
		constexpr const static std::string_view FlankDist_type_name = "FlankDist";
		constexpr const static rivet::rivet_type_id FlankDist_type_id = 0x3d1e098a; 

		explicit DirectionHeuristics() = default;
		explicit DirectionHeuristics([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		float PhalanxWeight {};
		float BattleAxisWeight {};
		float BattleAxisSideDistMin {};
		float BattleAxisSideDistMax {};
		float FlankWeight {};
		float FlankDist {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<DirectionHeuristics>;
	};
} // namespace rivet::ddl::generated

// clang-format on