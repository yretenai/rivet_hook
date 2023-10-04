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
	constexpr const static std::string_view xec77cf54_type_name = "xec77cf54";
	constexpr const static rivet::rivet_type_id xec77cf54_type_id = 0xec77cf54;

	constexpr const static std::array<std::string_view, 7> xec77cf54_values = {
		"kSelOpEQ",
		"kSelOpNEQ",
		"kSelOpGT",
		"kSelOpGTE",
		"kSelOpLT",
		"kSelOpLTE",
		"kSelOpMABF", 
	};

	enum class xec77cf54 : uint64_t {
		Equal,
		Not_Equal,
		Greater_Than,
		Greater_Or_Equal_To,
		Less_Than,
		Less_Or_Equal_To,
		Matching_Any_Bit_Flags, 
	};
} // namespace rivet::ddl::generated

// clang-format on