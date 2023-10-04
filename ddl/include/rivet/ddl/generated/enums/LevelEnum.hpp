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
	constexpr const static std::string_view LevelEnum_type_name = "LevelEnum";
	constexpr const static rivet::rivet_type_id LevelEnum_type_id = 0x4223680a;

	constexpr const static std::array<std::string_view, 11> LevelEnum_values = {
		"kNone",
		"kMegalopolis",
		"kNefariousCity",
		"kSargasso",
		"kZurkies",
		"kSavali",
		"kBlizar",
		"kMolonoth",
		"kCordelion",
		"kArdolis",
		"kZordoom", 
	};

	enum class LevelEnum : uint64_t {
		None,
		Megalopolis,
		Nefarious_City,
		Sargasso,
		Zurkies,
		Savali,
		Blizar,
		Molonoth,
		Cordelion,
		Ardolis,
		Zordoom, 
	};
} // namespace rivet::ddl::generated

// clang-format on
