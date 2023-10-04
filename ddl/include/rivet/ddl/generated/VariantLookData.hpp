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
	struct RIVET_DDL_SHARED VariantLookData : rivet::structures::rivet_ddl_base {
		constexpr const static std::string_view type_name = "VariantLookData";
		constexpr const static rivet::rivet_type_id type_id = 0x452d50e3;

		constexpr const static std::string_view Chance_type_name = "Chance";
		constexpr const static rivet::rivet_type_id Chance_type_id = 0x1a437543;
		constexpr const static std::string_view LookGroup_type_name = "LookGroup";
		constexpr const static rivet::rivet_type_id LookGroup_type_id = 0xa286144c;
		constexpr const static std::string_view PaletteIndexMin_type_name = "PaletteIndexMin";
		constexpr const static rivet::rivet_type_id PaletteIndexMin_type_id = 0xa7b38e02;
		constexpr const static std::string_view PaletteIndexMax_type_name = "PaletteIndexMax";
		constexpr const static rivet::rivet_type_id PaletteIndexMax_type_id = 0x9bbeb15b;
		constexpr const static std::string_view HSLRangeMin_type_name = "HSLRangeMin";
		constexpr const static rivet::rivet_type_id HSLRangeMin_type_id = 0x2f68a99c;
		constexpr const static std::string_view HSLRangeMax_type_name = "HSLRangeMax";
		constexpr const static rivet::rivet_type_id HSLRangeMax_type_id = 0x136596c5; 

		explicit VariantLookData() = default;
		explicit VariantLookData([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		float Chance {};
		std::string_view LookGroup {};
		uint32_t PaletteIndexMin {};
		uint32_t PaletteIndexMax {};
		float HSLRangeMin {};
		float HSLRangeMax {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<VariantLookData>;
	};
} // namespace rivet::ddl::generated

// clang-format on