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
	constexpr const static std::string_view ShadowRes_type_name = "ShadowRes";
	constexpr const static rivet::rivet_type_id ShadowRes_type_id = 0x4344f8a2;

	constexpr const static std::array<std::string_view, 4> ShadowRes_values = {
		"kLowRes",
		"kNormal",
		"kHighRes",
		"kCinematic", 
	};

	enum class ShadowRes : uint64_t {
		Low_Res,
		Normal,
		High_Res,
		Cinematic, 
	};
} // namespace rivet::ddl::generated

// clang-format on