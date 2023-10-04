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
	constexpr const static std::string_view xde534179_type_name = "xde534179";
	constexpr const static rivet::rivet_type_id xde534179_type_id = 0xde534179;

	constexpr const static std::array<std::string_view, 5> xde534179_values = {
		"kIndependent",
		"kMatchTargetT",
		"kMatchMotionT",
		"kMatchTargetPos",
		"kMatchMotionPos", 
	};

	enum class xde534179 : uint64_t {
		Independent,
		Match_Target_T,
		Match_Motion_T,
		Match_Target_Position,
		Match_Motion_Position, 
	};
} // namespace rivet::ddl::generated

// clang-format on