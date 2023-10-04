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
	constexpr const static std::string_view xcc3b3a79_type_name = "xcc3b3a79";
	constexpr const static rivet::rivet_type_id xcc3b3a79_type_id = 0xcc3b3a79;

	constexpr const static std::array<std::string_view, 6> xcc3b3a79_values = {
		"kEditor",
		"kZone",
		"kDragBegin",
		"kDrag",
		"kDragEnd",
		"kEngine", 
	};

	enum class xcc3b3a79 : uint64_t {
		Editor,
		Zone,
		DragBegin,
		Drag,
		DragEnd,
		Engine, 
	};
} // namespace rivet::ddl::generated

// clang-format on