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
	constexpr const static std::string_view DebugMissionSortOrder_type_name = "DebugMissionSortOrder";
	constexpr const static rivet::rivet_type_id DebugMissionSortOrder_type_id = 0xac8d000f;

	constexpr const static std::array<std::string_view, 2> DebugMissionSortOrder_values = {
		"kAlphabetical",
		"kDepthFirst", 
	};

	enum class DebugMissionSortOrder : uint64_t {
		Alphabetical,
		Mission_Order, 
	};
} // namespace rivet::ddl::generated

// clang-format on
