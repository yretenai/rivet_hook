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
	constexpr const static std::string_view x847316cf_type_name = "x847316cf";
	constexpr const static rivet::rivet_type_id x847316cf_type_id = 0x847316cf;

	constexpr const static std::array<std::string_view, 20> x847316cf_values = {
		"kNone",
		"kHeader",
		"kPhotoMode",
		"kTimeDilation90",
		"kTimeDilation80",
		"kTimeDilation70",
		"kTimeDilation60",
		"kTimeDilation50",
		"kTimeDilation40",
		"kTimeDilation30",
		"kTimeDilation20",
		"kWrenchThrow",
		"kWrenchSlam",
		"kMeleeCombo",
		"kGlideFall",
		"kToggleContrast",
		"kObjectivePing",
		"kFaceObjective",
		"kObjectivePingToggle",
		"kSkipCinematic", 
	};

	enum class x847316cf : uint64_t {
		None,
		Header,
		PhotoMode,
		TimeDilation90,
		TimeDilation80,
		TimeDilation70,
		TimeDilation60,
		TimeDilation50,
		TimeDilation40,
		TimeDilation30,
		TimeDilation20,
		WrenchThrow,
		WrenchSlam,
		MeleeCombo,
		GlideFall,
		ToggleContrast,
		ObjectivePing,
		FaceObjective,
		ObjectivePingToggle,
		SkipCinematic, 
	};
} // namespace rivet::ddl::generated

// clang-format on