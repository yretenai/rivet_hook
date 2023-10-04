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

#include <rivet/ddl/generated/enums/xca348341.hpp>
#include <rivet/ddl/generated/enums/xf28253cd.hpp>
#include <rivet/ddl/generated/enums/xf20c2999.hpp> 

namespace rivet::ddl::generated {
	struct RIVET_DDL_SHARED SkinItemCategoryList : rivet::structures::rivet_ddl_base {
		constexpr const static std::string_view type_name = "SkinItemCategoryList";
		constexpr const static rivet::rivet_type_id type_id = 0x756547f1;

		constexpr const static std::string_view Category_type_name = "Category";
		constexpr const static rivet::rivet_type_id Category_type_id = 0xfc4da4b1;
		constexpr const static std::string_view CategoryLocTag_type_name = "CategoryLocTag";
		constexpr const static rivet::rivet_type_id CategoryLocTag_type_id = 0xf7fa9c5;
		constexpr const static std::string_view Display_type_name = "Display";
		constexpr const static rivet::rivet_type_id Display_type_id = 0xd3b119b;
		constexpr const static std::string_view UIType_type_name = "UIType";
		constexpr const static rivet::rivet_type_id UIType_type_id = 0x8c1e6e85;
		constexpr const static std::string_view ItemConfigs_type_name = "ItemConfigs";
		constexpr const static rivet::rivet_type_id ItemConfigs_type_id = 0x7fc28238;
		constexpr const static std::string_view IsBodyCategory_type_name = "IsBodyCategory";
		constexpr const static rivet::rivet_type_id IsBodyCategory_type_id = 0xa736d6ab;
		constexpr const static std::string_view ShowOnBootup_type_name = "ShowOnBootup";
		constexpr const static rivet::rivet_type_id ShowOnBootup_type_id = 0xf5805c23;
		constexpr const static std::string_view SubMenu_type_name = "SubMenu";
		constexpr const static rivet::rivet_type_id SubMenu_type_id = 0x568841e;
		constexpr const static std::string_view MenuPriority_type_name = "MenuPriority";
		constexpr const static rivet::rivet_type_id MenuPriority_type_id = 0xa4cd7a32; 

		explicit SkinItemCategoryList() = default;
		explicit SkinItemCategoryList([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		rivet::ddl::generated::xf28253cd Category {};
		std::string_view CategoryLocTag {};
		bool Display {};
		rivet::ddl::generated::xf20c2999 UIType {};
		std::vector<std::string_view> ItemConfigs {};
		bool IsBodyCategory {};
		bool ShowOnBootup {};
		rivet::ddl::generated::xca348341 SubMenu {};
		uint32_t MenuPriority {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<SkinItemCategoryList>;
	};
} // namespace rivet::ddl::generated

// clang-format on
