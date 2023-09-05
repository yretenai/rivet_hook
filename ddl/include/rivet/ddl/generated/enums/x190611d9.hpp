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
	constexpr const static std::string_view x190611d9_type_name = "x190611d9";
	constexpr const static rivet::rivet_type_id x190611d9_type_id = 0x190611d9;

	constexpr const static std::array<std::string_view, 6> x190611d9_values = {
		"kInvalid",
		"kBase",
		"kPower",
		"kStretch",
		"kSpring",
		"kBomb", 
	};

	enum class x190611d9 : uint64_t {
		Invalid,
		Base,
		Power,
		Stretch,
		Spring,
		Bomb, 
	};
} // namespace rivet::ddl::generated

// clang-format on