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
	constexpr const static std::string_view x5332e9b5_type_name = "x5332e9b5";
	constexpr const static rivet::rivet_type_id x5332e9b5_type_id = 0x5332e9b5;

	constexpr const static std::array<std::tuple<std::string_view, uint64_t>, 3> x5332e9b5_values = {
		std::make_tuple("kTranslation", 0x1),
		std::make_tuple("kRotation", 0x2),
		std::make_tuple("kScale", 0x4), 
	};

	enum class x5332e9b5 : uint64_t {
		Translation = 0x1,
		Rotation = 0x2,
		Scale = 0x4, 
	};
} // namespace rivet::ddl::generated

// clang-format on