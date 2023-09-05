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
	struct RIVET_DDL_SHARED ProximitySpawnInfo : rivet::structures::rivet_ddl_base {
		constexpr const static std::string_view type_name = "ProximitySpawnInfo";
		constexpr const static rivet::rivet_type_id type_id = 0xea555bab;

		constexpr const static std::string_view MaxAlive_type_name = "MaxAlive";
		constexpr const static rivet::rivet_type_id MaxAlive_type_id = 0x9a59dc4;
		constexpr const static std::string_view ActorType_type_name = "ActorType";
		constexpr const static rivet::rivet_type_id ActorType_type_id = 0x1eb7640e; 

		explicit ProximitySpawnInfo() = default;
		explicit ProximitySpawnInfo([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		int32_t MaxAlive {};
		std::string_view ActorType {}; 

		auto
		get_type_id() const noexcept -> rivet::rivet_type_id override;

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<ProximitySpawnInfo>;
	};
} // namespace rivet::ddl::generated

// clang-format on