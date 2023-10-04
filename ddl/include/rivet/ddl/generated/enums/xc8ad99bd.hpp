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
	constexpr const static std::string_view xc8ad99bd_type_name = "xc8ad99bd";
	constexpr const static rivet::rivet_type_id xc8ad99bd_type_id = 0xc8ad99bd;

	constexpr const static std::array<std::string_view, 3> xc8ad99bd_values = {
		"kNone",
		"kFlat",
		"kCurved", 
	};

	enum class xc8ad99bd : uint64_t {
		None,
		Flat,
		Curved, 
	};
} // namespace rivet::ddl::generated

// clang-format on
