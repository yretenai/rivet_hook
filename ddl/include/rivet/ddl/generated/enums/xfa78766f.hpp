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
	constexpr const static std::string_view xfa78766f_type_name = "xfa78766f";
	constexpr const static rivet::rivet_type_id xfa78766f_type_id = 0xfa78766f;

	constexpr const static std::array<std::string_view, 3> xfa78766f_values = {
		"kNone",
		"kScreen",
		"kScreenFit", 
	};

	enum class xfa78766f : uint64_t {
		None,
		Screen,
		Screen_Fit, 
	};
} // namespace rivet::ddl::generated

// clang-format on
