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
	struct RIVET_DDL_SHARED DimensionFXPrius : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "DimensionFXPrius";
		constexpr static rivet::rivet_type_id type_id = 0x73ffdd1b;

		constexpr static std::string_view LinkedDimensionPortal_type_name = "LinkedDimensionPortal";
		constexpr static rivet::rivet_type_id LinkedDimensionPortal_type_id = 0xcfd598d3;
		constexpr static std::string_view MaterialConstantName_type_name = "MaterialConstantName";
		constexpr static rivet::rivet_type_id MaterialConstantName_type_id = 0xc71d22ab;
		constexpr static std::string_view MaterialConstantBlendTime_type_name = "MaterialConstantBlendTime";
		constexpr static rivet::rivet_type_id MaterialConstantBlendTime_type_id = 0x3bc0d913; 

		explicit DimensionFXPrius() = default;
		explicit DimensionFXPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		uint64_t LinkedDimensionPortal {};
		std::string_view MaterialConstantName {};
		float MaterialConstantBlendTime {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<DimensionFXPrius>;
	};
} // namespace rivet::ddl::generated

// clang-format on