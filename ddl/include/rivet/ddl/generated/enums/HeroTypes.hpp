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
	constexpr const static std::string_view HeroTypes_type_name = "HeroTypes";
	constexpr const static rivet::rivet_type_id HeroTypes_type_id = 0xc7c22b65;

	constexpr const static std::array<std::string_view, 5> HeroTypes_values = {
		"kRatchet",
		"kClank",
		"kRatchette",
		"kKit",
		"kNone", 
	};

	enum class HeroTypes : uint64_t {
		Ratchet,
		Clank,
		Rivet,
		Kit,
		None, 
	};
} // namespace rivet::ddl::generated

// clang-format on
