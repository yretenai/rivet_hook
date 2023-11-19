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

	struct RIVET_DDL_SHARED SkinManagerColorPrius : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "SkinManagerColorPrius";
		constexpr static rivet::rivet_type_id type_id = 0xb1b8c2db;

		constexpr static std::string_view ColorConstantNameHash_type_name = "ColorConstantNameHash";
		constexpr static rivet::rivet_type_id ColorConstantNameHash_type_id = 0x985f8c67;
		constexpr static std::string_view ColorValue_type_name = "ColorValue";
		constexpr static rivet::rivet_type_id ColorValue_type_id = 0x27726256;
		constexpr static std::string_view ColorConfigAssetId_type_name = "ColorConfigAssetId";
		constexpr static rivet::rivet_type_id ColorConfigAssetId_type_id = 0xb741ea15;
		constexpr static std::string_view ColorConfigNameHash_type_name = "ColorConfigNameHash";
		constexpr static rivet::rivet_type_id ColorConfigNameHash_type_id = 0xb79e641c; 

		explicit SkinManagerColorPrius() = default;
		explicit SkinManagerColorPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		uint32_t ColorConstantNameHash {};
		std::shared_ptr<rivet::ddl::generated::DDLVector3> ColorValue {};
		uint64_t ColorConfigAssetId {};
		uint32_t ColorConfigNameHash {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<SkinManagerColorPrius>;
	};
} // namespace rivet::ddl::generated

// clang-format on