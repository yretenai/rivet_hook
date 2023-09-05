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
	constexpr const static std::string_view x8eb28adc_type_name = "x8eb28adc";
	constexpr const static rivet::rivet_type_id x8eb28adc_type_id = 0x8eb28adc;

	constexpr const static std::array<std::string_view, 3> x8eb28adc_values = {
		"kNotSpecified",
		"kExplicitlyAdded",
		"kExplicitlyDeleted", 
	};

	enum class x8eb28adc : uint64_t {
		NotSpecified,
		ExplicitlyAdded,
		ExplicitlyDeleted, 
	};
} // namespace rivet::ddl::generated

// clang-format on