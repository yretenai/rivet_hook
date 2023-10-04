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
	constexpr const static std::string_view xcbde7961_type_name = "xcbde7961";
	constexpr const static rivet::rivet_type_id xcbde7961_type_id = 0xcbde7961;

	constexpr const static std::array<std::string_view, 4> xcbde7961_values = {
		"kConstraintTypeSimple",
		"kConstraintTypeCone",
		"kConstraintTypeHalfCone",
		"kConstraintTypeLimitedCone", 
	};

	enum class xcbde7961 : uint64_t {
		Simple,
		Cone,
		ConstraintTypeHalfCone,
		ConstraintTypeLimitedCone, 
	};
} // namespace rivet::ddl::generated

// clang-format on
