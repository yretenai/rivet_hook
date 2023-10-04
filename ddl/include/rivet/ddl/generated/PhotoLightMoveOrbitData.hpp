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
	struct RIVET_DDL_SHARED PhotoLightMoveOrbitData : rivet::structures::rivet_ddl_base {
		constexpr const static std::string_view type_name = "PhotoLightMoveOrbitData";
		constexpr const static rivet::rivet_type_id type_id = 0x471d75f4;

		constexpr const static std::string_view MinDistance_type_name = "MinDistance";
		constexpr const static rivet::rivet_type_id MinDistance_type_id = 0x448e693a;
		constexpr const static std::string_view MaxDistance_type_name = "MaxDistance";
		constexpr const static rivet::rivet_type_id MaxDistance_type_id = 0x88831235;
		constexpr const static std::string_view MinHeight_type_name = "MinHeight";
		constexpr const static rivet::rivet_type_id MinHeight_type_id = 0x9ed620e3;
		constexpr const static std::string_view MaxHeight_type_name = "MaxHeight";
		constexpr const static rivet::rivet_type_id MaxHeight_type_id = 0x493d92a2;
		constexpr const static std::string_view OrbitRateScale_type_name = "OrbitRateScale";
		constexpr const static rivet::rivet_type_id OrbitRateScale_type_id = 0x780e5b22;
		constexpr const static std::string_view UpDownScale_type_name = "UpDownScale";
		constexpr const static rivet::rivet_type_id UpDownScale_type_id = 0xe5460610;
		constexpr const static std::string_view NearFarScale_type_name = "NearFarScale";
		constexpr const static rivet::rivet_type_id NearFarScale_type_id = 0xd7b722f2;
		constexpr const static std::string_view StartMoveScale_type_name = "StartMoveScale";
		constexpr const static rivet::rivet_type_id StartMoveScale_type_id = 0x9f89367a;
		constexpr const static std::string_view FinalMoveScale_type_name = "FinalMoveScale";
		constexpr const static rivet::rivet_type_id FinalMoveScale_type_id = 0xff4a5e78;
		constexpr const static std::string_view MoveScaleTime_type_name = "MoveScaleTime";
		constexpr const static rivet::rivet_type_id MoveScaleTime_type_id = 0xfa31f80b; 

		explicit PhotoLightMoveOrbitData() = default;
		explicit PhotoLightMoveOrbitData([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		float MinDistance {};
		float MaxDistance {};
		float MinHeight {};
		float MaxHeight {};
		float OrbitRateScale {};
		float UpDownScale {};
		float NearFarScale {};
		float StartMoveScale {};
		float FinalMoveScale {};
		float MoveScaleTime {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<PhotoLightMoveOrbitData>;
	};
} // namespace rivet::ddl::generated

// clang-format on