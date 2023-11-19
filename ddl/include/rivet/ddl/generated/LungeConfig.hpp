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
	struct LungeAttackData; 

	struct RIVET_DDL_SHARED LungeConfig : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "LungeConfig";
		constexpr static rivet::rivet_type_id type_id = 0x5910b12b;

		constexpr static std::string_view LungeMinDistance_type_name = "LungeMinDistance";
		constexpr static rivet::rivet_type_id LungeMinDistance_type_id = 0xa6759190;
		constexpr static std::string_view LungeStartDistance_type_name = "LungeStartDistance";
		constexpr static rivet::rivet_type_id LungeStartDistance_type_id = 0xb99e6b5a;
		constexpr static std::string_view LungeStartAngle_type_name = "LungeStartAngle";
		constexpr static rivet::rivet_type_id LungeStartAngle_type_id = 0x3b689724;
		constexpr static std::string_view Cooldown_type_name = "Cooldown";
		constexpr static rivet::rivet_type_id Cooldown_type_id = 0x246291a9;
		constexpr static std::string_view StateData_type_name = "StateData";
		constexpr static rivet::rivet_type_id StateData_type_id = 0x45e59822; 

		explicit LungeConfig() = default;
		explicit LungeConfig([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		float LungeMinDistance {};
		float LungeStartDistance {};
		float LungeStartAngle {};
		float Cooldown {};
		std::shared_ptr<rivet::ddl::generated::LungeAttackData> StateData {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<LungeConfig>;
	};
} // namespace rivet::ddl::generated

// clang-format on