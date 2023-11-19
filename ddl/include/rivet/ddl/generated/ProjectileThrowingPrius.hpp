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
	struct RIVET_DDL_SHARED ProjectileThrowingPrius : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "ProjectileThrowingPrius";
		constexpr static rivet::rivet_type_id type_id = 0xae949eab;

		constexpr static std::string_view ProjectileThrowingConfig_type_name = "ProjectileThrowingConfig";
		constexpr static rivet::rivet_type_id ProjectileThrowingConfig_type_id = 0xbcd4e648;
		constexpr static std::string_view ThrowLocator_type_name = "ThrowLocator";
		constexpr static rivet::rivet_type_id ThrowLocator_type_id = 0x8a6428cd;
		constexpr static std::string_view UseArcFinder_type_name = "UseArcFinder";
		constexpr static rivet::rivet_type_id UseArcFinder_type_id = 0xb6fbb46f;
		constexpr static std::string_view SnapTargetPositionToGround_type_name = "SnapTargetPositionToGround";
		constexpr static rivet::rivet_type_id SnapTargetPositionToGround_type_id = 0x268ccd0b; 

		explicit ProjectileThrowingPrius() = default;
		explicit ProjectileThrowingPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::string_view ProjectileThrowingConfig {};
		std::string_view ThrowLocator {};
		bool UseArcFinder {};
		bool SnapTargetPositionToGround {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<ProjectileThrowingPrius>;
	};
} // namespace rivet::ddl::generated

// clang-format on