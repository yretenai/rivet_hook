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
	constexpr const static std::string_view x5ff284b1_type_name = "x5ff284b1";
	constexpr const static rivet::rivet_type_id x5ff284b1_type_id = 0x5ff284b1;

	constexpr const static std::array<std::string_view, 8> x5ff284b1_values = {
		"kNone",
		"kAdded",
		"kRemoved",
		"kIncrement",
		"kDecrement",
		"kTransferred",
		"kLoaded",
		"kTransfered", 
	};

	enum class x5ff284b1 : uint64_t {
		None,
		Added,
		Removed,
		Increment,
		Decrement,
		Transferred,
		Loaded,
		Transfered, 
	};
} // namespace rivet::ddl::generated

// clang-format on