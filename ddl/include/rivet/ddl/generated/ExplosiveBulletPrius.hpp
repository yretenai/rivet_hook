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

#include <rivet/ddl/generated/SimpleShotPrius.hpp>
#include <rivet/ddl/generated/enums/x8d7e44cf.hpp>
#include <rivet/ddl/generated/bitsets/x65d7dac2.hpp>
#include <rivet/ddl/generated/enums/DamageLOSTypes.hpp> 

namespace rivet::ddl::generated {
	struct DamageModifierExplosionPrius; 

	struct RIVET_DDL_SHARED ExplosiveBulletPrius : SimpleShotPrius {
		constexpr const static std::string_view type_name = "ExplosiveBulletPrius";
		constexpr const static rivet::rivet_type_id type_id = 0x95d7972b;

		constexpr const static std::string_view ExplosionDamageType_type_name = "ExplosionDamageType";
		constexpr const static rivet::rivet_type_id ExplosionDamageType_type_id = 0x9eca2505;
		constexpr const static std::string_view DamageFlags_type_name = "DamageFlags";
		constexpr const static rivet::rivet_type_id DamageFlags_type_id = 0x93d0d934;
		constexpr const static std::string_view ExplosionData_type_name = "ExplosionData";
		constexpr const static rivet::rivet_type_id ExplosionData_type_id = 0x7860aa8f;
		constexpr const static std::string_view DamageLOSType_type_name = "DamageLOSType";
		constexpr const static rivet::rivet_type_id DamageLOSType_type_id = 0x4762f7df; 

		explicit ExplosiveBulletPrius() = default;
		explicit ExplosiveBulletPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		rivet::ddl::generated::x8d7e44cf ExplosionDamageType {};
		rivet::ddl::generated::x65d7dac2 DamageFlags {};
		std::shared_ptr<rivet::ddl::generated::DamageModifierExplosionPrius> ExplosionData {};
		rivet::ddl::generated::DamageLOSTypes DamageLOSType {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<ExplosiveBulletPrius>;
	};
} // namespace rivet::ddl::generated

// clang-format on