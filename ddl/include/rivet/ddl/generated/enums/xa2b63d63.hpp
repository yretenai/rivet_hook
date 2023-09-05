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
	constexpr const static std::string_view xa2b63d63_type_name = "xa2b63d63";
	constexpr const static rivet::rivet_type_id xa2b63d63_type_id = 0xa2b63d63;

	constexpr const static std::array<std::string_view, 6> xa2b63d63_values = {
		"kIdle",
		"kCheckingDependencies",
		"kBuilding",
		"kGeneratingDependencies",
		"kCacheAccess",
		"kFinishing", 
	};

	enum class xa2b63d63 : uint64_t {
		Idle,
		Checking_Dependencies,
		Building,
		Generating_Dependencies,
		Accessing_CCS,
		Finishing, 
	};
} // namespace rivet::ddl::generated

// clang-format on