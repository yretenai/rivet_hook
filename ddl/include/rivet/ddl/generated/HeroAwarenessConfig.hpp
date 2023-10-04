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
	struct RIVET_DDL_SHARED HeroAwarenessConfig : rivet::structures::rivet_ddl_base {
		constexpr const static std::string_view type_name = "HeroAwarenessConfig";
		constexpr const static rivet::rivet_type_id type_id = 0xa91e14e1;

		constexpr const static std::string_view HeadTurnActivateMaxSpeed_type_name = "HeadTurnActivateMaxSpeed";
		constexpr const static rivet::rivet_type_id HeadTurnActivateMaxSpeed_type_id = 0xa85e9d66;
		constexpr const static std::string_view HeadTurnActivateAccel_type_name = "HeadTurnActivateAccel";
		constexpr const static rivet::rivet_type_id HeadTurnActivateAccel_type_id = 0x66e642ef;
		constexpr const static std::string_view HeadTurnActivateDecel_type_name = "HeadTurnActivateDecel";
		constexpr const static rivet::rivet_type_id HeadTurnActivateDecel_type_id = 0x8b6d9243;
		constexpr const static std::string_view HeadTurnRecoveryMaxSpeed_type_name = "HeadTurnRecoveryMaxSpeed";
		constexpr const static rivet::rivet_type_id HeadTurnRecoveryMaxSpeed_type_id = 0x11e23829;
		constexpr const static std::string_view HeadTurnRecoveryAccel_type_name = "HeadTurnRecoveryAccel";
		constexpr const static rivet::rivet_type_id HeadTurnRecoveryAccel_type_id = 0x994b7534;
		constexpr const static std::string_view HeadTurnRecoveryDecel_type_name = "HeadTurnRecoveryDecel";
		constexpr const static rivet::rivet_type_id HeadTurnRecoveryDecel_type_id = 0x74c0a598;
		constexpr const static std::string_view HeadTurnMaxYaw_type_name = "HeadTurnMaxYaw";
		constexpr const static rivet::rivet_type_id HeadTurnMaxYaw_type_id = 0x2b83d06b;
		constexpr const static std::string_view HeadTurnMaxPitch_type_name = "HeadTurnMaxPitch";
		constexpr const static rivet::rivet_type_id HeadTurnMaxPitch_type_id = 0xc7816ef2;
		constexpr const static std::string_view HeadLookDriverCooldown_type_name = "HeadLookDriverCooldown";
		constexpr const static rivet::rivet_type_id HeadLookDriverCooldown_type_id = 0xec1b2ab2;
		constexpr const static std::string_view AimAssistTargetRange_type_name = "AimAssistTargetRange";
		constexpr const static rivet::rivet_type_id AimAssistTargetRange_type_id = 0xd575e854;
		constexpr const static std::string_view AimAssistTargetDecayTime_type_name = "AimAssistTargetDecayTime";
		constexpr const static rivet::rivet_type_id AimAssistTargetDecayTime_type_id = 0xe083973d;
		constexpr const static std::string_view RecentAttackerRange_type_name = "RecentAttackerRange";
		constexpr const static rivet::rivet_type_id RecentAttackerRange_type_id = 0xa931f555;
		constexpr const static std::string_view RecentAttackerMaxAge_type_name = "RecentAttackerMaxAge";
		constexpr const static rivet::rivet_type_id RecentAttackerMaxAge_type_id = 0xaf74e184;
		constexpr const static std::string_view PointOfInterestRange_type_name = "PointOfInterestRange";
		constexpr const static rivet::rivet_type_id PointOfInterestRange_type_id = 0x1eebee0b;
		constexpr const static std::string_view NPCRange_type_name = "NPCRange";
		constexpr const static rivet::rivet_type_id NPCRange_type_id = 0x643fc3b5;
		constexpr const static std::string_view NPCKeepTargetDuration_type_name = "NPCKeepTargetDuration";
		constexpr const static rivet::rivet_type_id NPCKeepTargetDuration_type_id = 0xa20e812;
		constexpr const static std::string_view EnemyRange_type_name = "EnemyRange";
		constexpr const static rivet::rivet_type_id EnemyRange_type_id = 0x51f0feee;
		constexpr const static std::string_view EnemyCheckInterval_type_name = "EnemyCheckInterval";
		constexpr const static rivet::rivet_type_id EnemyCheckInterval_type_id = 0x21586223;
		constexpr const static std::string_view TraversalRange_type_name = "TraversalRange";
		constexpr const static rivet::rivet_type_id TraversalRange_type_id = 0x23f7d11;
		constexpr const static std::string_view TraversalMaxAge_type_name = "TraversalMaxAge";
		constexpr const static rivet::rivet_type_id TraversalMaxAge_type_id = 0xde6e6a85; 

		explicit HeroAwarenessConfig() = default;
		explicit HeroAwarenessConfig([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		float HeadTurnActivateMaxSpeed {};
		float HeadTurnActivateAccel {};
		float HeadTurnActivateDecel {};
		float HeadTurnRecoveryMaxSpeed {};
		float HeadTurnRecoveryAccel {};
		float HeadTurnRecoveryDecel {};
		float HeadTurnMaxYaw {};
		float HeadTurnMaxPitch {};
		float HeadLookDriverCooldown {};
		float AimAssistTargetRange {};
		float AimAssistTargetDecayTime {};
		float RecentAttackerRange {};
		float RecentAttackerMaxAge {};
		float PointOfInterestRange {};
		float NPCRange {};
		float NPCKeepTargetDuration {};
		float EnemyRange {};
		float EnemyCheckInterval {};
		float TraversalRange {};
		float TraversalMaxAge {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<HeroAwarenessConfig>;
	};
} // namespace rivet::ddl::generated

// clang-format on
