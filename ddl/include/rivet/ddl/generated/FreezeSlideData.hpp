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
	struct RIVET_DDL_SHARED FreezeSlideData : rivet::structures::rivet_ddl_base {
		constexpr const static std::string_view type_name = "FreezeSlideData";
		constexpr const static rivet::rivet_type_id type_id = 0xb1475c4;

		constexpr const static std::string_view DirectHitSpeed_type_name = "DirectHitSpeed";
		constexpr const static rivet::rivet_type_id DirectHitSpeed_type_id = 0x9db9e90a;
		constexpr const static std::string_view MinSpeed_type_name = "MinSpeed";
		constexpr const static rivet::rivet_type_id MinSpeed_type_id = 0xf0d89680;
		constexpr const static std::string_view HitDistanceForMinSpeed_type_name = "HitDistanceForMinSpeed";
		constexpr const static rivet::rivet_type_id HitDistanceForMinSpeed_type_id = 0x4ee426fe;
		constexpr const static std::string_view MaxSpeed_type_name = "MaxSpeed";
		constexpr const static rivet::rivet_type_id MaxSpeed_type_id = 0x16b83961;
		constexpr const static std::string_view HitDistanceForMaxSpeed_type_name = "HitDistanceForMaxSpeed";
		constexpr const static rivet::rivet_type_id HitDistanceForMaxSpeed_type_id = 0xa884891f;
		constexpr const static std::string_view SpeedFallOffPower_type_name = "SpeedFallOffPower";
		constexpr const static rivet::rivet_type_id SpeedFallOffPower_type_id = 0x8a9a09b7;
		constexpr const static std::string_view FrictionlessDuration_type_name = "FrictionlessDuration";
		constexpr const static rivet::rivet_type_id FrictionlessDuration_type_id = 0x63627c34;
		constexpr const static std::string_view Decel_type_name = "Decel";
		constexpr const static rivet::rivet_type_id Decel_type_id = 0xa9242a88;
		constexpr const static std::string_view MinRotation_type_name = "MinRotation";
		constexpr const static rivet::rivet_type_id MinRotation_type_id = 0x71606b4a;
		constexpr const static std::string_view MaxRotation_type_name = "MaxRotation";
		constexpr const static rivet::rivet_type_id MaxRotation_type_id = 0xbd6d1045;
		constexpr const static std::string_view RotationDecel_type_name = "RotationDecel";
		constexpr const static rivet::rivet_type_id RotationDecel_type_id = 0x5ac295a1; 

		explicit FreezeSlideData() = default;
		explicit FreezeSlideData([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		float DirectHitSpeed {};
		float MinSpeed {};
		float HitDistanceForMinSpeed {};
		float MaxSpeed {};
		float HitDistanceForMaxSpeed {};
		float SpeedFallOffPower {};
		float FrictionlessDuration {};
		float Decel {};
		float MinRotation {};
		float MaxRotation {};
		float RotationDecel {}; 

		auto
		get_type_id() const noexcept -> rivet::rivet_type_id override;

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<FreezeSlideData>;
	};
} // namespace rivet::ddl::generated

// clang-format on