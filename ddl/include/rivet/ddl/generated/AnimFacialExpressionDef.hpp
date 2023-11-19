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
	struct AnimPerformanceKeyDef; 

	struct RIVET_DDL_SHARED AnimFacialExpressionDef : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "AnimFacialExpressionDef";
		constexpr static rivet::rivet_type_id type_id = 0x18ab434a;

		constexpr static std::string_view Id_type_name = "Id";
		constexpr static rivet::rivet_type_id Id_type_id = 0x8a514a8d;
		constexpr static std::string_view Name_type_name = "Name";
		constexpr static rivet::rivet_type_id Name_type_id = 0x6eb3beb6;
		constexpr static std::string_view PoseName_type_name = "PoseName";
		constexpr static rivet::rivet_type_id PoseName_type_id = 0x4dbc46f3;
		constexpr static std::string_view Keys_type_name = "Keys";
		constexpr static rivet::rivet_type_id Keys_type_id = 0x841e845c; 

		explicit AnimFacialExpressionDef() = default;
		explicit AnimFacialExpressionDef([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		uint64_t Id {};
		std::string_view Name {};
		std::string_view PoseName {};
		std::vector<std::shared_ptr<rivet::ddl::generated::AnimPerformanceKeyDef>> Keys {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<AnimFacialExpressionDef>;
	};
} // namespace rivet::ddl::generated

// clang-format on