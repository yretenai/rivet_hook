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
	constexpr const static std::string_view x8693007e_type_name = "x8693007e";
	constexpr const static rivet::rivet_type_id x8693007e_type_id = 0x8693007e;

	constexpr const static std::array<std::string_view, 3> x8693007e_values = {
		"kHelp",
		"kHelpCentered",
		"kConfirmation", 
	};

	enum class x8693007e : uint64_t {
		Help,
		HelpCentered,
		Confirmation, 
	};
} // namespace rivet::ddl::generated

// clang-format on