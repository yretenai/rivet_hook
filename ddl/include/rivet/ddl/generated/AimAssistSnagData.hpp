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
	struct RIVET_DDL_SHARED AimAssistSnagData : rivet::structures::rivet_ddl_base {
		constexpr const static std::string_view type_name = "AimAssistSnagData";
		constexpr const static rivet::rivet_type_id type_id = 0xf96a9ac8;

		constexpr const static std::string_view Enable_type_name = "Enable";
		constexpr const static rivet::rivet_type_id Enable_type_id = 0xcdd88655;
		constexpr const static std::string_view OnFactor_type_name = "OnFactor";
		constexpr const static rivet::rivet_type_id OnFactor_type_id = 0x1637af23;
		constexpr const static std::string_view OffFactorSame_type_name = "OffFactorSame";
		constexpr const static rivet::rivet_type_id OffFactorSame_type_id = 0xffe900c9;
		constexpr const static std::string_view OffFactorNew_type_name = "OffFactorNew";
		constexpr const static rivet::rivet_type_id OffFactorNew_type_id = 0x6b9ab5e1;
		constexpr const static std::string_view SpeedUp_type_name = "SpeedUp";
		constexpr const static rivet::rivet_type_id SpeedUp_type_id = 0xcf193fec;
		constexpr const static std::string_view SpeedDown_type_name = "SpeedDown";
		constexpr const static rivet::rivet_type_id SpeedDown_type_id = 0x7106291d;
		constexpr const static std::string_view StickMin_type_name = "StickMin";
		constexpr const static rivet::rivet_type_id StickMin_type_id = 0xdee2a17d;
		constexpr const static std::string_view StickMax_type_name = "StickMax";
		constexpr const static rivet::rivet_type_id StickMax_type_id = 0xe2ef9e24;
		constexpr const static std::string_view SnagMin_type_name = "SnagMin";
		constexpr const static rivet::rivet_type_id SnagMin_type_id = 0x172c0bbf;
		constexpr const static std::string_view SnagMax_type_name = "SnagMax";
		constexpr const static rivet::rivet_type_id SnagMax_type_id = 0x2b2134e6; 

		explicit AimAssistSnagData() = default;
		explicit AimAssistSnagData([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		bool Enable {};
		float OnFactor {};
		float OffFactorSame {};
		float OffFactorNew {};
		float SpeedUp {};
		float SpeedDown {};
		float StickMin {};
		float StickMax {};
		float SnagMin {};
		float SnagMax {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<AimAssistSnagData>;
	};
} // namespace rivet::ddl::generated

// clang-format on
