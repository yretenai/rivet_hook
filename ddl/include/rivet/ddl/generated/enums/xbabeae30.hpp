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
	constexpr const static std::string_view xbabeae30_type_name = "xbabeae30";
	constexpr const static rivet::rivet_type_id xbabeae30_type_id = 0xbabeae30;

	constexpr const static std::array<std::string_view, 4> xbabeae30_values = {
		"kAEndToBStart",
		"kAEndToBEnd",
		"kAStartToBStart",
		"kAStartToBEnd", 
	};

	enum class xbabeae30 : uint64_t {
		AEndToBStart,
		AEndToBEnd,
		AStartToBStart,
		AStartToBEnd, 
	};
} // namespace rivet::ddl::generated

// clang-format on