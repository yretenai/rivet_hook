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
	struct RIVET_DDL_SHARED IconMapData : rivet::structures::rivet_ddl_base {
		constexpr const static std::string_view type_name = "IconMapData";
		constexpr const static rivet::rivet_type_id type_id = 0x828aa0cd;

		constexpr const static std::string_view Icon_type_name = "Icon";
		constexpr const static rivet::rivet_type_id Icon_type_id = 0x5504e96b;
		constexpr const static std::string_view MarkupText_type_name = "MarkupText";
		constexpr const static rivet::rivet_type_id MarkupText_type_id = 0x28b909c2;
		constexpr const static std::string_view Width_type_name = "Width";
		constexpr const static rivet::rivet_type_id Width_type_id = 0x954989ee;
		constexpr const static std::string_view Height_type_name = "Height";
		constexpr const static rivet::rivet_type_id Height_type_id = 0xcb35ab68;
		constexpr const static std::string_view MinHeight_type_name = "MinHeight";
		constexpr const static rivet::rivet_type_id MinHeight_type_id = 0x9ed620e3;
		constexpr const static std::string_view MaxHeight_type_name = "MaxHeight";
		constexpr const static rivet::rivet_type_id MaxHeight_type_id = 0x493d92a2;
		constexpr const static std::string_view Vspace_type_name = "Vspace";
		constexpr const static rivet::rivet_type_id Vspace_type_id = 0xbd91373f; 

		explicit IconMapData() = default;
		explicit IconMapData([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::string_view Icon {};
		std::string_view MarkupText {};
		int32_t Width {};
		int32_t Height {};
		int32_t MinHeight {};
		int32_t MaxHeight {};
		int32_t Vspace {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<IconMapData>;
	};
} // namespace rivet::ddl::generated

// clang-format on
