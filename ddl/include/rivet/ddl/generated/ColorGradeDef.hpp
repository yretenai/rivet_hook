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
	struct ColorGradeVibranceOpDef;
	struct ColorGradeHueSatOpDef;
	struct ColorGradeCurvesOpDef;
	struct ColorGradeSolidOpDef; 

	struct RIVET_DDL_SHARED ColorGradeDef : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "ColorGradeDef";
		constexpr static rivet::rivet_type_id type_id = 0x4d002f89;

		constexpr static std::string_view SolidOps_type_name = "SolidOps";
		constexpr static rivet::rivet_type_id SolidOps_type_id = 0x2a7e1a2;
		constexpr static std::string_view HueSatOps_type_name = "HueSatOps";
		constexpr static rivet::rivet_type_id HueSatOps_type_id = 0xe991d44a;
		constexpr static std::string_view CurvesOps_type_name = "CurvesOps";
		constexpr static rivet::rivet_type_id CurvesOps_type_id = 0xf68be22b;
		constexpr static std::string_view VibranceOps_type_name = "VibranceOps";
		constexpr static rivet::rivet_type_id VibranceOps_type_id = 0x117ed8a8;
		constexpr static std::string_view OpOrder_type_name = "OpOrder";
		constexpr static rivet::rivet_type_id OpOrder_type_id = 0x1890c60a; 

		explicit ColorGradeDef() = default;
		explicit ColorGradeDef([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::vector<std::shared_ptr<rivet::ddl::generated::ColorGradeSolidOpDef>> SolidOps {};
		std::vector<std::shared_ptr<rivet::ddl::generated::ColorGradeHueSatOpDef>> HueSatOps {};
		std::vector<std::shared_ptr<rivet::ddl::generated::ColorGradeCurvesOpDef>> CurvesOps {};
		std::vector<std::shared_ptr<rivet::ddl::generated::ColorGradeVibranceOpDef>> VibranceOps {};
		std::vector<uint64_t> OpOrder {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<ColorGradeDef>;
	};
} // namespace rivet::ddl::generated

// clang-format on