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
#include <rivet/ddl/generated/enums/xde534179.hpp> 

namespace rivet::ddl::generated {
	struct CameraRotationInputData; 

	struct RIVET_DDL_SHARED DualSplineCameraProximityPrius : CameraPrius {
		constexpr const static std::string_view type_name = "DualSplineCameraProximityPrius";
		constexpr const static rivet::rivet_type_id type_id = 0xfebcfcdb;

		constexpr const static std::string_view MotionSpline_type_name = "MotionSpline";
		constexpr const static rivet::rivet_type_id MotionSpline_type_id = 0x93329739;
		constexpr const static std::string_view TargetSpline_type_name = "TargetSpline";
		constexpr const static rivet::rivet_type_id TargetSpline_type_id = 0xc7471fcf;
		constexpr const static std::string_view TargetActor_type_name = "TargetActor";
		constexpr const static rivet::rivet_type_id TargetActor_type_id = 0x98554e8c;
		constexpr const static std::string_view MotionMode_type_name = "MotionMode";
		constexpr const static rivet::rivet_type_id MotionMode_type_id = 0x6057228c;
		constexpr const static std::string_view RotationInput_type_name = "RotationInput";
		constexpr const static rivet::rivet_type_id RotationInput_type_id = 0x329d413f; 

		explicit DualSplineCameraProximityPrius() = default;
		explicit DualSplineCameraProximityPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		uint64_t MotionSpline {};
		uint64_t TargetSpline {};
		uint64_t TargetActor {};
		rivet::ddl::generated::xde534179 MotionMode {};
		std::shared_ptr<rivet::ddl::generated::CameraRotationInputData> RotationInput {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<DualSplineCameraProximityPrius>;
	};
} // namespace rivet::ddl::generated

// clang-format on
