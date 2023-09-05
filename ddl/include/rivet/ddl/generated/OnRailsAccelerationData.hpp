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
	struct RIVET_DDL_SHARED OnRailsAccelerationData : rivet::structures::rivet_ddl_base {
		constexpr const static std::string_view type_name = "OnRailsAccelerationData";
		constexpr const static rivet::rivet_type_id type_id = 0x9f3a7d60;

		constexpr const static std::string_view HorizontalJerk_type_name = "HorizontalJerk";
		constexpr const static rivet::rivet_type_id HorizontalJerk_type_id = 0xab4de8d1;
		constexpr const static std::string_view NegativeHorizontalJerk_type_name = "NegativeHorizontalJerk";
		constexpr const static rivet::rivet_type_id NegativeHorizontalJerk_type_id = 0x5e5b67a3;
		constexpr const static std::string_view MaxHorizontalAccel_type_name = "MaxHorizontalAccel";
		constexpr const static rivet::rivet_type_id MaxHorizontalAccel_type_id = 0xb35b32e9;
		constexpr const static std::string_view VerticalJerk_type_name = "VerticalJerk";
		constexpr const static rivet::rivet_type_id VerticalJerk_type_id = 0x9a109e90;
		constexpr const static std::string_view NegativeVerticalJerk_type_name = "NegativeVerticalJerk";
		constexpr const static rivet::rivet_type_id NegativeVerticalJerk_type_id = 0xbd03b806;
		constexpr const static std::string_view MaxVerticalAccel_type_name = "MaxVerticalAccel";
		constexpr const static rivet::rivet_type_id MaxVerticalAccel_type_id = 0x5975877c; 

		explicit OnRailsAccelerationData() = default;
		explicit OnRailsAccelerationData([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		float HorizontalJerk {};
		float NegativeHorizontalJerk {};
		float MaxHorizontalAccel {};
		float VerticalJerk {};
		float NegativeVerticalJerk {};
		float MaxVerticalAccel {}; 

		auto
		get_type_id() const noexcept -> rivet::rivet_type_id override;

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<OnRailsAccelerationData>;
	};
} // namespace rivet::ddl::generated

// clang-format on