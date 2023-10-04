// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#pragma once

// clang-format off

#include <cstdint>
#include <memory>
#include <string_view>
#include <vector>

#include <rivet/hash/type_id.hpp>
#include <rivet/rivet_array.hpp>
#include <rivet/rivet_keywords.hpp>
#include <rivet/structures/rivet_serialization.hpp>

#include <rivet/ddl/generated/GrenadeShotMotionPrius.hpp> 

namespace rivet::ddl::generated {
	struct RIVET_DDL_SHARED ShotMotionFusionGrenadeSubShotPrius : GrenadeShotMotionPrius {
		constexpr const static std::string_view type_name = "ShotMotionFusionGrenadeSubShotPrius";
		constexpr const static rivet::rivet_type_id type_id = 0x80039407;

		constexpr const static std::string_view MaxBounces_type_name = "MaxBounces";
		constexpr const static rivet::rivet_type_id MaxBounces_type_id = 0x73e25a00; 

		explicit ShotMotionFusionGrenadeSubShotPrius() = default;
		explicit ShotMotionFusionGrenadeSubShotPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		uint32_t MaxBounces {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<ShotMotionFusionGrenadeSubShotPrius>;
	};
} // namespace rivet::ddl::generated

// clang-format on