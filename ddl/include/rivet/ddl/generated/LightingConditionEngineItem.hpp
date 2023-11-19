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

#include <rivet/ddl/generated/enums/LightingConditions.hpp> 

namespace rivet::ddl::generated {
	struct RIVET_DDL_SHARED LightingConditionEngineItem : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "LightingConditionEngineItem";
		constexpr static rivet::rivet_type_id type_id = 0x9a494bd4;

		constexpr static std::string_view LightingCondition_type_name = "LightingCondition";
		constexpr static rivet::rivet_type_id LightingCondition_type_id = 0xc3b54f69; 

		explicit LightingConditionEngineItem() = default;
		explicit LightingConditionEngineItem([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		rivet::ddl::generated::LightingConditions LightingCondition {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<LightingConditionEngineItem>;
	};
} // namespace rivet::ddl::generated

// clang-format on