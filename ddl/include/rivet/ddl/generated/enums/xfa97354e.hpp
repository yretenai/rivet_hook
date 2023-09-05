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
	constexpr const static std::string_view xfa97354e_type_name = "xfa97354e";
	constexpr const static rivet::rivet_type_id xfa97354e_type_id = 0xfa97354e;

	constexpr const static std::array<std::string_view, 2> xfa97354e_values = {
		"kPivotCentered",
		"kPivotAtStart", 
	};

	enum class xfa97354e : uint64_t {
		PivotCentered,
		PivotAtStart, 
	};
} // namespace rivet::ddl::generated

// clang-format on