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
	constexpr const static std::string_view x80ca62e9_type_name = "x80ca62e9";
	constexpr const static rivet::rivet_type_id x80ca62e9_type_id = 0x80ca62e9;

	constexpr const static std::array<std::string_view, 3> x80ca62e9_values = {
		"kImpact_Head",
		"kImpact_Torso",
		"kImpact_Leg", 
	};

	enum class x80ca62e9 : uint64_t {
		Impact_Head,
		Impact_Torso,
		Impact_Leg, 
	};
} // namespace rivet::ddl::generated

// clang-format on
