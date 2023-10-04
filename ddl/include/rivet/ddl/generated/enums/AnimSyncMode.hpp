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
	constexpr const static std::string_view AnimSyncMode_type_name = "AnimSyncMode";
	constexpr const static rivet::rivet_type_id AnimSyncMode_type_id = 0xd1591f1c;

	constexpr const static std::array<std::string_view, 3> AnimSyncMode_values = {
		"FromBeginning",
		"NormT",
		"OneMinusNormT", 
	};

	enum class AnimSyncMode : uint64_t {
		From_Beginning,
		Norm_T,
		One_Minus_Norm_T, 
	};
} // namespace rivet::ddl::generated

// clang-format on
