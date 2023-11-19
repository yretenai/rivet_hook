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

#include <rivet/ddl/generated/GameBotShooterPrius.hpp> 

namespace rivet::ddl::generated {
	struct GameBotWeaponType; 

	struct RIVET_DDL_SHARED GameBotShooterTestDummyPrius : GameBotShooterPrius {
		constexpr static std::string_view type_name = "GameBotShooterTestDummyPrius";
		constexpr static rivet::rivet_type_id type_id = 0x4bee735e;

		constexpr static std::string_view WeaponType_type_name = "WeaponType";
		constexpr static rivet::rivet_type_id WeaponType_type_id = 0x18fc4fe3; 

		explicit GameBotShooterTestDummyPrius() = default;
		explicit GameBotShooterTestDummyPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::shared_ptr<rivet::ddl::generated::GameBotWeaponType> WeaponType {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<GameBotShooterTestDummyPrius>;
	};
} // namespace rivet::ddl::generated

// clang-format on