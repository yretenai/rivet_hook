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

namespace rivet::ddl::generated {
	struct RIVET_DDL_SHARED VehicleNodeParams : rivet::structures::rivet_ddl_base {
		constexpr const static std::string_view type_name = "VehicleNodeParams";
		constexpr const static rivet::rivet_type_id type_id = 0xa7a8b7fc;

		constexpr const static std::string_view SpeedLimits_type_name = "SpeedLimits";
		constexpr const static rivet::rivet_type_id SpeedLimits_type_id = 0x6679cfb1;
		constexpr const static std::string_view Densities_type_name = "Densities";
		constexpr const static rivet::rivet_type_id Densities_type_id = 0x4db0d03e;
		constexpr const static std::string_view DensitiesPerfMode_type_name = "DensitiesPerfMode";
		constexpr const static rivet::rivet_type_id DensitiesPerfMode_type_id = 0x4ba144ad;
		constexpr const static std::string_view DensitiesMediumPerfMode_type_name = "DensitiesMediumPerfMode";
		constexpr const static rivet::rivet_type_id DensitiesMediumPerfMode_type_id = 0x320dbe76;
		constexpr const static std::string_view DensitiesLowPerfMode_type_name = "DensitiesLowPerfMode";
		constexpr const static rivet::rivet_type_id DensitiesLowPerfMode_type_id = 0x7d010b11; 

		explicit VehicleNodeParams() = default;
		explicit VehicleNodeParams([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::vector<float> SpeedLimits {};
		std::vector<float> Densities {};
		std::vector<float> DensitiesPerfMode {};
		std::vector<float> DensitiesMediumPerfMode {};
		std::vector<float> DensitiesLowPerfMode {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<VehicleNodeParams>;
	};
} // namespace rivet::ddl::generated

// clang-format on
