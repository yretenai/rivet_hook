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

#include <rivet/ddl/generated/TargetedAttackShape.hpp> 

namespace rivet::ddl::generated {
	struct RIVET_DDL_SHARED TargetAttackShapeWedge : TargetedAttackShape {
		constexpr static std::string_view type_name = "TargetAttackShapeWedge";
		constexpr static rivet::rivet_type_id type_id = 0x3b1cf88d;

		constexpr static std::string_view Locator_type_name = "Locator";
		constexpr static rivet::rivet_type_id Locator_type_id = 0x7bac1d57;
		constexpr static std::string_view Radius_type_name = "Radius";
		constexpr static rivet::rivet_type_id Radius_type_id = 0x504203d;
		constexpr static std::string_view HalfAngle_type_name = "HalfAngle";
		constexpr static rivet::rivet_type_id HalfAngle_type_id = 0xad75ffd;
		constexpr static std::string_view HeightUp_type_name = "HeightUp";
		constexpr static rivet::rivet_type_id HeightUp_type_id = 0x7be988d7;
		constexpr static std::string_view HeightDown_type_name = "HeightDown";
		constexpr static rivet::rivet_type_id HeightDown_type_id = 0x18b154fa; 

		explicit TargetAttackShapeWedge() = default;
		explicit TargetAttackShapeWedge([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::string_view Locator {};
		float Radius {};
		float HalfAngle {};
		float HeightUp {};
		float HeightDown {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<TargetAttackShapeWedge>;
	};
} // namespace rivet::ddl::generated

// clang-format on