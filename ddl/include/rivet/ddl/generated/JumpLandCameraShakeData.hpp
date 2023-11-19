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
	struct CameraShakingWithFallOffData; 

	struct RIVET_DDL_SHARED JumpLandCameraShakeData : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "JumpLandCameraShakeData";
		constexpr static rivet::rivet_type_id type_id = 0xaa457e22;

		constexpr static std::string_view ShakeWithFallOffData_type_name = "ShakeWithFallOffData";
		constexpr static rivet::rivet_type_id ShakeWithFallOffData_type_id = 0xaf3535af;
		constexpr static std::string_view MinShakeLandSpeed_type_name = "MinShakeLandSpeed";
		constexpr static rivet::rivet_type_id MinShakeLandSpeed_type_id = 0x367cebdf;
		constexpr static std::string_view MaxShakeLandSpeed_type_name = "MaxShakeLandSpeed";
		constexpr static rivet::rivet_type_id MaxShakeLandSpeed_type_id = 0x23f73f2d;
		constexpr static std::string_view MinShakeIntensityScale_type_name = "MinShakeIntensityScale";
		constexpr static rivet::rivet_type_id MinShakeIntensityScale_type_id = 0x3c351455;
		constexpr static std::string_view MaxShakeIntensityScale_type_name = "MaxShakeIntensityScale";
		constexpr static rivet::rivet_type_id MaxShakeIntensityScale_type_id = 0x7d222bd3; 

		explicit JumpLandCameraShakeData() = default;
		explicit JumpLandCameraShakeData([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::shared_ptr<rivet::ddl::generated::CameraShakingWithFallOffData> ShakeWithFallOffData {};
		float MinShakeLandSpeed {};
		float MaxShakeLandSpeed {};
		float MinShakeIntensityScale {};
		float MaxShakeIntensityScale {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<JumpLandCameraShakeData>;
	};
} // namespace rivet::ddl::generated

// clang-format on