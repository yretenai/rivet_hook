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

#include <rivet/ddl/generated/enums/x7ecfc969.hpp> 

namespace rivet::ddl::generated {
	struct AssetReferenceDef; 

	struct RIVET_DDL_SHARED SkinItemMaterialOverrideListEntry : rivet::structures::rivet_ddl_base {
		constexpr const static std::string_view type_name = "SkinItemMaterialOverrideListEntry";
		constexpr const static rivet::rivet_type_id type_id = 0x4607e1e6;

		constexpr const static std::string_view Available_type_name = "Available";
		constexpr const static rivet::rivet_type_id Available_type_id = 0x27723b89;
		constexpr const static std::string_view OverrideMaterial_type_name = "OverrideMaterial";
		constexpr const static rivet::rivet_type_id OverrideMaterial_type_id = 0x21926360;
		constexpr const static std::string_view SecondaryOverrideMaterial_type_name = "SecondaryOverrideMaterial";
		constexpr const static rivet::rivet_type_id SecondaryOverrideMaterial_type_id = 0x647bc0f1; 

		explicit SkinItemMaterialOverrideListEntry() = default;
		explicit SkinItemMaterialOverrideListEntry([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		rivet::ddl::generated::x7ecfc969 Available {};
		std::shared_ptr<rivet::ddl::generated::AssetReferenceDef> OverrideMaterial {};
		std::shared_ptr<rivet::ddl::generated::AssetReferenceDef> SecondaryOverrideMaterial {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<SkinItemMaterialOverrideListEntry>;
	};
} // namespace rivet::ddl::generated

// clang-format on
