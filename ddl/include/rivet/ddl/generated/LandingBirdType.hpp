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
	struct RIVET_DDL_SHARED LandingBirdType : rivet::structures::rivet_ddl_base {
		constexpr const static std::string_view type_name = "LandingBirdType";
		constexpr const static rivet::rivet_type_id type_id = 0x93b33652;

		constexpr const static std::string_view TypeName_type_name = "TypeName";
		constexpr const static rivet::rivet_type_id TypeName_type_id = 0x4b6c9353;
		constexpr const static std::string_view Config_type_name = "Config";
		constexpr const static rivet::rivet_type_id Config_type_id = 0xeaf2611b;
		constexpr const static std::string_view Planets_type_name = "Planets";
		constexpr const static rivet::rivet_type_id Planets_type_id = 0xbc30e83e; 

		explicit LandingBirdType() = default;
		explicit LandingBirdType([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::string_view TypeName {};
		std::string_view Config {};
		std::vector<std::string_view> Planets {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<LandingBirdType>;
	};
} // namespace rivet::ddl::generated

// clang-format on
