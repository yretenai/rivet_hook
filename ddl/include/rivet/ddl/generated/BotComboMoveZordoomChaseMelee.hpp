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

#include <rivet/ddl/generated/BotComboMoveBase.hpp> 

namespace rivet::ddl::generated {
	struct RIVET_DDL_SHARED BotComboMoveZordoomChaseMelee : BotComboMoveBase {
		constexpr const static std::string_view type_name = "BotComboMoveZordoomChaseMelee";
		constexpr const static rivet::rivet_type_id type_id = 0x8d5b338a;

		constexpr const static std::string_view IntroAnim_type_name = "IntroAnim";
		constexpr const static rivet::rivet_type_id IntroAnim_type_id = 0xf227a2c3;
		constexpr const static std::string_view ActiveAnim_type_name = "ActiveAnim";
		constexpr const static rivet::rivet_type_id ActiveAnim_type_id = 0x3f3770a4;
		constexpr const static std::string_view OutroAnim_type_name = "OutroAnim";
		constexpr const static rivet::rivet_type_id OutroAnim_type_id = 0xa0ecf634;
		constexpr const static std::string_view IntroDuration_type_name = "IntroDuration";
		constexpr const static rivet::rivet_type_id IntroDuration_type_id = 0x5d9ecce9;
		constexpr const static std::string_view ActiveDuration_type_name = "ActiveDuration";
		constexpr const static rivet::rivet_type_id ActiveDuration_type_id = 0xda754e51;
		constexpr const static std::string_view OutroDuration_type_name = "OutroDuration";
		constexpr const static rivet::rivet_type_id OutroDuration_type_id = 0x80f15ac6; 

		explicit BotComboMoveZordoomChaseMelee() = default;
		explicit BotComboMoveZordoomChaseMelee([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::string_view IntroAnim {};
		std::string_view ActiveAnim {};
		std::string_view OutroAnim {};
		float IntroDuration {};
		float ActiveDuration {};
		float OutroDuration {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<BotComboMoveZordoomChaseMelee>;
	};
} // namespace rivet::ddl::generated

// clang-format on
