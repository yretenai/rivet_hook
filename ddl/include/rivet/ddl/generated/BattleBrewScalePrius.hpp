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

#include <rivet/ddl/generated/BattleBrewBasePrius.hpp>
#include <rivet/ddl/generated/enums/KnockbackLevels.hpp> 

namespace rivet::ddl::generated {
	struct DamageModifierIncomingBattleBrewScalePrius;
	struct DamageModifierOutgoingBattleBrewScalePrius;
	struct TrampolinePrius; 

	struct RIVET_DDL_SHARED BattleBrewScalePrius : BattleBrewBasePrius {
		constexpr const static std::string_view type_name = "BattleBrewScalePrius";
		constexpr const static rivet::rivet_type_id type_id = 0x4c1e9a42;

		constexpr const static std::string_view ScaleReactAnimDriver_type_name = "ScaleReactAnimDriver";
		constexpr const static rivet::rivet_type_id ScaleReactAnimDriver_type_id = 0xa6a58654;
		constexpr const static std::string_view ShrunkJumpedOnKnockback_type_name = "ShrunkJumpedOnKnockback";
		constexpr const static rivet::rivet_type_id ShrunkJumpedOnKnockback_type_id = 0xed968220;
		constexpr const static std::string_view IncomingDamageModifier_type_name = "IncomingDamageModifier";
		constexpr const static rivet::rivet_type_id IncomingDamageModifier_type_id = 0xfd58369;
		constexpr const static std::string_view OutgoingDamageModifier_type_name = "OutgoingDamageModifier";
		constexpr const static rivet::rivet_type_id OutgoingDamageModifier_type_id = 0x65db3b20;
		constexpr const static std::string_view Trampoline_type_name = "Trampoline";
		constexpr const static rivet::rivet_type_id Trampoline_type_id = 0xf7bf349; 

		explicit BattleBrewScalePrius() = default;
		explicit BattleBrewScalePrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::string_view ScaleReactAnimDriver {};
		rivet::ddl::generated::KnockbackLevels ShrunkJumpedOnKnockback {};
		std::shared_ptr<rivet::ddl::generated::DamageModifierIncomingBattleBrewScalePrius> IncomingDamageModifier {};
		std::shared_ptr<rivet::ddl::generated::DamageModifierOutgoingBattleBrewScalePrius> OutgoingDamageModifier {};
		std::shared_ptr<rivet::ddl::generated::TrampolinePrius> Trampoline {}; 

		auto
		get_type_id() const noexcept -> rivet::rivet_type_id override;

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<BattleBrewScalePrius>;
	};
} // namespace rivet::ddl::generated

// clang-format on