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
	constexpr const static std::string_view x1e271f24_type_name = "x1e271f24";
	constexpr const static rivet::rivet_type_id x1e271f24_type_id = 0x1e271f24;

	constexpr const static std::array<std::string_view, 3> x1e271f24_values = {
		"kPrune",
		"kPruneFollow",
		"kNoPrune", 
	};

	enum class x1e271f24 : uint64_t {
		Prune_Previous,
		Prune_But_Follow,
		No_Prune_Previous, 
	};
} // namespace rivet::ddl::generated

// clang-format on