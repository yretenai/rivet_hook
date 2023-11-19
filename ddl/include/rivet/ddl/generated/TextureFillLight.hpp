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

	struct RIVET_DDL_SHARED TextureFillLight : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "TextureFillLight";
		constexpr static rivet::rivet_type_id type_id = 0x64ba71a3;

		constexpr static std::string_view FillLightColor_type_name = "FillLightColor";
		constexpr static rivet::rivet_type_id FillLightColor_type_id = 0xee3b1dea;
		constexpr static std::string_view FillLightIntensity_type_name = "FillLightIntensity";
		constexpr static rivet::rivet_type_id FillLightIntensity_type_id = 0x83043ac3;
		constexpr static std::string_view FillLightSpecIntensity_type_name = "FillLightSpecIntensity";
		constexpr static rivet::rivet_type_id FillLightSpecIntensity_type_id = 0x15a585e7;
		constexpr static std::string_view FillLightAzimuth_type_name = "FillLightAzimuth";
		constexpr static rivet::rivet_type_id FillLightAzimuth_type_id = 0x6c8f1f63;
		constexpr static std::string_view FillLightElevation_type_name = "FillLightElevation";
		constexpr static rivet::rivet_type_id FillLightElevation_type_id = 0x569cc8d0; 

		explicit TextureFillLight() = default;
		explicit TextureFillLight([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::shared_ptr<rivet::ddl::generated::DDLVector3> FillLightColor {};
		float FillLightIntensity {};
		float FillLightSpecIntensity {};
		float FillLightAzimuth {};
		float FillLightElevation {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<TextureFillLight>;
	};
} // namespace rivet::ddl::generated

// clang-format on