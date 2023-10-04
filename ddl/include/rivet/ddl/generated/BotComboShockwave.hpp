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

#include <rivet/ddl/generated/enums/x8d7e44cf.hpp>
#include <rivet/ddl/generated/BotComboMoveMelee.hpp>
#include <rivet/ddl/generated/enums/KnockbackLevels.hpp> 

namespace rivet::ddl::generated {
	struct DDLVector3; 

	struct RIVET_DDL_SHARED BotComboShockwave : BotComboMoveMelee {
		constexpr const static std::string_view type_name = "BotComboShockwave";
		constexpr const static rivet::rivet_type_id type_id = 0x388535ef;

		constexpr const static std::string_view SourceOffset_type_name = "SourceOffset";
		constexpr const static rivet::rivet_type_id SourceOffset_type_id = 0x8e18c0c5;
		constexpr const static std::string_view Radius_type_name = "Radius";
		constexpr const static rivet::rivet_type_id Radius_type_id = 0x504203d;
		constexpr const static std::string_view Thickness_type_name = "Thickness";
		constexpr const static rivet::rivet_type_id Thickness_type_id = 0xece213a3;
		constexpr const static std::string_view Height_type_name = "Height";
		constexpr const static rivet::rivet_type_id Height_type_id = 0xcb35ab68;
		constexpr const static std::string_view Duration_type_name = "Duration";
		constexpr const static rivet::rivet_type_id Duration_type_id = 0x7c5e3db0;
		constexpr const static std::string_view GrowDuration_type_name = "GrowDuration";
		constexpr const static rivet::rivet_type_id GrowDuration_type_id = 0xecfa5c44;
		constexpr const static std::string_view Damage_type_name = "Damage";
		constexpr const static rivet::rivet_type_id Damage_type_id = 0x2fb01a0b;
		constexpr const static std::string_view DamageType_type_name = "DamageType";
		constexpr const static rivet::rivet_type_id DamageType_type_id = 0x840c154d;
		constexpr const static std::string_view Knockback_type_name = "Knockback";
		constexpr const static rivet::rivet_type_id Knockback_type_id = 0x2e553fdd;
		constexpr const static std::string_view DamageFriends_type_name = "DamageFriends";
		constexpr const static rivet::rivet_type_id DamageFriends_type_id = 0x3be354f0;
		constexpr const static std::string_view StatusAmount_type_name = "StatusAmount";
		constexpr const static rivet::rivet_type_id StatusAmount_type_id = 0x37e1f098;
		constexpr const static std::string_view KnockbackForce_type_name = "KnockbackForce";
		constexpr const static rivet::rivet_type_id KnockbackForce_type_id = 0x28d6ed59; 

		explicit BotComboShockwave() = default;
		explicit BotComboShockwave([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::shared_ptr<rivet::ddl::generated::DDLVector3> SourceOffset {};
		float Radius {};
		float Thickness {};
		float Height {};
		float Duration {};
		float GrowDuration {};
		float Damage {};
		rivet::ddl::generated::x8d7e44cf DamageType {};
		rivet::ddl::generated::KnockbackLevels Knockback {};
		uint8_t DamageFriends {};
		float StatusAmount {};
		float KnockbackForce {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<BotComboShockwave>;
	};
} // namespace rivet::ddl::generated

// clang-format on