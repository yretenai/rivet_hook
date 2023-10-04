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

#include <rivet/ddl/generated/enums/BonusType.hpp> 

namespace rivet::ddl::generated {
	struct RIVET_DDL_SHARED BonusDisplayDef : rivet::structures::rivet_ddl_base {
		constexpr const static std::string_view type_name = "BonusDisplayDef";
		constexpr const static rivet::rivet_type_id type_id = 0x6448de1b;

		constexpr const static std::string_view Bonus_type_name = "Bonus";
		constexpr const static rivet::rivet_type_id Bonus_type_id = 0x86cbb3bb;
		constexpr const static std::string_view BonusDescLocTag_type_name = "BonusDescLocTag";
		constexpr const static rivet::rivet_type_id BonusDescLocTag_type_id = 0x5c3ff112;
		constexpr const static std::string_view InsertNumber_type_name = "InsertNumber";
		constexpr const static rivet::rivet_type_id InsertNumber_type_id = 0xd224362c;
		constexpr const static std::string_view StringLocTag_type_name = "StringLocTag";
		constexpr const static rivet::rivet_type_id StringLocTag_type_id = 0xa2967435;
		constexpr const static std::string_view InsertString_type_name = "InsertString";
		constexpr const static rivet::rivet_type_id InsertString_type_id = 0xda0a9bd1; 

		explicit BonusDisplayDef() = default;
		explicit BonusDisplayDef([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		rivet::ddl::generated::BonusType Bonus {};
		std::string_view BonusDescLocTag {};
		bool InsertNumber {};
		std::string_view StringLocTag {};
		bool InsertString {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<BonusDisplayDef>;
	};
} // namespace rivet::ddl::generated

// clang-format on
