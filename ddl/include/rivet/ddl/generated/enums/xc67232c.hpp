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
	constexpr const static std::string_view xc67232c_type_name = "xc67232c";
	constexpr const static rivet::rivet_type_id xc67232c_type_id = 0xc67232c;

	constexpr const static std::array<std::string_view, 3> xc67232c_values = {
		"kSelf",
		"kTargeted",
		"kBroadcast", 
	};

	enum class xc67232c : uint64_t {
		Self,
		Targeted,
		Broadcast, 
	};
} // namespace rivet::ddl::generated

// clang-format on