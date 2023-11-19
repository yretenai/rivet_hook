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
	struct AssetMigrationResult; 

	struct RIVET_DDL_SHARED AssetMigrationResults : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "AssetMigrationResults";
		constexpr static rivet::rivet_type_id type_id = 0xf05f2469;

		constexpr static std::string_view Results_type_name = "Results";
		constexpr static rivet::rivet_type_id Results_type_id = 0x9e49872c; 

		explicit AssetMigrationResults() = default;
		explicit AssetMigrationResults([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::vector<std::shared_ptr<rivet::ddl::generated::AssetMigrationResult>> Results {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<AssetMigrationResults>;
	};
} // namespace rivet::ddl::generated

// clang-format on