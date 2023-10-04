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

#include <rivet/ddl/generated/WeaponPredatorPrius.hpp> 

namespace rivet::ddl::generated {
	struct RIVET_DDL_SHARED WeaponHexapodPredatorPrius : WeaponPredatorPrius {
		constexpr const static std::string_view type_name = "WeaponHexapodPredatorPrius";
		constexpr const static rivet::rivet_type_id type_id = 0xc26c030e;

		constexpr const static std::string_view TargetScoreSwarmer_type_name = "TargetScoreSwarmer";
		constexpr const static rivet::rivet_type_id TargetScoreSwarmer_type_id = 0x618fd93a;
		constexpr const static std::string_view TargetScoreFlyer_type_name = "TargetScoreFlyer";
		constexpr const static rivet::rivet_type_id TargetScoreFlyer_type_id = 0x9d80142e;
		constexpr const static std::string_view TargetScoreNest_type_name = "TargetScoreNest";
		constexpr const static rivet::rivet_type_id TargetScoreNest_type_id = 0x8595aef;
		constexpr const static std::string_view LaunchCooldown_type_name = "LaunchCooldown";
		constexpr const static rivet::rivet_type_id LaunchCooldown_type_id = 0xd7b9d34f;
		constexpr const static std::string_view InitialLaunchCooldown_type_name = "InitialLaunchCooldown";
		constexpr const static rivet::rivet_type_id InitialLaunchCooldown_type_id = 0x5b587935;
		constexpr const static std::string_view RocketDelay_type_name = "RocketDelay";
		constexpr const static rivet::rivet_type_id RocketDelay_type_id = 0x74d22163; 

		explicit WeaponHexapodPredatorPrius() = default;
		explicit WeaponHexapodPredatorPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		float TargetScoreSwarmer {};
		float TargetScoreFlyer {};
		float TargetScoreNest {};
		float LaunchCooldown {};
		float InitialLaunchCooldown {};
		float RocketDelay {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<WeaponHexapodPredatorPrius>;
	};
} // namespace rivet::ddl::generated

// clang-format on
