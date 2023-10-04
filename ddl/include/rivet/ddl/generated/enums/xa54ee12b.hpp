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
	constexpr const static std::string_view xa54ee12b_type_name = "xa54ee12b";
	constexpr const static rivet::rivet_type_id xa54ee12b_type_id = 0xa54ee12b;

	constexpr const static std::array<std::string_view, 3> xa54ee12b_values = {
		"kContinue",
		"kStop",
		"kKill", 
	};

	enum class xa54ee12b : uint64_t {
		Continue_Effects,
		Stop_Effects,
		Kill_Effects, 
	};
} // namespace rivet::ddl::generated

// clang-format on