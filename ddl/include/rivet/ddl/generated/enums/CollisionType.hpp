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
	constexpr const static std::string_view CollisionType_type_name = "CollisionType";
	constexpr const static rivet::rivet_type_id CollisionType_type_id = 0x56defaed;

	constexpr const static std::array<std::string_view, 3> CollisionType_values = {
		"kStatic",
		"kDynamic",
		"kInactive", 
	};

	enum class CollisionType : uint64_t {
		Static,
		Dynamic,
		Inactive, 
	};
} // namespace rivet::ddl::generated

// clang-format on
