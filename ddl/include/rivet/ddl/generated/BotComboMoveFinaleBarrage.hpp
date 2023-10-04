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

#include <rivet/ddl/generated/BotComboMoveBase.hpp> 

namespace rivet::ddl::generated {
	struct RIVET_DDL_SHARED BotComboMoveFinaleBarrage : BotComboMoveBase {
		constexpr const static std::string_view type_name = "BotComboMoveFinaleBarrage";
		constexpr const static rivet::rivet_type_id type_id = 0x61e95811;

		constexpr const static std::string_view PortalActorAsset_type_name = "PortalActorAsset";
		constexpr const static rivet::rivet_type_id PortalActorAsset_type_id = 0xfec29c86;
		constexpr const static std::string_view PortalSpawnArea_type_name = "PortalSpawnArea";
		constexpr const static rivet::rivet_type_id PortalSpawnArea_type_id = 0x3c1fe36;
		constexpr const static std::string_view ProjectileShotConfig_type_name = "ProjectileShotConfig";
		constexpr const static rivet::rivet_type_id ProjectileShotConfig_type_id = 0x1b3f8e19;
		constexpr const static std::string_view ProjectileActor_type_name = "ProjectileActor";
		constexpr const static rivet::rivet_type_id ProjectileActor_type_id = 0x1c826ff4;
		constexpr const static std::string_view MinInterval_type_name = "MinInterval";
		constexpr const static rivet::rivet_type_id MinInterval_type_id = 0x41da1c70;
		constexpr const static std::string_view MaxInterval_type_name = "MaxInterval";
		constexpr const static rivet::rivet_type_id MaxInterval_type_id = 0x8dd7677f;
		constexpr const static std::string_view MinDuration_type_name = "MinDuration";
		constexpr const static rivet::rivet_type_id MinDuration_type_id = 0xde43737b;
		constexpr const static std::string_view MaxDuration_type_name = "MaxDuration";
		constexpr const static rivet::rivet_type_id MaxDuration_type_id = 0x124e0874; 

		explicit BotComboMoveFinaleBarrage() = default;
		explicit BotComboMoveFinaleBarrage([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::string_view PortalActorAsset {};
		uint64_t PortalSpawnArea {};
		std::string_view ProjectileShotConfig {};
		std::vector<std::string_view> ProjectileActor {};
		float MinInterval {};
		float MaxInterval {};
		float MinDuration {};
		float MaxDuration {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<BotComboMoveFinaleBarrage>;
	};
} // namespace rivet::ddl::generated

// clang-format on
