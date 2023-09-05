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
	constexpr const static std::string_view x104b06bd_type_name = "x104b06bd";
	constexpr const static rivet::rivet_type_id x104b06bd_type_id = 0x104b06bd;

	constexpr const static std::array<std::string_view, 3> x104b06bd_values = {
		"kPS4",
		"kPS5",
		"kWindows", 
	};

	enum class x104b06bd : uint64_t {
		PS4,
		PS5,
		Windows, 
	};
} // namespace rivet::ddl::generated

// clang-format on