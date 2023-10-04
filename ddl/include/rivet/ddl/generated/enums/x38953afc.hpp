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
	constexpr const static std::string_view x38953afc_type_name = "x38953afc";
	constexpr const static rivet::rivet_type_id x38953afc_type_id = 0x38953afc;

	constexpr const static std::array<std::string_view, 5> x38953afc_values = {
		"kConstant",
		"kIncreasing",
		"kDecreasing",
		"kWideCenter",
		"kWideEnds", 
	};

	enum class x38953afc : uint64_t {
		Constant_Width,
		Increading_Width,
		Decreasing_Width,
		Wide_Center,
		Wide_Ends, 
	};
} // namespace rivet::ddl::generated

// clang-format on
