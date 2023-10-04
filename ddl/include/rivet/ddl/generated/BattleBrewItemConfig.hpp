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

#include <rivet/ddl/generated/GameItemConfig.hpp> 

namespace rivet::ddl::generated {
	struct BattleBrewEffectData; 

	struct RIVET_DDL_SHARED BattleBrewItemConfig : GameItemConfig {
		constexpr const static std::string_view type_name = "BattleBrewItemConfig";
		constexpr const static rivet::rivet_type_id type_id = 0x89b44ed3;

		constexpr const static std::string_view Brew_type_name = "Brew";
		constexpr const static rivet::rivet_type_id Brew_type_id = 0x165e767; 

		explicit BattleBrewItemConfig() = default;
		explicit BattleBrewItemConfig([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::shared_ptr<rivet::ddl::generated::BattleBrewEffectData> Brew {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<BattleBrewItemConfig>;
	};
} // namespace rivet::ddl::generated

// clang-format on
