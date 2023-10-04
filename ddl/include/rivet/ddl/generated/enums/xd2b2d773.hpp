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
	constexpr const static std::string_view xd2b2d773_type_name = "xd2b2d773";
	constexpr const static rivet::rivet_type_id xd2b2d773_type_id = 0xd2b2d773;

	constexpr const static std::array<std::string_view, 4> xd2b2d773_values = {
		"kEasy",
		"kNormal",
		"kHard",
		"kHardest", 
	};

	enum class xd2b2d773 : uint64_t {
		Easy,
		Normal,
		Hard,
		Hardest, 
	};
} // namespace rivet::ddl::generated

// clang-format on
