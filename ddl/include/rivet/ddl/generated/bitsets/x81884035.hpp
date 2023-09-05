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
	constexpr const static std::string_view x81884035_type_name = "x81884035";
	constexpr const static rivet::rivet_type_id x81884035_type_id = 0x81884035;

	constexpr const static std::array<std::tuple<std::string_view, uint64_t>, 4> x81884035_values = {
		std::make_tuple("kForward", 0x1),
		std::make_tuple("kLeft", 0x2),
		std::make_tuple("kBack", 0x4),
		std::make_tuple("kRight", 0x8), 
	};

	enum class x81884035 : uint64_t {
		Forward = 0x1,
		Left = 0x2,
		Back = 0x4,
		Right = 0x8, 
	};
} // namespace rivet::ddl::generated

// clang-format on