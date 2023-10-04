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

#include <rivet/ddl/generated/ConfigBase.hpp> 

namespace rivet::ddl::generated {
	struct RIVET_DDL_SHARED SpaceshipHeroFlightConfig : ConfigBase {
		constexpr const static std::string_view type_name = "SpaceshipHeroFlightConfig";
		constexpr const static rivet::rivet_type_id type_id = 0xb44dc139;

		constexpr const static std::string_view HitCollDmgPercent_type_name = "HitCollDmgPercent";
		constexpr const static rivet::rivet_type_id HitCollDmgPercent_type_id = 0xcdde061a;
		constexpr const static std::string_view HitCollDmgMinAmount_type_name = "HitCollDmgMinAmount";
		constexpr const static rivet::rivet_type_id HitCollDmgMinAmount_type_id = 0x9c6cc541;
		constexpr const static std::string_view TargetingRange_type_name = "TargetingRange";
		constexpr const static rivet::rivet_type_id TargetingRange_type_id = 0x1de24741;
		constexpr const static std::string_view DefaultMovementSpeed_type_name = "DefaultMovementSpeed";
		constexpr const static rivet::rivet_type_id DefaultMovementSpeed_type_id = 0xa7855420;
		constexpr const static std::string_view FiringMovmentSpeed_type_name = "FiringMovmentSpeed";
		constexpr const static rivet::rivet_type_id FiringMovmentSpeed_type_id = 0x8490b2ac;
		constexpr const static std::string_view ThrustMovementSpeed_type_name = "ThrustMovementSpeed";
		constexpr const static rivet::rivet_type_id ThrustMovementSpeed_type_id = 0x2afa8304;
		constexpr const static std::string_view AllowBulletsWhenThrusting_type_name = "AllowBulletsWhenThrusting";
		constexpr const static rivet::rivet_type_id AllowBulletsWhenThrusting_type_id = 0x8761f602;
		constexpr const static std::string_view AllowNonDirRoll_type_name = "AllowNonDirRoll";
		constexpr const static rivet::rivet_type_id AllowNonDirRoll_type_id = 0xe5e5b19d;
		constexpr const static std::string_view CamDefaultFOV_type_name = "CamDefaultFOV";
		constexpr const static rivet::rivet_type_id CamDefaultFOV_type_id = 0x73ed030f;
		constexpr const static std::string_view CamDefaultFollowHeight_type_name = "CamDefaultFollowHeight";
		constexpr const static rivet::rivet_type_id CamDefaultFollowHeight_type_id = 0x9eca8234;
		constexpr const static std::string_view CamDefaultFollowDist_type_name = "CamDefaultFollowDist";
		constexpr const static rivet::rivet_type_id CamDefaultFollowDist_type_id = 0xb1a2c459;
		constexpr const static std::string_view CamDefaultTargetRelYOffset_type_name = "CamDefaultTargetRelYOffset";
		constexpr const static rivet::rivet_type_id CamDefaultTargetRelYOffset_type_id = 0x893a1e0f;
		constexpr const static std::string_view CamDefaultBasePitchOffset_type_name = "CamDefaultBasePitchOffset";
		constexpr const static rivet::rivet_type_id CamDefaultBasePitchOffset_type_id = 0x833d80bc; 

		explicit SpaceshipHeroFlightConfig() = default;
		explicit SpaceshipHeroFlightConfig([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		float HitCollDmgPercent {};
		float HitCollDmgMinAmount {};
		float TargetingRange {};
		float DefaultMovementSpeed {};
		float FiringMovmentSpeed {};
		float ThrustMovementSpeed {};
		bool AllowBulletsWhenThrusting {};
		bool AllowNonDirRoll {};
		float CamDefaultFOV {};
		float CamDefaultFollowHeight {};
		float CamDefaultFollowDist {};
		float CamDefaultTargetRelYOffset {};
		float CamDefaultBasePitchOffset {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<SpaceshipHeroFlightConfig>;
	};
} // namespace rivet::ddl::generated

// clang-format on