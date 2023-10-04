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
	constexpr const static std::string_view x803b6ebb_type_name = "x803b6ebb";
	constexpr const static rivet::rivet_type_id x803b6ebb_type_id = 0x803b6ebb;

	constexpr const static std::array<std::string_view, 6> x803b6ebb_values = {
		"kNone",
		"kEditor",
		"kCamera",
		"kComponent",
		"kCinematic2",
		"kOverrideVolume", 
	};

	enum class x803b6ebb : uint64_t {
		None,
		Editor,
		Camera_System,
		Listener_Component,
		Cinematic2,
		Override_Volume, 
	};
} // namespace rivet::ddl::generated

// clang-format on
