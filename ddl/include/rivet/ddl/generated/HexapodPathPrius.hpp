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
	struct UVTiling; 

	struct RIVET_DDL_SHARED HexapodPathPrius : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "HexapodPathPrius";
		constexpr static rivet::rivet_type_id type_id = 0x1495d287;

		constexpr static std::string_view PathRadius_type_name = "PathRadius";
		constexpr static rivet::rivet_type_id PathRadius_type_id = 0x98bc7117;
		constexpr static std::string_view PointSpacing_type_name = "PointSpacing";
		constexpr static rivet::rivet_type_id PointSpacing_type_id = 0x35044d85;
		constexpr static std::string_view PathMaterial_type_name = "PathMaterial";
		constexpr static rivet::rivet_type_id PathMaterial_type_id = 0xf5b8f817;
		constexpr static std::string_view UV0Tiling_type_name = "UV0Tiling";
		constexpr static rivet::rivet_type_id UV0Tiling_type_id = 0xf8890730;
		constexpr static std::string_view UV1Tiling_type_name = "UV1Tiling";
		constexpr static rivet::rivet_type_id UV1Tiling_type_id = 0x5efe0c84;
		constexpr static std::string_view Roundness_type_name = "Roundness";
		constexpr static rivet::rivet_type_id Roundness_type_id = 0xb8d1185; 

		explicit HexapodPathPrius() = default;
		explicit HexapodPathPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		float PathRadius {};
		float PointSpacing {};
		std::string_view PathMaterial {};
		std::shared_ptr<rivet::ddl::generated::UVTiling> UV0Tiling {};
		std::shared_ptr<rivet::ddl::generated::UVTiling> UV1Tiling {};
		uint8_t Roundness {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<HexapodPathPrius>;
	};
} // namespace rivet::ddl::generated

// clang-format on