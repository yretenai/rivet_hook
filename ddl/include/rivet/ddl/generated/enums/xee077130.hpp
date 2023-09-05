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
	constexpr const static std::string_view xee077130_type_name = "xee077130";
	constexpr const static rivet::rivet_type_id xee077130_type_id = 0xee077130;

	constexpr const static std::array<std::string_view, 3> xee077130_values = {
		"kDisable",
		"kVertical",
		"kEverything", 
	};

	enum class xee077130 : uint64_t {
		Disable,
		Vertical,
		Everything, 
	};
} // namespace rivet::ddl::generated

// clang-format on