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

#include <rivet/ddl/generated/enums/x4155b3ed.hpp> 

namespace rivet::ddl::generated {
	struct HoudiniHeightFieldScatterPerPointData;
	struct DDLVector2; 

	struct RIVET_DDL_SHARED HoudiniHeightFieldScatterData : rivet::structures::rivet_ddl_base {
		constexpr const static std::string_view type_name = "HoudiniHeightFieldScatterData";
		constexpr const static rivet::rivet_type_id type_id = 0x1450aaac;

		constexpr const static std::string_view ScatterMethod_type_name = "ScatterMethod";
		constexpr const static rivet::rivet_type_id ScatterMethod_type_id = 0xa083054e;
		constexpr const static std::string_view ParamCoverage_type_name = "ParamCoverage";
		constexpr const static rivet::rivet_type_id ParamCoverage_type_id = 0xc54b542f;
		constexpr const static std::string_view ParamDensity_type_name = "ParamDensity";
		constexpr const static rivet::rivet_type_id ParamDensity_type_id = 0x6d78cfd3;
		constexpr const static std::string_view ParamPerPointData_type_name = "ParamPerPointData";
		constexpr const static rivet::rivet_type_id ParamPerPointData_type_id = 0x1d58ddbc;
		constexpr const static std::string_view ParamTotalPointCount_type_name = "ParamTotalPointCount";
		constexpr const static rivet::rivet_type_id ParamTotalPointCount_type_id = 0x22a53f11;
		constexpr const static std::string_view OuterRadius_type_name = "OuterRadius";
		constexpr const static rivet::rivet_type_id OuterRadius_type_id = 0xf6b6fbde;
		constexpr const static std::string_view Falloff_type_name = "Falloff";
		constexpr const static rivet::rivet_type_id Falloff_type_id = 0x4e874fc0;
		constexpr const static std::string_view ScaleRange_type_name = "ScaleRange";
		constexpr const static rivet::rivet_type_id ScaleRange_type_id = 0xdc262fb8;
		constexpr const static std::string_view RelaxPoints_type_name = "RelaxPoints";
		constexpr const static rivet::rivet_type_id RelaxPoints_type_id = 0x9f9ea254;
		constexpr const static std::string_view RelaxParamIterations_type_name = "RelaxParamIterations";
		constexpr const static rivet::rivet_type_id RelaxParamIterations_type_id = 0x62245784;
		constexpr const static std::string_view RelaxParamAvoidLayerName_type_name = "RelaxParamAvoidLayerName";
		constexpr const static rivet::rivet_type_id RelaxParamAvoidLayerName_type_id = 0x41a03480;
		constexpr const static std::string_view SelfOverlap_type_name = "SelfOverlap";
		constexpr const static rivet::rivet_type_id SelfOverlap_type_id = 0x8874a285;
		constexpr const static std::string_view MatchDirectionWithSlope_type_name = "MatchDirectionWithSlope";
		constexpr const static rivet::rivet_type_id MatchDirectionWithSlope_type_id = 0x9d91a3b0;
		constexpr const static std::string_view MatchNormalsWithTerrain_type_name = "MatchNormalsWithTerrain";
		constexpr const static rivet::rivet_type_id MatchNormalsWithTerrain_type_id = 0x3047f72f;
		constexpr const static std::string_view RandomizeYaw_type_name = "RandomizeYaw";
		constexpr const static rivet::rivet_type_id RandomizeYaw_type_id = 0x8df0d9ae;
		constexpr const static std::string_view RandomizeUp_type_name = "RandomizeUp";
		constexpr const static rivet::rivet_type_id RandomizeUp_type_id = 0x3ed13496; 

		explicit HoudiniHeightFieldScatterData() = default;
		explicit HoudiniHeightFieldScatterData([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		rivet::ddl::generated::x4155b3ed ScatterMethod {};
		float ParamCoverage {};
		float ParamDensity {};
		std::shared_ptr<rivet::ddl::generated::HoudiniHeightFieldScatterPerPointData> ParamPerPointData {};
		int32_t ParamTotalPointCount {};
		float OuterRadius {};
		float Falloff {};
		std::shared_ptr<rivet::ddl::generated::DDLVector2> ScaleRange {};
		bool RelaxPoints {};
		int32_t RelaxParamIterations {};
		std::string_view RelaxParamAvoidLayerName {};
		bool SelfOverlap {};
		bool MatchDirectionWithSlope {};
		bool MatchNormalsWithTerrain {};
		float RandomizeYaw {};
		float RandomizeUp {}; 

		auto
		get_type_id() const noexcept -> rivet::rivet_type_id override;

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<HoudiniHeightFieldScatterData>;
	};
} // namespace rivet::ddl::generated

// clang-format on