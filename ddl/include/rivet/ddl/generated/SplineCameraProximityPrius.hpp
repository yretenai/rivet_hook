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

#include <rivet/ddl/generated/CameraPrius.hpp>
#include <rivet/ddl/generated/enums/x73a6f97a.hpp> 

namespace rivet::ddl::generated {
	struct DDLVector3;
	struct OffsetSplineData;
	struct CameraRotationInputData; 

	struct RIVET_DDL_SHARED SplineCameraProximityPrius : CameraPrius {
		constexpr const static std::string_view type_name = "SplineCameraProximityPrius";
		constexpr const static rivet::rivet_type_id type_id = 0x62f4eabc;

		constexpr const static std::string_view MotionSpline_type_name = "MotionSpline";
		constexpr const static rivet::rivet_type_id MotionSpline_type_id = 0x93329739;
		constexpr const static std::string_view ProximityTarget_type_name = "ProximityTarget";
		constexpr const static rivet::rivet_type_id ProximityTarget_type_id = 0x8c0b1736;
		constexpr const static std::string_view LookTarget_type_name = "LookTarget";
		constexpr const static rivet::rivet_type_id LookTarget_type_id = 0xc6bda5;
		constexpr const static std::string_view LookMode_type_name = "LookMode";
		constexpr const static rivet::rivet_type_id LookMode_type_id = 0x646527bb;
		constexpr const static std::string_view TargetOffset_type_name = "TargetOffset";
		constexpr const static rivet::rivet_type_id TargetOffset_type_id = 0xabbb80f6;
		constexpr const static std::string_view OffsetData_type_name = "OffsetData";
		constexpr const static rivet::rivet_type_id OffsetData_type_id = 0x84c3a9b1;
		constexpr const static std::string_view RotationInput_type_name = "RotationInput";
		constexpr const static rivet::rivet_type_id RotationInput_type_id = 0x329d413f; 

		explicit SplineCameraProximityPrius() = default;
		explicit SplineCameraProximityPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		uint64_t MotionSpline {};
		uint64_t ProximityTarget {};
		uint64_t LookTarget {};
		rivet::ddl::generated::x73a6f97a LookMode {};
		std::shared_ptr<rivet::ddl::generated::DDLVector3> TargetOffset {};
		std::shared_ptr<rivet::ddl::generated::OffsetSplineData> OffsetData {};
		std::shared_ptr<rivet::ddl::generated::CameraRotationInputData> RotationInput {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<SplineCameraProximityPrius>;
	};
} // namespace rivet::ddl::generated

// clang-format on
