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
	struct RIVET_DDL_SHARED ShootingTauntData : rivet::structures::rivet_ddl_base {
		constexpr const static std::string_view type_name = "ShootingTauntData";
		constexpr const static rivet::rivet_type_id type_id = 0x50e2e8ee;

		constexpr const static std::string_view MinRangedAttacksMissedForTaunt_type_name = "MinRangedAttacksMissedForTaunt";
		constexpr const static rivet::rivet_type_id MinRangedAttacksMissedForTaunt_type_id = 0x590d8a16;
		constexpr const static std::string_view MaxRangedAttacksMissedForTaunt_type_name = "MaxRangedAttacksMissedForTaunt";
		constexpr const static rivet::rivet_type_id MaxRangedAttacksMissedForTaunt_type_id = 0xe932902a;
		constexpr const static std::string_view TauntChance_type_name = "TauntChance";
		constexpr const static rivet::rivet_type_id TauntChance_type_id = 0x63a2f192;
		constexpr const static std::string_view IdleTauntChance_type_name = "IdleTauntChance";
		constexpr const static rivet::rivet_type_id IdleTauntChance_type_id = 0x52d8671b;
		constexpr const static std::string_view AimFidgetChance_type_name = "AimFidgetChance";
		constexpr const static rivet::rivet_type_id AimFidgetChance_type_id = 0x4219b0b4;
		constexpr const static std::string_view AimAdjustBias_type_name = "AimAdjustBias";
		constexpr const static rivet::rivet_type_id AimAdjustBias_type_id = 0x4af6ba; 

		explicit ShootingTauntData() = default;
		explicit ShootingTauntData([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		int32_t MinRangedAttacksMissedForTaunt {};
		int32_t MaxRangedAttacksMissedForTaunt {};
		float TauntChance {};
		float IdleTauntChance {};
		float AimFidgetChance {};
		float AimAdjustBias {}; 

		auto
		get_type_id() const noexcept -> rivet::rivet_type_id override;

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<ShootingTauntData>;
	};
} // namespace rivet::ddl::generated

// clang-format on