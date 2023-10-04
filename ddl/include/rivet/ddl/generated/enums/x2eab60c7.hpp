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
	constexpr const static std::string_view x2eab60c7_type_name = "x2eab60c7";
	constexpr const static rivet::rivet_type_id x2eab60c7_type_id = 0x2eab60c7;

	constexpr const static std::array<std::string_view, 3> x2eab60c7_values = {
		"kSceneNode",
		"kActorGroup",
		"kLevelList", 
	};

	enum class x2eab60c7 : uint64_t {
		SceneNode,
		ActorGroup,
		LevelList, 
	};
} // namespace rivet::ddl::generated

// clang-format on
