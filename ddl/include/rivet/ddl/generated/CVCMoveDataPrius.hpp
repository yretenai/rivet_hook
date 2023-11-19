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
	struct RIVET_DDL_SHARED CVCMoveDataPrius : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "CVCMoveDataPrius";
		constexpr static rivet::rivet_type_id type_id = 0xcc681e8d;

		constexpr static std::string_view Radius_type_name = "Radius";
		constexpr static rivet::rivet_type_id Radius_type_id = 0x504203d;
		constexpr static std::string_view HeightUp_type_name = "HeightUp";
		constexpr static rivet::rivet_type_id HeightUp_type_id = 0x7be988d7;
		constexpr static std::string_view HeightDown_type_name = "HeightDown";
		constexpr static rivet::rivet_type_id HeightDown_type_id = 0x18b154fa;
		constexpr static std::string_view PushValue_type_name = "PushValue";
		constexpr static rivet::rivet_type_id PushValue_type_id = 0x5354102f;
		constexpr static std::string_view PushOnEqual_type_name = "PushOnEqual";
		constexpr static rivet::rivet_type_id PushOnEqual_type_id = 0x6bcc1e52;
		constexpr static std::string_view FullSpeedDeflection_type_name = "FullSpeedDeflection";
		constexpr static rivet::rivet_type_id FullSpeedDeflection_type_id = 0x6e2a1af2;
		constexpr static std::string_view SoftRadiusInner_type_name = "SoftRadiusInner";
		constexpr static rivet::rivet_type_id SoftRadiusInner_type_id = 0x19e2d4c8;
		constexpr static std::string_view SoftRadiusOuter_type_name = "SoftRadiusOuter";
		constexpr static rivet::rivet_type_id SoftRadiusOuter_type_id = 0xbd750;
		constexpr static std::string_view AllowSoftCollisions_type_name = "AllowSoftCollisions";
		constexpr static rivet::rivet_type_id AllowSoftCollisions_type_id = 0xa60463e3;
		constexpr static std::string_view ApplyActorScale_type_name = "ApplyActorScale";
		constexpr static rivet::rivet_type_id ApplyActorScale_type_id = 0x3b6cec91; 

		explicit CVCMoveDataPrius() = default;
		explicit CVCMoveDataPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		float Radius {};
		float HeightUp {};
		float HeightDown {};
		float PushValue {};
		bool PushOnEqual {};
		bool FullSpeedDeflection {};
		float SoftRadiusInner {};
		float SoftRadiusOuter {};
		bool AllowSoftCollisions {};
		bool ApplyActorScale {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<CVCMoveDataPrius>;
	};
} // namespace rivet::ddl::generated

// clang-format on