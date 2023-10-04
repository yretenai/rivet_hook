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
	struct StatusEffectTrackerRynotizePrius;
	struct StatusEffectTrackerProtoGrenadePrius;
	struct StatusEffectTrackerFirePrius;
	struct StatusEffectTrackerFreezePrius;
	struct StatusEffectTrackerLightningRodPrius;
	struct StatusEffectTrackerBasePrius;
	struct StatusEffectTrackerMagnaMissilePrius;
	struct StatusEffectTrackerFossilizePrius;
	struct StatusEffectTrackerShrubberyPrius;
	struct StatusEffectTrackerWarpRifleImplodePrius; 

	struct RIVET_DDL_SHARED BotConfigStatusEffects : ConfigBase {
		constexpr const static std::string_view type_name = "BotConfigStatusEffects";
		constexpr const static rivet::rivet_type_id type_id = 0x44fbf2e9;

		constexpr const static std::string_view FireTrackerPrius_type_name = "FireTrackerPrius";
		constexpr const static rivet::rivet_type_id FireTrackerPrius_type_id = 0x1e88c992;
		constexpr const static std::string_view FreezeTrackerPrius_type_name = "FreezeTrackerPrius";
		constexpr const static rivet::rivet_type_id FreezeTrackerPrius_type_id = 0x72373026;
		constexpr const static std::string_view PixelizedTrackerPrius_type_name = "PixelizedTrackerPrius";
		constexpr const static rivet::rivet_type_id PixelizedTrackerPrius_type_id = 0x5d48d42;
		constexpr const static std::string_view FossilizeTrackerPrius_type_name = "FossilizeTrackerPrius";
		constexpr const static rivet::rivet_type_id FossilizeTrackerPrius_type_id = 0x805ee9bf;
		constexpr const static std::string_view ShrubberyTrackerPrius_type_name = "ShrubberyTrackerPrius";
		constexpr const static rivet::rivet_type_id ShrubberyTrackerPrius_type_id = 0xb35aac7a;
		constexpr const static std::string_view MagnaMissileTrackerPrius_type_name = "MagnaMissileTrackerPrius";
		constexpr const static rivet::rivet_type_id MagnaMissileTrackerPrius_type_id = 0x20a01904;
		constexpr const static std::string_view LightningRodTrackerPrius_type_name = "LightningRodTrackerPrius";
		constexpr const static rivet::rivet_type_id LightningRodTrackerPrius_type_id = 0x9dc20243;
		constexpr const static std::string_view ProtoGrenadeTrackerPrius_type_name = "ProtoGrenadeTrackerPrius";
		constexpr const static rivet::rivet_type_id ProtoGrenadeTrackerPrius_type_id = 0x35a2dd0f;
		constexpr const static std::string_view WarpRifleImplodeTrackerPrius_type_name = "WarpRifleImplodeTrackerPrius";
		constexpr const static rivet::rivet_type_id WarpRifleImplodeTrackerPrius_type_id = 0x2cf648dc;
		constexpr const static std::string_view RynotizeTrackerPrius_type_name = "RynotizeTrackerPrius";
		constexpr const static rivet::rivet_type_id RynotizeTrackerPrius_type_id = 0x21aa1e39; 

		explicit BotConfigStatusEffects() = default;
		explicit BotConfigStatusEffects([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::shared_ptr<rivet::ddl::generated::StatusEffectTrackerFirePrius> FireTrackerPrius {};
		std::shared_ptr<rivet::ddl::generated::StatusEffectTrackerFreezePrius> FreezeTrackerPrius {};
		std::shared_ptr<rivet::ddl::generated::StatusEffectTrackerBasePrius> PixelizedTrackerPrius {};
		std::shared_ptr<rivet::ddl::generated::StatusEffectTrackerFossilizePrius> FossilizeTrackerPrius {};
		std::shared_ptr<rivet::ddl::generated::StatusEffectTrackerShrubberyPrius> ShrubberyTrackerPrius {};
		std::shared_ptr<rivet::ddl::generated::StatusEffectTrackerMagnaMissilePrius> MagnaMissileTrackerPrius {};
		std::shared_ptr<rivet::ddl::generated::StatusEffectTrackerLightningRodPrius> LightningRodTrackerPrius {};
		std::shared_ptr<rivet::ddl::generated::StatusEffectTrackerProtoGrenadePrius> ProtoGrenadeTrackerPrius {};
		std::shared_ptr<rivet::ddl::generated::StatusEffectTrackerWarpRifleImplodePrius> WarpRifleImplodeTrackerPrius {};
		std::shared_ptr<rivet::ddl::generated::StatusEffectTrackerRynotizePrius> RynotizeTrackerPrius {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<BotConfigStatusEffects>;
	};
} // namespace rivet::ddl::generated

// clang-format on
