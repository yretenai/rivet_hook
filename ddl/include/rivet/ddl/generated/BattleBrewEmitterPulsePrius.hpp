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

#include <rivet/ddl/generated/BattleBrewEmitterBasePrius.hpp>
#include <rivet/ddl/generated/bitsets/TargetType.hpp> 

namespace rivet::ddl::generated {
	struct RIVET_DDL_SHARED BattleBrewEmitterPulsePrius : BattleBrewEmitterBasePrius {
		constexpr const static std::string_view type_name = "BattleBrewEmitterPulsePrius";
		constexpr const static rivet::rivet_type_id type_id = 0x1f46b337;

		constexpr const static std::string_view Range_type_name = "Range";
		constexpr const static rivet::rivet_type_id Range_type_id = 0x8ad49688;
		constexpr const static std::string_view Time_type_name = "Time";
		constexpr const static rivet::rivet_type_id Time_type_id = 0x5f0458f5;
		constexpr const static std::string_view ValidTargetTypes_type_name = "ValidTargetTypes";
		constexpr const static rivet::rivet_type_id ValidTargetTypes_type_id = 0x3b4c9303; 

		explicit BattleBrewEmitterPulsePrius() = default;
		explicit BattleBrewEmitterPulsePrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		float Range {};
		float Time {};
		rivet::ddl::generated::TargetType ValidTargetTypes {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<BattleBrewEmitterPulsePrius>;
	};
} // namespace rivet::ddl::generated

// clang-format on
