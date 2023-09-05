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
	constexpr const static std::string_view xf88150a5_type_name = "xf88150a5";
	constexpr const static rivet::rivet_type_id xf88150a5_type_id = 0xf88150a5;

	constexpr const static std::array<std::string_view, 4> xf88150a5_values = {
		"kNone",
		"kPurchaseGrenade",
		"kWeaponUpgrade",
		"kOmegaWeapons", 
	};

	enum class xf88150a5 : uint64_t {
		None,
		PurchaseGrenade,
		WeaponUpgrade,
		OmegaWeapons, 
	};
} // namespace rivet::ddl::generated

// clang-format on