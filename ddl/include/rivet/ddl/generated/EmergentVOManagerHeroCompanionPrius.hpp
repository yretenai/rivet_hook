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

#include <rivet/ddl/generated/EmergentVOManagerGamePrius.hpp> 

namespace rivet::ddl::generated {
	struct RIVET_DDL_SHARED EmergentVOManagerHeroCompanionPrius : EmergentVOManagerGamePrius {
		constexpr const static std::string_view type_name = "EmergentVOManagerHeroCompanionPrius";
		constexpr const static rivet::rivet_type_id type_id = 0xb0121d21;

		constexpr const static std::string_view EmergentVOConfig_type_name = "EmergentVOConfig";
		constexpr const static rivet::rivet_type_id EmergentVOConfig_type_id = 0xde8b92bf; 

		explicit EmergentVOManagerHeroCompanionPrius() = default;
		explicit EmergentVOManagerHeroCompanionPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::string_view EmergentVOConfig {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<EmergentVOManagerHeroCompanionPrius>;
	};
} // namespace rivet::ddl::generated

// clang-format on
