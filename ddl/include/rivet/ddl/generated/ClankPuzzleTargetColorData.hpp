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
	struct DDLVector3; 

	struct RIVET_DDL_SHARED ClankPuzzleTargetColorData : rivet::structures::rivet_ddl_base {
		constexpr const static std::string_view type_name = "ClankPuzzleTargetColorData";
		constexpr const static rivet::rivet_type_id type_id = 0x9c8a630b;

		constexpr const static std::string_view ColorConstant_type_name = "ColorConstant";
		constexpr const static rivet::rivet_type_id ColorConstant_type_id = 0x2abb3948;
		constexpr const static std::string_view LerpInValue_type_name = "LerpInValue";
		constexpr const static rivet::rivet_type_id LerpInValue_type_id = 0xa78f92;
		constexpr const static std::string_view LerpOutValue_type_name = "LerpOutValue";
		constexpr const static rivet::rivet_type_id LerpOutValue_type_id = 0x7255935b;
		constexpr const static std::string_view DefaultColor_type_name = "DefaultColor";
		constexpr const static rivet::rivet_type_id DefaultColor_type_id = 0x7ccd1470;
		constexpr const static std::string_view SpeedUpColor_type_name = "SpeedUpColor";
		constexpr const static rivet::rivet_type_id SpeedUpColor_type_id = 0x7b4c01a7;
		constexpr const static std::string_view SlowDownColor_type_name = "SlowDownColor";
		constexpr const static rivet::rivet_type_id SlowDownColor_type_id = 0x3de399a8;
		constexpr const static std::string_view GravityColor_type_name = "GravityColor";
		constexpr const static rivet::rivet_type_id GravityColor_type_id = 0x6558c61a;
		constexpr const static std::string_view EnergyColor_type_name = "EnergyColor";
		constexpr const static rivet::rivet_type_id EnergyColor_type_id = 0xf3fe021a; 

		explicit ClankPuzzleTargetColorData() = default;
		explicit ClankPuzzleTargetColorData([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::string_view ColorConstant {};
		float LerpInValue {};
		float LerpOutValue {};
		std::shared_ptr<rivet::ddl::generated::DDLVector3> DefaultColor {};
		std::shared_ptr<rivet::ddl::generated::DDLVector3> SpeedUpColor {};
		std::shared_ptr<rivet::ddl::generated::DDLVector3> SlowDownColor {};
		std::shared_ptr<rivet::ddl::generated::DDLVector3> GravityColor {};
		std::shared_ptr<rivet::ddl::generated::DDLVector3> EnergyColor {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<ClankPuzzleTargetColorData>;
	};
} // namespace rivet::ddl::generated

// clang-format on
