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
	struct RIVET_DDL_SHARED ProximityDamageablePrius : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "ProximityDamageablePrius";
		constexpr static rivet::rivet_type_id type_id = 0x966b7b;

		constexpr static std::string_view DamageOnce_type_name = "DamageOnce";
		constexpr static rivet::rivet_type_id DamageOnce_type_id = 0x7b9231b4;
		constexpr static std::string_view AllowBotDamage_type_name = "AllowBotDamage";
		constexpr static rivet::rivet_type_id AllowBotDamage_type_id = 0xbab7c558;
		constexpr static std::string_view AllowHeroDamage_type_name = "AllowHeroDamage";
		constexpr static rivet::rivet_type_id AllowHeroDamage_type_id = 0x3ff75d6e;
		constexpr static std::string_view IsEnabled_type_name = "IsEnabled";
		constexpr static rivet::rivet_type_id IsEnabled_type_id = 0xb4c37748; 

		explicit ProximityDamageablePrius() = default;
		explicit ProximityDamageablePrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		bool DamageOnce {};
		bool AllowBotDamage {};
		bool AllowHeroDamage {};
		bool IsEnabled {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<ProximityDamageablePrius>;
	};
} // namespace rivet::ddl::generated

// clang-format on