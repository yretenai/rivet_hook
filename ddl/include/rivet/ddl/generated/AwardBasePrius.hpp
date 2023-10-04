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

#include <rivet/ddl/generated/enums/xfb81cf7c.hpp> 

namespace rivet::ddl::generated {
	struct AwardPrizeBasePrius; 

	struct RIVET_DDL_SHARED AwardBasePrius : rivet::structures::rivet_ddl_base {
		constexpr const static std::string_view type_name = "AwardBasePrius";
		constexpr const static rivet::rivet_type_id type_id = 0xd4f8d602;

		constexpr const static std::string_view CodeName_type_name = "CodeName";
		constexpr const static rivet::rivet_type_id CodeName_type_id = 0xa15b4218;
		constexpr const static std::string_view NameLocTag_type_name = "NameLocTag";
		constexpr const static rivet::rivet_type_id NameLocTag_type_id = 0xa0041b54;
		constexpr const static std::string_view DescLocTag_type_name = "DescLocTag";
		constexpr const static rivet::rivet_type_id DescLocTag_type_id = 0xe02bccb2;
		constexpr const static std::string_view ImagePath_type_name = "ImagePath";
		constexpr const static rivet::rivet_type_id ImagePath_type_id = 0x3c1a7294;
		constexpr const static std::string_view Level_type_name = "Level";
		constexpr const static rivet::rivet_type_id Level_type_id = 0x83b900d2;
		constexpr const static std::string_view Hidden_type_name = "Hidden";
		constexpr const static rivet::rivet_type_id Hidden_type_id = 0xb625a7da;
		constexpr const static std::string_view Progressive_type_name = "Progressive";
		constexpr const static rivet::rivet_type_id Progressive_type_id = 0x54bc7138;
		constexpr const static std::string_view TargetValue_type_name = "TargetValue";
		constexpr const static rivet::rivet_type_id TargetValue_type_id = 0xc1574041;
		constexpr const static std::string_view Prize_type_name = "Prize";
		constexpr const static rivet::rivet_type_id Prize_type_id = 0x489b4700; 

		explicit AwardBasePrius() = default;
		explicit AwardBasePrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::string_view CodeName {};
		std::string_view NameLocTag {};
		std::string_view DescLocTag {};
		std::string_view ImagePath {};
		rivet::ddl::generated::xfb81cf7c Level {};
		bool Hidden {};
		bool Progressive {};
		uint32_t TargetValue {};
		std::shared_ptr<rivet::ddl::generated::AwardPrizeBasePrius> Prize {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<AwardBasePrius>;
	};
} // namespace rivet::ddl::generated

// clang-format on