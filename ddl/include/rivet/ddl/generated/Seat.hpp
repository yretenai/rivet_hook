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
	struct RIVET_DDL_SHARED Seat : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "Seat";
		constexpr static rivet::rivet_type_id type_id = 0xdccf6d6;

		constexpr static std::string_view LocatorName_type_name = "LocatorName";
		constexpr static rivet::rivet_type_id LocatorName_type_id = 0x5814524d;
		constexpr static std::string_view MountAnim_type_name = "MountAnim";
		constexpr static rivet::rivet_type_id MountAnim_type_id = 0xa6329c96;
		constexpr static std::string_view DismountAnim_type_name = "DismountAnim";
		constexpr static rivet::rivet_type_id DismountAnim_type_id = 0x672e288a;
		constexpr static std::string_view JumpAnim_type_name = "JumpAnim";
		constexpr static rivet::rivet_type_id JumpAnim_type_id = 0xcb3dc9d4;
		constexpr static std::string_view SeatedAnim_type_name = "SeatedAnim";
		constexpr static rivet::rivet_type_id SeatedAnim_type_id = 0xe506c33f;
		constexpr static std::string_view AdditiveAnim_type_name = "AdditiveAnim";
		constexpr static rivet::rivet_type_id AdditiveAnim_type_id = 0x9f2d3c03;
		constexpr static std::string_view AddRidableAnimset_type_name = "AddRidableAnimset";
		constexpr static rivet::rivet_type_id AddRidableAnimset_type_id = 0xc743b656; 

		explicit Seat() = default;
		explicit Seat([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::string_view LocatorName {};
		std::string_view MountAnim {};
		std::string_view DismountAnim {};
		std::string_view JumpAnim {};
		std::string_view SeatedAnim {};
		std::string_view AdditiveAnim {};
		bool AddRidableAnimset {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<Seat>;
	};
} // namespace rivet::ddl::generated

// clang-format on