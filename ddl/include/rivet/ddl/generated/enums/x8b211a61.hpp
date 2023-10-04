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
	constexpr const static std::string_view x8b211a61_type_name = "x8b211a61";
	constexpr const static rivet::rivet_type_id x8b211a61_type_id = 0x8b211a61;

	constexpr const static std::array<std::string_view, 8> x8b211a61_values = {
		"kPid",
		"kCommon",
		"kWindows",
		"kFormerlyVulkan",
		"kFormerlyDurango",
		"kOrbis",
		"kFormerlyNova",
		"kPPR", 
	};

	enum class x8b211a61 : uint64_t {
		PID,
		Common,
		Windows,
		FormerlyVulkan,
		FormerlyDurango,
		Orbis,
		FormerlyNova,
		PPR, 
	};
} // namespace rivet::ddl::generated

// clang-format on
