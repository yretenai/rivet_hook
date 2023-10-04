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
	struct RIVET_DDL_SHARED BotComboMoveFinaleWeaponMultiAttack : BotComboMoveBase {
		constexpr const static std::string_view type_name = "BotComboMoveFinaleWeaponMultiAttack";
		constexpr const static rivet::rivet_type_id type_id = 0x5ba0363;

		constexpr const static std::string_view AttackVolumeHead_type_name = "AttackVolumeHead";
		constexpr const static rivet::rivet_type_id AttackVolumeHead_type_id = 0x77dc1348;
		constexpr const static std::string_view AttackVolumeArm_type_name = "AttackVolumeArm";
		constexpr const static rivet::rivet_type_id AttackVolumeArm_type_id = 0xd8c72d57; 

		explicit BotComboMoveFinaleWeaponMultiAttack() = default;
		explicit BotComboMoveFinaleWeaponMultiAttack([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		uint64_t AttackVolumeHead {};
		uint64_t AttackVolumeArm {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<BotComboMoveFinaleWeaponMultiAttack>;
	};
} // namespace rivet::ddl::generated

// clang-format on
