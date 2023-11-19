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
	struct RIVET_DDL_SHARED Beam2PointPrius : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "Beam2PointPrius";
		constexpr static rivet::rivet_type_id type_id = 0xb857ab38;

		constexpr static std::string_view StartLocator_type_name = "StartLocator";
		constexpr static rivet::rivet_type_id StartLocator_type_id = 0x45890f60;
		constexpr static std::string_view EndLocator_type_name = "EndLocator";
		constexpr static rivet::rivet_type_id EndLocator_type_id = 0xe7e59581;
		constexpr static std::string_view BeamLength_type_name = "BeamLength";
		constexpr static rivet::rivet_type_id BeamLength_type_id = 0xba6991ce;
		constexpr static std::string_view IsStartLocatorFixed_type_name = "IsStartLocatorFixed";
		constexpr static rivet::rivet_type_id IsStartLocatorFixed_type_id = 0x4eae740d;
		constexpr static std::string_view StopAtCollision_type_name = "StopAtCollision";
		constexpr static rivet::rivet_type_id StopAtCollision_type_id = 0xea428700;
		constexpr static std::string_view FX_type_name = "FX";
		constexpr static rivet::rivet_type_id FX_type_id = 0x22a62ac5;
		constexpr static std::string_view TurnOnWhenActivated_type_name = "TurnOnWhenActivated";
		constexpr static rivet::rivet_type_id TurnOnWhenActivated_type_id = 0x61c16864;
		constexpr static std::string_view ForceSweptSphere_type_name = "ForceSweptSphere";
		constexpr static rivet::rivet_type_id ForceSweptSphere_type_id = 0x6dc14e7d;
		constexpr static std::string_view DamageAmount_type_name = "DamageAmount";
		constexpr static rivet::rivet_type_id DamageAmount_type_id = 0x563be470;
		constexpr static std::string_view DamageRadius_type_name = "DamageRadius";
		constexpr static rivet::rivet_type_id DamageRadius_type_id = 0xe3e6fa68;
		constexpr static std::string_view BeamRadius_type_name = "BeamRadius";
		constexpr static rivet::rivet_type_id BeamRadius_type_id = 0x80686126;
		constexpr static std::string_view InstantKill_type_name = "InstantKill";
		constexpr static rivet::rivet_type_id InstantKill_type_id = 0x76ea550c;
		constexpr static std::string_view ApplyDamageToIncludeGroup_type_name = "ApplyDamageToIncludeGroup";
		constexpr static rivet::rivet_type_id ApplyDamageToIncludeGroup_type_id = 0xdb48d8ce;
		constexpr static std::string_view TurnTargetInvulnerable_type_name = "TurnTargetInvulnerable";
		constexpr static rivet::rivet_type_id TurnTargetInvulnerable_type_id = 0xa6240aba;
		constexpr static std::string_view OnlyDirectDamage_type_name = "OnlyDirectDamage";
		constexpr static rivet::rivet_type_id OnlyDirectDamage_type_id = 0x334d7933;
		constexpr static std::string_view DamageIncludeGroupHandle_type_name = "DamageIncludeGroupHandle";
		constexpr static rivet::rivet_type_id DamageIncludeGroupHandle_type_id = 0x7f5bd8ee; 

		explicit Beam2PointPrius() = default;
		explicit Beam2PointPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::string_view StartLocator {};
		std::string_view EndLocator {};
		float BeamLength {};
		bool IsStartLocatorFixed {};
		bool StopAtCollision {};
		bool FX {};
		bool TurnOnWhenActivated {};
		bool ForceSweptSphere {};
		float DamageAmount {};
		float DamageRadius {};
		float BeamRadius {};
		bool InstantKill {};
		bool ApplyDamageToIncludeGroup {};
		bool TurnTargetInvulnerable {};
		bool OnlyDirectDamage {};
		uint32_t DamageIncludeGroupHandle {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<Beam2PointPrius>;
	};
} // namespace rivet::ddl::generated

// clang-format on