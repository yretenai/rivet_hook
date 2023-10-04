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
	struct CrateMaterialOverride; 

	struct RIVET_DDL_SHARED RegionCrateVariants : rivet::structures::rivet_ddl_base {
		constexpr const static std::string_view type_name = "RegionCrateVariants";
		constexpr const static rivet::rivet_type_id type_id = 0x3b7568a2;

		constexpr const static std::string_view ContainerRegions_type_name = "ContainerRegions";
		constexpr const static rivet::rivet_type_id ContainerRegions_type_id = 0xc9f0b22b;
		constexpr const static std::string_view BoltCrateOverride_type_name = "BoltCrateOverride";
		constexpr const static rivet::rivet_type_id BoltCrateOverride_type_id = 0xcadfd873;
		constexpr const static std::string_view AmmoCrateOverride_type_name = "AmmoCrateOverride";
		constexpr const static rivet::rivet_type_id AmmoCrateOverride_type_id = 0x8e947afd;
		constexpr const static std::string_view HealthCrateOverride_type_name = "HealthCrateOverride";
		constexpr const static rivet::rivet_type_id HealthCrateOverride_type_id = 0xdb8005c1; 

		explicit RegionCrateVariants() = default;
		explicit RegionCrateVariants([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::vector<std::string_view> ContainerRegions {};
		std::shared_ptr<rivet::ddl::generated::CrateMaterialOverride> BoltCrateOverride {};
		std::shared_ptr<rivet::ddl::generated::CrateMaterialOverride> AmmoCrateOverride {};
		std::shared_ptr<rivet::ddl::generated::CrateMaterialOverride> HealthCrateOverride {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<RegionCrateVariants>;
	};
} // namespace rivet::ddl::generated

// clang-format on
