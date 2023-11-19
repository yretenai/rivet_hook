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

#include <rivet/ddl/generated/GameBotMeleeBasePrius.hpp> 

namespace rivet::ddl::generated {
	struct RIVET_DDL_SHARED GameBotGrunthorPrius : GameBotMeleeBasePrius {
		constexpr static std::string_view type_name = "GameBotGrunthorPrius";
		constexpr static rivet::rivet_type_id type_id = 0x7d07557f;

		constexpr static std::string_view ArcFinderHeight0_type_name = "ArcFinderHeight0";
		constexpr static rivet::rivet_type_id ArcFinderHeight0_type_id = 0xd8005726;
		constexpr static std::string_view ArcFinderHeight1_type_name = "ArcFinderHeight1";
		constexpr static rivet::rivet_type_id ArcFinderHeight1_type_id = 0xaf0767b0;
		constexpr static std::string_view ArcFinderHeight2_type_name = "ArcFinderHeight2";
		constexpr static rivet::rivet_type_id ArcFinderHeight2_type_id = 0x360e360a; 

		explicit GameBotGrunthorPrius() = default;
		explicit GameBotGrunthorPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		float ArcFinderHeight0 {};
		float ArcFinderHeight1 {};
		float ArcFinderHeight2 {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<GameBotGrunthorPrius>;
	};
} // namespace rivet::ddl::generated

// clang-format on