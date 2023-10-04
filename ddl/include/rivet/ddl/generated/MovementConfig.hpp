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

#include <rivet/ddl/generated/enums/xe8421db7.hpp> 

namespace rivet::ddl::generated {
	struct RIVET_DDL_SHARED MovementConfig : rivet::structures::rivet_ddl_base {
		constexpr const static std::string_view type_name = "MovementConfig";
		constexpr const static rivet::rivet_type_id type_id = 0xf6fce067;

		constexpr const static std::string_view Style_type_name = "Style";
		constexpr const static rivet::rivet_type_id Style_type_id = 0x2aee74ab;
		constexpr const static std::string_view UseAnimNormalSpeed_type_name = "UseAnimNormalSpeed";
		constexpr const static rivet::rivet_type_id UseAnimNormalSpeed_type_id = 0xfe750a77;
		constexpr const static std::string_view RandomizeSpeed_type_name = "RandomizeSpeed";
		constexpr const static rivet::rivet_type_id RandomizeSpeed_type_id = 0x20691301;
		constexpr const static std::string_view RandomizeSpeedMin_type_name = "RandomizeSpeedMin";
		constexpr const static rivet::rivet_type_id RandomizeSpeedMin_type_id = 0x3234705b;
		constexpr const static std::string_view RandomizeSpeedMax_type_name = "RandomizeSpeedMax";
		constexpr const static rivet::rivet_type_id RandomizeSpeedMax_type_id = 0xe394f02;
		constexpr const static std::string_view MinSpeed_type_name = "MinSpeed";
		constexpr const static rivet::rivet_type_id MinSpeed_type_id = 0xf0d89680;
		constexpr const static std::string_view NormalSpeed_type_name = "NormalSpeed";
		constexpr const static rivet::rivet_type_id NormalSpeed_type_id = 0xb9cf252;
		constexpr const static std::string_view MaxSpeed_type_name = "MaxSpeed";
		constexpr const static rivet::rivet_type_id MaxSpeed_type_id = 0x16b83961;
		constexpr const static std::string_view Accel_type_name = "Accel";
		constexpr const static rivet::rivet_type_id Accel_type_id = 0x44affa24;
		constexpr const static std::string_view Decel_type_name = "Decel";
		constexpr const static rivet::rivet_type_id Decel_type_id = 0xa9242a88;
		constexpr const static std::string_view NormalTurnSpeed_type_name = "NormalTurnSpeed";
		constexpr const static rivet::rivet_type_id NormalTurnSpeed_type_id = 0x1d2aba45;
		constexpr const static std::string_view MaxTurnSpeed_type_name = "MaxTurnSpeed";
		constexpr const static rivet::rivet_type_id MaxTurnSpeed_type_id = 0xf0a019d4; 

		explicit MovementConfig() = default;
		explicit MovementConfig([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		rivet::ddl::generated::xe8421db7 Style {};
		bool UseAnimNormalSpeed {};
		bool RandomizeSpeed {};
		float RandomizeSpeedMin {};
		float RandomizeSpeedMax {};
		float MinSpeed {};
		float NormalSpeed {};
		float MaxSpeed {};
		float Accel {};
		float Decel {};
		float NormalTurnSpeed {};
		float MaxTurnSpeed {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<MovementConfig>;
	};
} // namespace rivet::ddl::generated

// clang-format on
