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
	constexpr const static std::string_view xb118f295_type_name = "xb118f295";
	constexpr const static rivet::rivet_type_id xb118f295_type_id = 0xb118f295;

	constexpr const static std::array<std::string_view, 3> xb118f295_values = {
		"kNone",
		"kNotSubtitled",
		"kForceSubtitle", 
	};

	enum class xb118f295 : uint64_t {
		None,
		Not_Subtitled,
		Force_Subtitle, 
	};
} // namespace rivet::ddl::generated

// clang-format on