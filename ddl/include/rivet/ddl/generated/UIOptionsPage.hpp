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

#include <rivet/ddl/generated/enums/x58b2a3a9.hpp> 

namespace rivet::ddl::generated {
	struct UIOption; 

	struct RIVET_DDL_SHARED UIOptionsPage : rivet::structures::rivet_ddl_base {
		constexpr const static std::string_view type_name = "UIOptionsPage";
		constexpr const static rivet::rivet_type_id type_id = 0x8f00a922;

		constexpr const static std::string_view PageID_type_name = "PageID";
		constexpr const static rivet::rivet_type_id PageID_type_id = 0x982d0b4c;
		constexpr const static std::string_view Label_type_name = "Label";
		constexpr const static rivet::rivet_type_id Label_type_id = 0x17f49c29;
		constexpr const static std::string_view Options_type_name = "Options";
		constexpr const static rivet::rivet_type_id Options_type_id = 0xd1df99bf; 

		explicit UIOptionsPage() = default;
		explicit UIOptionsPage([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		rivet::ddl::generated::x58b2a3a9 PageID {};
		std::string_view Label {};
		std::vector<std::shared_ptr<rivet::ddl::generated::UIOption>> Options {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<UIOptionsPage>;
	};
} // namespace rivet::ddl::generated

// clang-format on