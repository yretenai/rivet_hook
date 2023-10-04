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

#include <rivet/ddl/generated/enums/KnockbackLevels.hpp> 

namespace rivet::ddl::generated {
	struct TunnelerJumpParams; 

	struct RIVET_DDL_SHARED TunnelerBombPrius : rivet::structures::rivet_ddl_base {
		constexpr const static std::string_view type_name = "TunnelerBombPrius";
		constexpr const static rivet::rivet_type_id type_id = 0x446e1348;

		constexpr const static std::string_view Owner_type_name = "Owner";
		constexpr const static rivet::rivet_type_id Owner_type_id = 0xd6332abd;
		constexpr const static std::string_view TargetHandle_type_name = "TargetHandle";
		constexpr const static rivet::rivet_type_id TargetHandle_type_id = 0x63316aff;
		constexpr const static std::string_view WeaponId_type_name = "WeaponId";
		constexpr const static rivet::rivet_type_id WeaponId_type_id = 0x902af590;
		constexpr const static std::string_view Damage_type_name = "Damage";
		constexpr const static rivet::rivet_type_id Damage_type_id = 0x2fb01a0b;
		constexpr const static std::string_view Knockback_type_name = "Knockback";
		constexpr const static rivet::rivet_type_id Knockback_type_id = 0x2e553fdd;
		constexpr const static std::string_view KnockbackAmount_type_name = "KnockbackAmount";
		constexpr const static rivet::rivet_type_id KnockbackAmount_type_id = 0x7b1e600b;
		constexpr const static std::string_view TriggerRadius_type_name = "TriggerRadius";
		constexpr const static rivet::rivet_type_id TriggerRadius_type_id = 0xcc7f53a5;
		constexpr const static std::string_view RiseUpDuration_type_name = "RiseUpDuration";
		constexpr const static rivet::rivet_type_id RiseUpDuration_type_id = 0xc646f565;
		constexpr const static std::string_view RiseUpDistance_type_name = "RiseUpDistance";
		constexpr const static rivet::rivet_type_id RiseUpDistance_type_id = 0x5c8bef24;
		constexpr const static std::string_view ExplodeDelay_type_name = "ExplodeDelay";
		constexpr const static rivet::rivet_type_id ExplodeDelay_type_id = 0x9b27bde3;
		constexpr const static std::string_view ExplodeRadius_type_name = "ExplodeRadius";
		constexpr const static rivet::rivet_type_id ExplodeRadius_type_id = 0xb789c5e4;
		constexpr const static std::string_view ExplodeAngle_type_name = "ExplodeAngle";
		constexpr const static rivet::rivet_type_id ExplodeAngle_type_id = 0x293c7871;
		constexpr const static std::string_view ExplodeUseLOS_type_name = "ExplodeUseLOS";
		constexpr const static rivet::rivet_type_id ExplodeUseLOS_type_id = 0x28512c61;
		constexpr const static std::string_view AdditionalExplosion_type_name = "AdditionalExplosion";
		constexpr const static rivet::rivet_type_id AdditionalExplosion_type_id = 0xf00ae55e;
		constexpr const static std::string_view JumpParams_type_name = "JumpParams";
		constexpr const static rivet::rivet_type_id JumpParams_type_id = 0xda6beb4b; 

		explicit TunnelerBombPrius() = default;
		explicit TunnelerBombPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		uint32_t Owner {};
		uint32_t TargetHandle {};
		uint32_t WeaponId {};
		float Damage {};
		rivet::ddl::generated::KnockbackLevels Knockback {};
		float KnockbackAmount {};
		float TriggerRadius {};
		float RiseUpDuration {};
		float RiseUpDistance {};
		float ExplodeDelay {};
		float ExplodeRadius {};
		float ExplodeAngle {};
		bool ExplodeUseLOS {};
		bool AdditionalExplosion {};
		std::shared_ptr<rivet::ddl::generated::TunnelerJumpParams> JumpParams {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<TunnelerBombPrius>;
	};
} // namespace rivet::ddl::generated

// clang-format on
