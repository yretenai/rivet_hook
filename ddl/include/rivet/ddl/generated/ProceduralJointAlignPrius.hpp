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
	struct JointAlignEntry; 

	struct RIVET_DDL_SHARED ProceduralJointAlignPrius : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "ProceduralJointAlignPrius";
		constexpr static rivet::rivet_type_id type_id = 0x8658c4d8;

		constexpr static std::string_view MaxNumJoints_type_name = "MaxNumJoints";
		constexpr static rivet::rivet_type_id MaxNumJoints_type_id = 0x517a7e98;
		constexpr static std::string_view DoPositionalAdjustmentOnly_type_name = "DoPositionalAdjustmentOnly";
		constexpr static rivet::rivet_type_id DoPositionalAdjustmentOnly_type_id = 0x1f2ead5b;
		constexpr static std::string_view AutoWeightJointStart_type_name = "AutoWeightJointStart";
		constexpr static rivet::rivet_type_id AutoWeightJointStart_type_id = 0x303ec60e;
		constexpr static std::string_view AutoWeightJointEnd_type_name = "AutoWeightJointEnd";
		constexpr static rivet::rivet_type_id AutoWeightJointEnd_type_id = 0x5fb3a0be;
		constexpr static std::string_view JointData_type_name = "JointData";
		constexpr static rivet::rivet_type_id JointData_type_id = 0xa87590dd; 

		explicit ProceduralJointAlignPrius() = default;
		explicit ProceduralJointAlignPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		int32_t MaxNumJoints {};
		bool DoPositionalAdjustmentOnly {};
		std::string_view AutoWeightJointStart {};
		std::string_view AutoWeightJointEnd {};
		std::vector<std::shared_ptr<rivet::ddl::generated::JointAlignEntry>> JointData {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<ProceduralJointAlignPrius>;
	};
} // namespace rivet::ddl::generated

// clang-format on