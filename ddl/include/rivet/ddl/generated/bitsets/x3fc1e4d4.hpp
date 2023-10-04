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
	constexpr const static std::string_view x3fc1e4d4_type_name = "x3fc1e4d4";
	constexpr const static rivet::rivet_type_id x3fc1e4d4_type_id = 0x3fc1e4d4;

	constexpr const static std::array<std::tuple<std::string_view, uint64_t>, 1> x3fc1e4d4_values = {
		std::make_tuple("kBezierCurveWeighted", 0x1), 
	};

	enum class x3fc1e4d4 : uint64_t {
		BezierCurveWeighted = 0x1, 
	};
} // namespace rivet::ddl::generated

// clang-format on
