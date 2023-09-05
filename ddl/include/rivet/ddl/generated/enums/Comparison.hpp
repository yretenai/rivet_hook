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
	constexpr const static std::string_view Comparison_type_name = "Comparison";
	constexpr const static rivet::rivet_type_id Comparison_type_id = 0x3e7c98ef;

	constexpr const static std::array<std::string_view, 5> Comparison_values = {
		"Less",
		"LessOrEqual",
		"Equal",
		"GreaterOrEqual",
		"Greater", 
	};

	enum class Comparison : uint64_t {
		Less,
		LessOrEqual,
		Equal,
		GreaterOrEqual,
		Greater, 
	};
} // namespace rivet::ddl::generated

// clang-format on