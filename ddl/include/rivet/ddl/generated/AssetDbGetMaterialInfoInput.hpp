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
	struct RIVET_DDL_SHARED AssetDbGetMaterialInfoInput : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "AssetDbGetMaterialInfoInput";
		constexpr static rivet::rivet_type_id type_id = 0x1770c2a0;

		constexpr static std::string_view Id_type_name = "Id";
		constexpr static rivet::rivet_type_id Id_type_id = 0x8a514a8d;
		constexpr static std::string_view MaterialPath_type_name = "MaterialPath";
		constexpr static rivet::rivet_type_id MaterialPath_type_id = 0x93b919bd;
		constexpr static std::string_view MaterialTemplatePath_type_name = "MaterialTemplatePath";
		constexpr static rivet::rivet_type_id MaterialTemplatePath_type_id = 0x8a6cb9c2; 

		explicit AssetDbGetMaterialInfoInput() = default;
		explicit AssetDbGetMaterialInfoInput([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		uint32_t Id {};
		std::string_view MaterialPath {};
		std::string_view MaterialTemplatePath {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<AssetDbGetMaterialInfoInput>;
	};
} // namespace rivet::ddl::generated

// clang-format on