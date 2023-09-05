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
	constexpr const static std::string_view x868ac365_type_name = "x868ac365";
	constexpr const static rivet::rivet_type_id x868ac365_type_id = 0x868ac365;

	constexpr const static std::array<std::string_view, 2> x868ac365_values = {
		"kPurchase",
		"kUpgrade", 
	};

	enum class x868ac365 : uint64_t {
		Purchase,
		Upgrade, 
	};
} // namespace rivet::ddl::generated

// clang-format on