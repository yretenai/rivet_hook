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
	constexpr const static std::string_view LoadTimeDisplayMode_type_name = "LoadTimeDisplayMode";
	constexpr const static rivet::rivet_type_id LoadTimeDisplayMode_type_id = 0x522ab918;

	constexpr const static std::array<std::string_view, 3> LoadTimeDisplayMode_values = {
		"kNone",
		"kOverbudget",
		"kAlways", 
	};

	enum class LoadTimeDisplayMode : uint64_t {
		None,
		Overbudget,
		Always, 
	};
} // namespace rivet::ddl::generated

// clang-format on