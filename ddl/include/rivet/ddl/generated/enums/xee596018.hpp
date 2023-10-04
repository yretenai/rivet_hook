// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#pragma once

// clang-format off

#include <cstdint>
#include <string_view>
#include <array>

#include <rivet/hash/type_id.hpp>
#include <rivet/rivet_keywords.hpp>

namespace rivet::ddl::generated {
	constexpr const static std::string_view xee596018_type_name = "xee596018";
	constexpr const static rivet::rivet_type_id xee596018_type_id = 0xee596018;

	constexpr const static std::array<std::string_view, 5> xee596018_values = {
		"kNone",
		"kSmallMelee",
		"kLargeMelee",
		"kStandardRanged",
		"kLargeRanged", 
	};

	enum class xee596018 : uint64_t {
		None,
		Small_Melee,
		Large_Melee,
		Standard_Ranged,
		Large_Ranged, 
	};
} // namespace rivet::ddl::generated

// clang-format on
