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
	constexpr const static std::string_view x5e401570_type_name = "x5e401570";
	constexpr const static rivet::rivet_type_id x5e401570_type_id = 0x5e401570;

	constexpr const static std::array<std::string_view, 4> x5e401570_values = {
		"OnAvailable",
		"OnActive",
		"OnCleanup",
		"OnComplete", 
	};

	enum class x5e401570 : uint64_t {
		OnAvailable,
		OnActive,
		OnCleanup,
		OnComplete, 
	};
} // namespace rivet::ddl::generated

// clang-format on
