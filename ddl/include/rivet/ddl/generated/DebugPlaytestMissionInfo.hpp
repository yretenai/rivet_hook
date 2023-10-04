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
	struct RIVET_DDL_SHARED DebugPlaytestMissionInfo : rivet::structures::rivet_ddl_base {
		constexpr const static std::string_view type_name = "DebugPlaytestMissionInfo";
		constexpr const static rivet::rivet_type_id type_id = 0xde7b4535;

		constexpr const static std::string_view Mission_type_name = "Mission";
		constexpr const static rivet::rivet_type_id Mission_type_id = 0x918d9104;
		constexpr const static std::string_view Objective_type_name = "Objective";
		constexpr const static rivet::rivet_type_id Objective_type_id = 0x3b6b6e0d; 

		explicit DebugPlaytestMissionInfo() = default;
		explicit DebugPlaytestMissionInfo([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::string_view Mission {};
		std::string_view Objective {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<DebugPlaytestMissionInfo>;
	};
} // namespace rivet::ddl::generated

// clang-format on