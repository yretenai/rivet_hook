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
	constexpr const static std::string_view x1879f53b_type_name = "x1879f53b";
	constexpr const static rivet::rivet_type_id x1879f53b_type_id = 0x1879f53b;

	constexpr const static std::array<std::string_view, 4> x1879f53b_values = {
		"Anything",
		"DeathOnly",
		"ReactsAndDeath",
		"Nothing", 
	};

	enum class x1879f53b : uint64_t {
		Anything,
		DeathOnly,
		ReactsAndDeath,
		Nothing, 
	};
} // namespace rivet::ddl::generated

// clang-format on