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
	constexpr const static std::string_view x442dee57_type_name = "x442dee57";
	constexpr const static rivet::rivet_type_id x442dee57_type_id = 0x442dee57;

	constexpr const static std::array<std::tuple<std::string_view, uint64_t>, 5> x442dee57_values = {
		std::make_tuple("kFlagsNone", 0x1),
		std::make_tuple("kFlagsIgnore", 0x2),
		std::make_tuple("kFlagsMirrorYZ", 0x4),
		std::make_tuple("kFlagsMirrorXZ", 0x8),
		std::make_tuple("kFlagsMirrorXY", 0x10), 
	};

	enum class x442dee57 : uint64_t {
		FlagsNone = 0x1,
		FlagsIgnore = 0x2,
		FlagsMirrorYZ = 0x4,
		FlagsMirrorXZ = 0x8,
		FlagsMirrorXY = 0x10, 
	};
} // namespace rivet::ddl::generated

// clang-format on