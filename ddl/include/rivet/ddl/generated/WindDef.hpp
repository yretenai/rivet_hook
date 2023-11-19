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
	struct WindMinMax; 

	struct RIVET_DDL_SHARED WindDef : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "WindDef";
		constexpr static rivet::rivet_type_id type_id = 0xc33cdb9a;

		constexpr static std::string_view Enabled_type_name = "Enabled";
		constexpr static rivet::rivet_type_id Enabled_type_id = 0x5113d8bc;
		constexpr static std::string_view Intensity_type_name = "Intensity";
		constexpr static rivet::rivet_type_id Intensity_type_id = 0x6b4f279e;
		constexpr static std::string_view Azimuth_type_name = "Azimuth";
		constexpr static rivet::rivet_type_id Azimuth_type_id = 0x1c901071;
		constexpr static std::string_view WindGustsIntensity_type_name = "WindGustsIntensity";
		constexpr static rivet::rivet_type_id WindGustsIntensity_type_id = 0x227786e4;
		constexpr static std::string_view WindGustsFrequency_type_name = "WindGustsFrequency";
		constexpr static rivet::rivet_type_id WindGustsFrequency_type_id = 0xedba8665;
		constexpr static std::string_view WindGustsDuration_type_name = "WindGustsDuration";
		constexpr static rivet::rivet_type_id WindGustsDuration_type_id = 0x2db80a56; 

		explicit WindDef() = default;
		explicit WindDef([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		bool Enabled {};
		float Intensity {};
		float Azimuth {};
		std::shared_ptr<rivet::ddl::generated::WindMinMax> WindGustsIntensity {};
		std::shared_ptr<rivet::ddl::generated::WindMinMax> WindGustsFrequency {};
		std::shared_ptr<rivet::ddl::generated::WindMinMax> WindGustsDuration {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<WindDef>;
	};
} // namespace rivet::ddl::generated

// clang-format on