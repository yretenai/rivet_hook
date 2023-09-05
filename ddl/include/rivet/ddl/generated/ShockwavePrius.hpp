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
	struct DDLVector3; 

	struct RIVET_DDL_SHARED ShockwavePrius : rivet::structures::rivet_ddl_base {
		constexpr const static std::string_view type_name = "ShockwavePrius";
		constexpr const static rivet::rivet_type_id type_id = 0x818f648e;

		constexpr const static std::string_view Damage_type_name = "Damage";
		constexpr const static rivet::rivet_type_id Damage_type_id = 0x2fb01a0b;
		constexpr const static std::string_view StartRadius_type_name = "StartRadius";
		constexpr const static rivet::rivet_type_id StartRadius_type_id = 0x4e61ccda;
		constexpr const static std::string_view Radius_type_name = "Radius";
		constexpr const static rivet::rivet_type_id Radius_type_id = 0x504203d;
		constexpr const static std::string_view Height_type_name = "Height";
		constexpr const static rivet::rivet_type_id Height_type_id = 0xcb35ab68;
		constexpr const static std::string_view Thickness_type_name = "Thickness";
		constexpr const static rivet::rivet_type_id Thickness_type_id = 0xece213a3;
		constexpr const static std::string_view GrowDuration_type_name = "GrowDuration";
		constexpr const static rivet::rivet_type_id GrowDuration_type_id = 0xecfa5c44;
		constexpr const static std::string_view Duration_type_name = "Duration";
		constexpr const static rivet::rivet_type_id Duration_type_id = 0x7c5e3db0;
		constexpr const static std::string_view HitPauseTime_type_name = "HitPauseTime";
		constexpr const static rivet::rivet_type_id HitPauseTime_type_id = 0xa0fb18ac;
		constexpr const static std::string_view DamageName_type_name = "DamageName";
		constexpr const static rivet::rivet_type_id DamageName_type_id = 0x56f13c62;
		constexpr const static std::string_view DamageIsPercent_type_name = "DamageIsPercent";
		constexpr const static rivet::rivet_type_id DamageIsPercent_type_id = 0xda280e89;
		constexpr const static std::string_view AllowFriendlyDamage_type_name = "AllowFriendlyDamage";
		constexpr const static rivet::rivet_type_id AllowFriendlyDamage_type_id = 0xa63ab0a7;
		constexpr const static std::string_view Center_type_name = "Center";
		constexpr const static rivet::rivet_type_id Center_type_id = 0x7e88a543;
		constexpr const static std::string_view HitNormal_type_name = "HitNormal";
		constexpr const static rivet::rivet_type_id HitNormal_type_id = 0xc3272bc7;
		constexpr const static std::string_view ParentActorHandle_type_name = "ParentActorHandle";
		constexpr const static rivet::rivet_type_id ParentActorHandle_type_id = 0xd323fcde;
		constexpr const static std::string_view DamageOwnerHandle_type_name = "DamageOwnerHandle";
		constexpr const static rivet::rivet_type_id DamageOwnerHandle_type_id = 0x7a09e46d; 

		explicit ShockwavePrius() = default;
		explicit ShockwavePrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		float Damage {};
		float StartRadius {};
		float Radius {};
		float Height {};
		float Thickness {};
		float GrowDuration {};
		float Duration {};
		float HitPauseTime {};
		std::string_view DamageName {};
		bool DamageIsPercent {};
		bool AllowFriendlyDamage {};
		std::shared_ptr<rivet::ddl::generated::DDLVector3> Center {};
		std::shared_ptr<rivet::ddl::generated::DDLVector3> HitNormal {};
		uint32_t ParentActorHandle {};
		uint32_t DamageOwnerHandle {}; 

		auto
		get_type_id() const noexcept -> rivet::rivet_type_id override;

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<ShockwavePrius>;
	};
} // namespace rivet::ddl::generated

// clang-format on