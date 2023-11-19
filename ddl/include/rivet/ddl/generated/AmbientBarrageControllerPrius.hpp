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
	struct RIVET_DDL_SHARED AmbientBarrageControllerPrius : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "AmbientBarrageControllerPrius";
		constexpr static rivet::rivet_type_id type_id = 0x7c16401f;

		constexpr static std::string_view AmbientShooterActorGroup_type_name = "AmbientShooterActorGroup";
		constexpr static rivet::rivet_type_id AmbientShooterActorGroup_type_id = 0x843c6a98;
		constexpr static std::string_view DefaultTargetActorGroup_type_name = "DefaultTargetActorGroup";
		constexpr static rivet::rivet_type_id DefaultTargetActorGroup_type_id = 0x38571033;
		constexpr static std::string_view AmbientBarrageConfig_type_name = "AmbientBarrageConfig";
		constexpr static rivet::rivet_type_id AmbientBarrageConfig_type_id = 0xc1d92357;
		constexpr static std::string_view StartOnActivate_type_name = "StartOnActivate";
		constexpr static rivet::rivet_type_id StartOnActivate_type_id = 0xb417dda9;
		constexpr static std::string_view OnScreenShootersOnly_type_name = "OnScreenShootersOnly";
		constexpr static rivet::rivet_type_id OnScreenShootersOnly_type_id = 0x65810190;
		constexpr static std::string_view OnlyBestShooterFires_type_name = "OnlyBestShooterFires";
		constexpr static rivet::rivet_type_id OnlyBestShooterFires_type_id = 0xece53a66;
		constexpr static std::string_view MaxDistanceFromTarget_type_name = "MaxDistanceFromTarget";
		constexpr static rivet::rivet_type_id MaxDistanceFromTarget_type_id = 0x34fb8dc8; 

		explicit AmbientBarrageControllerPrius() = default;
		explicit AmbientBarrageControllerPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		uint64_t AmbientShooterActorGroup {};
		uint64_t DefaultTargetActorGroup {};
		std::string_view AmbientBarrageConfig {};
		bool StartOnActivate {};
		bool OnScreenShootersOnly {};
		bool OnlyBestShooterFires {};
		float MaxDistanceFromTarget {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<AmbientBarrageControllerPrius>;
	};
} // namespace rivet::ddl::generated

// clang-format on