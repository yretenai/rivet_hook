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

#include <rivet/ddl/generated/ConfigBase.hpp>
#include <rivet/ddl/generated/enums/xd80b176a.hpp> 

namespace rivet::ddl::generated {
	struct ItemElement; 

	struct RIVET_DDL_SHARED LootListConfig : ConfigBase {
		constexpr const static std::string_view type_name = "LootListConfig";
		constexpr const static rivet::rivet_type_id type_id = 0x342f7277;

		constexpr const static std::string_view SelectType_type_name = "SelectType";
		constexpr const static rivet::rivet_type_id SelectType_type_id = 0xe2660679;
		constexpr const static std::string_view Items_type_name = "Items";
		constexpr const static rivet::rivet_type_id Items_type_id = 0xf84d258c; 

		explicit LootListConfig() = default;
		explicit LootListConfig([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		rivet::ddl::generated::xd80b176a SelectType {};
		std::vector<std::shared_ptr<rivet::ddl::generated::ItemElement>> Items {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<LootListConfig>;
	};
} // namespace rivet::ddl::generated

// clang-format on
