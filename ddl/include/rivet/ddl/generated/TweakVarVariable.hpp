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

#include <rivet/ddl/generated/enums/xb44e71fc.hpp> 

namespace rivet::ddl::generated {
	struct DDLVector2; 

	struct RIVET_DDL_SHARED TweakVarVariable : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "TweakVarVariable";
		constexpr static rivet::rivet_type_id type_id = 0x990019ec;

		constexpr static std::string_view Name_type_name = "Name";
		constexpr static rivet::rivet_type_id Name_type_id = 0x6eb3beb6;
		constexpr static std::string_view Address_type_name = "Address";
		constexpr static rivet::rivet_type_id Address_type_id = 0xca40cb9;
		constexpr static std::string_view LineNumber_type_name = "LineNumber";
		constexpr static rivet::rivet_type_id LineNumber_type_id = 0x3fb68f44;
		constexpr static std::string_view Range_type_name = "Range";
		constexpr static rivet::rivet_type_id Range_type_id = 0x8ad49688;
		constexpr static std::string_view RangeValid_type_name = "RangeValid";
		constexpr static rivet::rivet_type_id RangeValid_type_id = 0xd9b545e0;
		constexpr static std::string_view TagsJson_type_name = "TagsJson";
		constexpr static rivet::rivet_type_id TagsJson_type_id = 0xdb0a4ab8;
		constexpr static std::string_view ToolTip_type_name = "ToolTip";
		constexpr static rivet::rivet_type_id ToolTip_type_id = 0x981e7a68;
		constexpr static std::string_view Type_type_name = "Type";
		constexpr static rivet::rivet_type_id Type_type_id = 0xbc4e9799;
		constexpr static std::string_view Value_type_name = "Value";
		constexpr static rivet::rivet_type_id Value_type_id = 0x42494f5;
		constexpr static std::string_view HoudiniChoiceList_type_name = "HoudiniChoiceList";
		constexpr static rivet::rivet_type_id HoudiniChoiceList_type_id = 0xfe7fac93;
		constexpr static std::string_view HoudiniSortValue_type_name = "HoudiniSortValue";
		constexpr static rivet::rivet_type_id HoudiniSortValue_type_id = 0x78be4c82; 

		explicit TweakVarVariable() = default;
		explicit TweakVarVariable([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::string_view Name {};
		std::string_view Address {};
		uint32_t LineNumber {};
		std::shared_ptr<rivet::ddl::generated::DDLVector2> Range {};
		bool RangeValid {};
		std::optional<std::vector<rivet::structures::rivet_serialized_value>> TagsJson {};
		std::string_view ToolTip {};
		rivet::ddl::generated::xb44e71fc Type {};
		std::optional<std::vector<rivet::structures::rivet_serialized_value>> Value {};
		std::vector<std::string_view> HoudiniChoiceList {};
		int32_t HoudiniSortValue {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<TweakVarVariable>;
	};
} // namespace rivet::ddl::generated

// clang-format on