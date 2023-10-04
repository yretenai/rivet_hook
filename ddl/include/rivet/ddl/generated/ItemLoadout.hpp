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
	struct ItemLoadoutList; 

	struct RIVET_DDL_SHARED ItemLoadout : rivet::structures::rivet_ddl_base {
		constexpr const static std::string_view type_name = "ItemLoadout";
		constexpr const static rivet::rivet_type_id type_id = 0x43ce3449;

		constexpr const static std::string_view Name_type_name = "Name";
		constexpr const static rivet::rivet_type_id Name_type_id = 0x6eb3beb6;
		constexpr const static std::string_view FillAllOwnedAmmo_type_name = "FillAllOwnedAmmo";
		constexpr const static rivet::rivet_type_id FillAllOwnedAmmo_type_id = 0xddd842ce;
		constexpr const static std::string_view ItemLoadoutLists_type_name = "ItemLoadoutLists";
		constexpr const static rivet::rivet_type_id ItemLoadoutLists_type_id = 0x650ab5fe; 

		explicit ItemLoadout() = default;
		explicit ItemLoadout([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::string_view Name {};
		bool FillAllOwnedAmmo {};
		std::vector<std::shared_ptr<rivet::ddl::generated::ItemLoadoutList>> ItemLoadoutLists {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<ItemLoadout>;
	};
} // namespace rivet::ddl::generated

// clang-format on