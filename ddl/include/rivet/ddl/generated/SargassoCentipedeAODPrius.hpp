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
#include <rivet/ddl/generated/enums/x8d7e44cf.hpp> 

namespace rivet::ddl::generated {
	struct RIVET_DDL_SHARED SargassoCentipedeAODPrius : rivet::structures::rivet_ddl_base {
		constexpr const static std::string_view type_name = "SargassoCentipedeAODPrius";
		constexpr const static rivet::rivet_type_id type_id = 0xf28dabaf;

		constexpr const static std::string_view Radius_type_name = "Radius";
		constexpr const static rivet::rivet_type_id Radius_type_id = 0x504203d;
		constexpr const static std::string_view Height_type_name = "Height";
		constexpr const static rivet::rivet_type_id Height_type_id = 0xcb35ab68;
		constexpr const static std::string_view OnSpawnDamage_type_name = "OnSpawnDamage";
		constexpr const static rivet::rivet_type_id OnSpawnDamage_type_id = 0x5e5ae0f8;
		constexpr const static std::string_view OnSpawnKnockback_type_name = "OnSpawnKnockback";
		constexpr const static rivet::rivet_type_id OnSpawnKnockback_type_id = 0x375bf074;
		constexpr const static std::string_view Damage_type_name = "Damage";
		constexpr const static rivet::rivet_type_id Damage_type_id = 0x2fb01a0b;
		constexpr const static std::string_view Knockback_type_name = "Knockback";
		constexpr const static rivet::rivet_type_id Knockback_type_id = 0x2e553fdd;
		constexpr const static std::string_view IgnoreDuration_type_name = "IgnoreDuration";
		constexpr const static rivet::rivet_type_id IgnoreDuration_type_id = 0x2ee45555;
		constexpr const static std::string_view LifeTime_type_name = "LifeTime";
		constexpr const static rivet::rivet_type_id LifeTime_type_id = 0x67d422c6;
		constexpr const static std::string_view DamageType_type_name = "DamageType";
		constexpr const static rivet::rivet_type_id DamageType_type_id = 0x840c154d;
		constexpr const static std::string_view DamageString_type_name = "DamageString";
		constexpr const static rivet::rivet_type_id DamageString_type_id = 0x4624269b;
		constexpr const static std::string_view AODCVCActor_type_name = "AODCVCActor";
		constexpr const static rivet::rivet_type_id AODCVCActor_type_id = 0xb6834848; 

		explicit SargassoCentipedeAODPrius() = default;
		explicit SargassoCentipedeAODPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		float Radius {};
		float Height {};
		float OnSpawnDamage {};
		rivet::ddl::generated::KnockbackLevels OnSpawnKnockback {};
		float Damage {};
		rivet::ddl::generated::KnockbackLevels Knockback {};
		float IgnoreDuration {};
		float LifeTime {};
		rivet::ddl::generated::x8d7e44cf DamageType {};
		std::string_view DamageString {};
		std::string_view AODCVCActor {}; 

		auto
		get_type_id() const noexcept -> rivet::rivet_type_id override;

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<SargassoCentipedeAODPrius>;
	};
} // namespace rivet::ddl::generated

// clang-format on