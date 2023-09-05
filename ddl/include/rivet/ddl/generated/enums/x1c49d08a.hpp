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
	constexpr const static std::string_view x1c49d08a_type_name = "x1c49d08a";
	constexpr const static rivet::rivet_type_id x1c49d08a_type_id = 0x1c49d08a;

	constexpr const static std::array<std::string_view, 3> x1c49d08a_values = {
		"kAnimMirrorYZ",
		"kAnimMirrorXZ",
		"kAnimMirrorXY", 
	};

	enum class x1c49d08a : uint64_t {
		AnimMirrorYZ,
		AnimMirrorXZ,
		AnimMirrorXY, 
	};
} // namespace rivet::ddl::generated

// clang-format on