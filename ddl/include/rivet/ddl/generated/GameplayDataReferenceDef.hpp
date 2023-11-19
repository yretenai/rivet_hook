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
	struct RIVET_DDL_SHARED GameplayDataReferenceDef : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "GameplayDataReferenceDef";
		constexpr static rivet::rivet_type_id type_id = 0x37fad3c5;

		constexpr static std::string_view AssetPath_type_name = "AssetPath";
		constexpr static rivet::rivet_type_id AssetPath_type_id = 0xefa614b;
		constexpr static std::string_view DataType_type_name = "DataType";
		constexpr static rivet::rivet_type_id DataType_type_id = 0xdf0abd28; 

		explicit GameplayDataReferenceDef() = default;
		explicit GameplayDataReferenceDef([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::string_view AssetPath {};
		std::string_view DataType {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<GameplayDataReferenceDef>;
	};
} // namespace rivet::ddl::generated

// clang-format on