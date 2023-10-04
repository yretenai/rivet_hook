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
	constexpr const static std::string_view x788cf5f2_type_name = "x788cf5f2";
	constexpr const static rivet::rivet_type_id x788cf5f2_type_id = 0x788cf5f2;

	constexpr const static std::array<std::string_view, 4> x788cf5f2_values = {
		"kPower",
		"kSpeed",
		"kRange",
		"kCustom", 
	};

	enum class x788cf5f2 : uint64_t {
		Power,
		Speed,
		Range,
		Custom, 
	};
} // namespace rivet::ddl::generated

// clang-format on
