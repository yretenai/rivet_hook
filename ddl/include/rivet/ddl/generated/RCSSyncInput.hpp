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
	struct RCSRevisionOptions; 

	struct RIVET_DDL_SHARED RCSSyncInput : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "RCSSyncInput";
		constexpr static rivet::rivet_type_id type_id = 0x1f41f4ab;

		constexpr static std::string_view Views_type_name = "Views";
		constexpr static rivet::rivet_type_id Views_type_id = 0x8a35046;
		constexpr static std::string_view Force_type_name = "Force";
		constexpr static rivet::rivet_type_id Force_type_id = 0x8e3b4fe9;
		constexpr static std::string_view Preview_type_name = "Preview";
		constexpr static rivet::rivet_type_id Preview_type_id = 0xb86f4c08;
		constexpr static std::string_view OverrideRevisionOptions_type_name = "OverrideRevisionOptions";
		constexpr static rivet::rivet_type_id OverrideRevisionOptions_type_id = 0x1303b973;
		constexpr static std::string_view RevisionOptions_type_name = "RevisionOptions";
		constexpr static rivet::rivet_type_id RevisionOptions_type_id = 0x531b5702; 

		explicit RCSSyncInput() = default;
		explicit RCSSyncInput([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::vector<std::string_view> Views {};
		bool Force {};
		bool Preview {};
		bool OverrideRevisionOptions {};
		std::shared_ptr<rivet::ddl::generated::RCSRevisionOptions> RevisionOptions {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<RCSSyncInput>;
	};
} // namespace rivet::ddl::generated

// clang-format on