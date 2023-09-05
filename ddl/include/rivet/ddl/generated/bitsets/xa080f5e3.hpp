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
	constexpr const static std::string_view xa080f5e3_type_name = "xa080f5e3";
	constexpr const static rivet::rivet_type_id xa080f5e3_type_id = 0xa080f5e3;

	constexpr const static std::array<std::tuple<std::string_view, uint64_t>, 4> xa080f5e3_values = {
		std::make_tuple("kLoop", 0x1),
		std::make_tuple("kRestart", 0x2),
		std::make_tuple("kStartOn", 0x4),
		std::make_tuple("kSetReverse", 0x8), 
	};

	enum class xa080f5e3 : uint64_t {
		Loop = 0x1,
		Restart = 0x2,
		StartOn = 0x4,
		SetReverse = 0x8, 
	};
} // namespace rivet::ddl::generated

// clang-format on