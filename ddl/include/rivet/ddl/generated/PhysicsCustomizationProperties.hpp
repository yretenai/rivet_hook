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
	struct PhysicsMotionPropertiesParam;
	struct PhysicsMaterialPropertiesParam; 

	struct RIVET_DDL_SHARED PhysicsCustomizationProperties : rivet::structures::rivet_ddl_base {
		constexpr const static std::string_view type_name = "PhysicsCustomizationProperties";
		constexpr const static rivet::rivet_type_id type_id = 0x98c39ad;

		constexpr const static std::string_view WantsOverrideMotionProperties_type_name = "WantsOverrideMotionProperties";
		constexpr const static rivet::rivet_type_id WantsOverrideMotionProperties_type_id = 0xacfb0ed2;
		constexpr const static std::string_view MotionPropertiesOverrideValues_type_name = "MotionPropertiesOverrideValues";
		constexpr const static rivet::rivet_type_id MotionPropertiesOverrideValues_type_id = 0xe108f42d;
		constexpr const static std::string_view WantsOverrideMaterial_type_name = "WantsOverrideMaterial";
		constexpr const static rivet::rivet_type_id WantsOverrideMaterial_type_id = 0x426da14a;
		constexpr const static std::string_view MaterialPropertiesOverrideValues_type_name = "MaterialPropertiesOverrideValues";
		constexpr const static rivet::rivet_type_id MaterialPropertiesOverrideValues_type_id = 0x955bcd85; 

		explicit PhysicsCustomizationProperties() = default;
		explicit PhysicsCustomizationProperties([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		bool WantsOverrideMotionProperties {};
		std::shared_ptr<rivet::ddl::generated::PhysicsMotionPropertiesParam> MotionPropertiesOverrideValues {};
		bool WantsOverrideMaterial {};
		std::shared_ptr<rivet::ddl::generated::PhysicsMaterialPropertiesParam> MaterialPropertiesOverrideValues {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<PhysicsCustomizationProperties>;
	};
} // namespace rivet::ddl::generated

// clang-format on
