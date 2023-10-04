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

#include <rivet/ddl/generated/enums/x847316cf.hpp> 

namespace rivet::ddl::generated {
	struct AccessibilityOptionTypeBase; 

	struct RIVET_DDL_SHARED AccessibilityOption : rivet::structures::rivet_ddl_base {
		constexpr const static std::string_view type_name = "AccessibilityOption";
		constexpr const static rivet::rivet_type_id type_id = 0xfe91b414;

		constexpr const static std::string_view Type_type_name = "Type";
		constexpr const static rivet::rivet_type_id Type_type_id = 0xbc4e9799;
		constexpr const static std::string_view ID_type_name = "ID";
		constexpr const static rivet::rivet_type_id ID_type_id = 0xb13f6a45;
		constexpr const static std::string_view Name_type_name = "Name";
		constexpr const static rivet::rivet_type_id Name_type_id = 0x6eb3beb6;
		constexpr const static std::string_view ButtonCombo_type_name = "ButtonCombo";
		constexpr const static rivet::rivet_type_id ButtonCombo_type_id = 0x820936d4;
		constexpr const static std::string_view Description_type_name = "Description";
		constexpr const static rivet::rivet_type_id Description_type_id = 0xe03811fd;
		constexpr const static std::string_view Icon_type_name = "Icon";
		constexpr const static rivet::rivet_type_id Icon_type_id = 0x5504e96b; 

		explicit AccessibilityOption() = default;
		explicit AccessibilityOption([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::shared_ptr<rivet::ddl::generated::AccessibilityOptionTypeBase> Type {};
		rivet::ddl::generated::x847316cf ID {};
		std::string_view Name {};
		std::string_view ButtonCombo {};
		std::string_view Description {};
		std::string_view Icon {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<AccessibilityOption>;
	};
} // namespace rivet::ddl::generated

// clang-format on
