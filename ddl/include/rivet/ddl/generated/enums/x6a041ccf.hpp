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
	constexpr const static std::string_view x6a041ccf_type_name = "x6a041ccf";
	constexpr const static rivet::rivet_type_id x6a041ccf_type_id = 0x6a041ccf;

	constexpr const static std::array<std::string_view, 7> x6a041ccf_values = {
		"kInventorySelect",
		"kInventoryRotate",
		"kInventoryBack",
		"kInventoryUp",
		"kInventoryDown",
		"kInventoryLeft",
		"kInventoryRight", 
	};

	enum class x6a041ccf : uint64_t {
		InventorySelect,
		InventoryRotate,
		InventoryBack,
		InventoryUp,
		InventoryDown,
		InventoryLeft,
		InventoryRight, 
	};
} // namespace rivet::ddl::generated

// clang-format on
