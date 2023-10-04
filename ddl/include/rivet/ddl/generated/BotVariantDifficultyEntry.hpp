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

#include <rivet/ddl/generated/enums/xc3e5efea.hpp> 

namespace rivet::ddl::generated {
	struct DifficultyModDef; 

	struct RIVET_DDL_SHARED BotVariantDifficultyEntry : rivet::structures::rivet_ddl_base {
		constexpr const static std::string_view type_name = "BotVariantDifficultyEntry";
		constexpr const static rivet::rivet_type_id type_id = 0x1763ff65;

		constexpr const static std::string_view Variant_type_name = "Variant";
		constexpr const static rivet::rivet_type_id Variant_type_id = 0xf0a9dc95;
		constexpr const static std::string_view DifficultyModDefs_type_name = "DifficultyModDefs";
		constexpr const static rivet::rivet_type_id DifficultyModDefs_type_id = 0xec9d4cb3; 

		explicit BotVariantDifficultyEntry() = default;
		explicit BotVariantDifficultyEntry([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		rivet::ddl::generated::xc3e5efea Variant {};
		std::vector<std::shared_ptr<rivet::ddl::generated::DifficultyModDef>> DifficultyModDefs {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<BotVariantDifficultyEntry>;
	};
} // namespace rivet::ddl::generated

// clang-format on