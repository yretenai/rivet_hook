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
	struct RIVET_DDL_SHARED ShortcutIconData : rivet::structures::rivet_ddl_base {
		constexpr const static std::string_view type_name = "ShortcutIconData";
		constexpr const static rivet::rivet_type_id type_id = 0xfab722e1;

		constexpr const static std::string_view Shortcut_type_name = "Shortcut";
		constexpr const static rivet::rivet_type_id Shortcut_type_id = 0xd4f982ec;
		constexpr const static std::string_view Icon_type_name = "Icon";
		constexpr const static rivet::rivet_type_id Icon_type_id = 0x5504e96b; 

		explicit ShortcutIconData() = default;
		explicit ShortcutIconData([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		rivet::ddl::generated::x847316cf Shortcut {};
		std::string_view Icon {}; 

		auto
		get_type_id() const noexcept -> rivet::rivet_type_id override;

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<ShortcutIconData>;
	};
} // namespace rivet::ddl::generated

// clang-format on