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

#include <rivet/ddl/generated/BotComboLaserShotType.hpp> 

namespace rivet::ddl::generated {
	struct AimModWrapper; 

	struct RIVET_DDL_SHARED LaserShotTypeAnimEventDriven : BotComboLaserShotType {
		constexpr const static std::string_view type_name = "LaserShotTypeAnimEventDriven";
		constexpr const static rivet::rivet_type_id type_id = 0x6ad13650;

		constexpr const static std::string_view AllowUseWhileMoving_type_name = "AllowUseWhileMoving";
		constexpr const static rivet::rivet_type_id AllowUseWhileMoving_type_id = 0x66a41a89;
		constexpr const static std::string_view StrafeShootPartialAnim_type_name = "StrafeShootPartialAnim";
		constexpr const static rivet::rivet_type_id StrafeShootPartialAnim_type_id = 0xd312963d;
		constexpr const static std::string_view ScaleTellTime_type_name = "ScaleTellTime";
		constexpr const static rivet::rivet_type_id ScaleTellTime_type_id = 0xe17e403c;
		constexpr const static std::string_view ScaleShootTime_type_name = "ScaleShootTime";
		constexpr const static rivet::rivet_type_id ScaleShootTime_type_id = 0x561eaa97;
		constexpr const static std::string_view ScaleRecoveryTime_type_name = "ScaleRecoveryTime";
		constexpr const static rivet::rivet_type_id ScaleRecoveryTime_type_id = 0x4eeca312;
		constexpr const static std::string_view TweakHeadingTowardsTarget_type_name = "TweakHeadingTowardsTarget";
		constexpr const static rivet::rivet_type_id TweakHeadingTowardsTarget_type_id = 0xa28d0c60;
		constexpr const static std::string_view TweakHeadingTime_type_name = "TweakHeadingTime";
		constexpr const static rivet::rivet_type_id TweakHeadingTime_type_id = 0x14be983a;
		constexpr const static std::string_view UseAimingComponent_type_name = "UseAimingComponent";
		constexpr const static rivet::rivet_type_id UseAimingComponent_type_id = 0x2fc3f981;
		constexpr const static std::string_view StartAimModOnStateStart_type_name = "StartAimModOnStateStart";
		constexpr const static rivet::rivet_type_id StartAimModOnStateStart_type_id = 0xceb7741c;
		constexpr const static std::string_view EndAimModsOnShootEnd_type_name = "EndAimModsOnShootEnd";
		constexpr const static rivet::rivet_type_id EndAimModsOnShootEnd_type_id = 0x7560b934;
		constexpr const static std::string_view MimicShotRate_type_name = "MimicShotRate";
		constexpr const static rivet::rivet_type_id MimicShotRate_type_id = 0xd7ef4376;
		constexpr const static std::string_view LimitRange_type_name = "LimitRange";
		constexpr const static rivet::rivet_type_id LimitRange_type_id = 0x52b09495;
		constexpr const static std::string_view MinRange_type_name = "MinRange";
		constexpr const static rivet::rivet_type_id MinRange_type_id = 0x6c79323f;
		constexpr const static std::string_view MaxRange_type_name = "MaxRange";
		constexpr const static rivet::rivet_type_id MaxRange_type_id = 0x8a199dde;
		constexpr const static std::string_view AimMods_type_name = "AimMods";
		constexpr const static rivet::rivet_type_id AimMods_type_id = 0x1d7694a1; 

		explicit LaserShotTypeAnimEventDriven() = default;
		explicit LaserShotTypeAnimEventDriven([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		bool AllowUseWhileMoving {};
		std::string_view StrafeShootPartialAnim {};
		float ScaleTellTime {};
		float ScaleShootTime {};
		float ScaleRecoveryTime {};
		bool TweakHeadingTowardsTarget {};
		float TweakHeadingTime {};
		bool UseAimingComponent {};
		bool StartAimModOnStateStart {};
		bool EndAimModsOnShootEnd {};
		float MimicShotRate {};
		bool LimitRange {};
		float MinRange {};
		float MaxRange {};
		std::vector<std::shared_ptr<rivet::ddl::generated::AimModWrapper>> AimMods {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<LaserShotTypeAnimEventDriven>;
	};
} // namespace rivet::ddl::generated

// clang-format on
