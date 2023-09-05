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
	struct RIVET_DDL_SHARED FossilizeHoleTrackerPrius : rivet::structures::rivet_ddl_base {
		constexpr const static std::string_view type_name = "FossilizeHoleTrackerPrius";
		constexpr const static rivet::rivet_type_id type_id = 0xdcc547de;

		constexpr const static std::string_view PreApplyMaterial_type_name = "PreApplyMaterial";
		constexpr const static rivet::rivet_type_id PreApplyMaterial_type_id = 0x19334b06;
		constexpr const static std::string_view PostApplyMaterial_type_name = "PostApplyMaterial";
		constexpr const static rivet::rivet_type_id PostApplyMaterial_type_id = 0x7a77becd;
		constexpr const static std::string_view PostAlwaysOn_type_name = "PostAlwaysOn";
		constexpr const static rivet::rivet_type_id PostAlwaysOn_type_id = 0x6933104b;
		constexpr const static std::string_view HoleTrackActor_type_name = "HoleTrackActor";
		constexpr const static rivet::rivet_type_id HoleTrackActor_type_id = 0xf02f47a1;
		constexpr const static std::string_view HitFadeTime_type_name = "HitFadeTime";
		constexpr const static rivet::rivet_type_id HitFadeTime_type_id = 0x6297fb04;
		constexpr const static std::string_view FadeOutTime_type_name = "FadeOutTime";
		constexpr const static rivet::rivet_type_id FadeOutTime_type_id = 0xf2879aff;
		constexpr const static std::string_view CurrentHitScale_type_name = "CurrentHitScale";
		constexpr const static rivet::rivet_type_id CurrentHitScale_type_id = 0x27cc0938;
		constexpr const static std::string_view LastHitScale_type_name = "LastHitScale";
		constexpr const static rivet::rivet_type_id LastHitScale_type_id = 0x2b2858f8;
		constexpr const static std::string_view IdleWaveSpeed_type_name = "IdleWaveSpeed";
		constexpr const static rivet::rivet_type_id IdleWaveSpeed_type_id = 0x2a093990;
		constexpr const static std::string_view IdleWaveScale_type_name = "IdleWaveScale";
		constexpr const static rivet::rivet_type_id IdleWaveScale_type_id = 0xc969e2e2;
		constexpr const static std::string_view MinimumScale_type_name = "MinimumScale";
		constexpr const static rivet::rivet_type_id MinimumScale_type_id = 0xb0a09377;
		constexpr const static std::string_view DeathPreApplyMaterial_type_name = "DeathPreApplyMaterial";
		constexpr const static rivet::rivet_type_id DeathPreApplyMaterial_type_id = 0xe59fe9d3;
		constexpr const static std::string_view DeathPostApplyMaterial_type_name = "DeathPostApplyMaterial";
		constexpr const static rivet::rivet_type_id DeathPostApplyMaterial_type_id = 0x8c323434;
		constexpr const static std::string_view DeathPostAlwaysOn_type_name = "DeathPostAlwaysOn";
		constexpr const static rivet::rivet_type_id DeathPostAlwaysOn_type_id = 0x56926a11;
		constexpr const static std::string_view DeathDisolveDelay_type_name = "DeathDisolveDelay";
		constexpr const static rivet::rivet_type_id DeathDisolveDelay_type_id = 0xfc2f9d1f;
		constexpr const static std::string_view DeathDisolveDuration_type_name = "DeathDisolveDuration";
		constexpr const static rivet::rivet_type_id DeathDisolveDuration_type_id = 0xdb45c1df;
		constexpr const static std::string_view HoleSize_type_name = "HoleSize";
		constexpr const static rivet::rivet_type_id HoleSize_type_id = 0xb981864f;
		constexpr const static std::string_view SmallDeathDisolveDelay_type_name = "SmallDeathDisolveDelay";
		constexpr const static rivet::rivet_type_id SmallDeathDisolveDelay_type_id = 0xf2fd9b18;
		constexpr const static std::string_view SmallDeathDisolveSpeed_type_name = "SmallDeathDisolveSpeed";
		constexpr const static rivet::rivet_type_id SmallDeathDisolveSpeed_type_id = 0x4f41e575;
		constexpr const static std::string_view SmallHoleSize_type_name = "SmallHoleSize";
		constexpr const static rivet::rivet_type_id SmallHoleSize_type_id = 0xbecc800d;
		constexpr const static std::string_view DeathUseJointCrawl_type_name = "DeathUseJointCrawl";
		constexpr const static rivet::rivet_type_id DeathUseJointCrawl_type_id = 0x53d62856; 

		explicit FossilizeHoleTrackerPrius() = default;
		explicit FossilizeHoleTrackerPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::string_view PreApplyMaterial {};
		std::string_view PostApplyMaterial {};
		bool PostAlwaysOn {};
		std::string_view HoleTrackActor {};
		float HitFadeTime {};
		float FadeOutTime {};
		float CurrentHitScale {};
		float LastHitScale {};
		float IdleWaveSpeed {};
		float IdleWaveScale {};
		float MinimumScale {};
		std::string_view DeathPreApplyMaterial {};
		std::string_view DeathPostApplyMaterial {};
		bool DeathPostAlwaysOn {};
		float DeathDisolveDelay {};
		float DeathDisolveDuration {};
		float HoleSize {};
		float SmallDeathDisolveDelay {};
		float SmallDeathDisolveSpeed {};
		float SmallHoleSize {};
		bool DeathUseJointCrawl {}; 

		auto
		get_type_id() const noexcept -> rivet::rivet_type_id override;

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<FossilizeHoleTrackerPrius>;
	};
} // namespace rivet::ddl::generated

// clang-format on