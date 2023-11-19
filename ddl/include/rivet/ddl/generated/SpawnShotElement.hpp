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
	struct RIVET_DDL_SHARED SpawnShotElement : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "SpawnShotElement";
		constexpr static rivet::rivet_type_id type_id = 0xd14a5022;

		constexpr static std::string_view Description_type_name = "Description";
		constexpr static rivet::rivet_type_id Description_type_id = 0xe03811fd;
		constexpr static std::string_view ShotConfig_type_name = "ShotConfig";
		constexpr static rivet::rivet_type_id ShotConfig_type_id = 0xb171e6ae;
		constexpr static std::string_view EmitterConfig_type_name = "EmitterConfig";
		constexpr static rivet::rivet_type_id EmitterConfig_type_id = 0x6d405b0e;
		constexpr static std::string_view TargetingConfig_type_name = "TargetingConfig";
		constexpr static rivet::rivet_type_id TargetingConfig_type_id = 0x8dd2dde;
		constexpr static std::string_view MaxShotsPerSecond_type_name = "MaxShotsPerSecond";
		constexpr static rivet::rivet_type_id MaxShotsPerSecond_type_id = 0x2869baeb; 

		explicit SpawnShotElement() = default;
		explicit SpawnShotElement([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::string_view Description {};
		std::string_view ShotConfig {};
		std::string_view EmitterConfig {};
		std::string_view TargetingConfig {};
		float MaxShotsPerSecond {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<SpawnShotElement>;
	};
} // namespace rivet::ddl::generated

// clang-format on