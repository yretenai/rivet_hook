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
	constexpr const static std::string_view x7ada9111_type_name = "x7ada9111";
	constexpr const static rivet::rivet_type_id x7ada9111_type_id = 0x7ada9111;

	constexpr const static std::array<std::string_view, 3> x7ada9111_values = {
		"kWrap",
		"kMirror",
		"kClamp", 
	};

	enum class x7ada9111 : uint64_t {
		Wrap,
		Mirror,
		Clamp, 
	};
} // namespace rivet::ddl::generated

// clang-format on
