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

#include <rivet/ddl/generated/GrenadeExplosionMode.hpp> 

namespace rivet::ddl::generated {
	struct RIVET_DDL_SHARED ProximityExplosion : GrenadeExplosionMode {
		constexpr const static std::string_view type_name = "ProximityExplosion";
		constexpr const static rivet::rivet_type_id type_id = 0x4faeb2e8;

		constexpr const static std::string_view InFlightProximityRadius_type_name = "InFlightProximityRadius";
		constexpr const static rivet::rivet_type_id InFlightProximityRadius_type_id = 0x24599452;
		constexpr const static std::string_view ProximityRadius_type_name = "ProximityRadius";
		constexpr const static rivet::rivet_type_id ProximityRadius_type_id = 0xf1185690;
		constexpr const static std::string_view FuseTime_type_name = "FuseTime";
		constexpr const static rivet::rivet_type_id FuseTime_type_id = 0x5715b9c;
		constexpr const static std::string_view MaxInFlightSpeed_type_name = "MaxInFlightSpeed";
		constexpr const static rivet::rivet_type_id MaxInFlightSpeed_type_id = 0xbbd7aad3; 

		explicit ProximityExplosion() = default;
		explicit ProximityExplosion([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		float InFlightProximityRadius {};
		float ProximityRadius {};
		float FuseTime {};
		float MaxInFlightSpeed {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<ProximityExplosion>;
	};
} // namespace rivet::ddl::generated

// clang-format on
