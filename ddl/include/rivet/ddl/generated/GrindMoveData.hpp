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
	struct RIVET_DDL_SHARED GrindMoveData : rivet::structures::rivet_ddl_base {
		constexpr const static std::string_view type_name = "GrindMoveData";
		constexpr const static rivet::rivet_type_id type_id = 0x18e553c;

		constexpr const static std::string_view SpeedDefault_type_name = "SpeedDefault";
		constexpr const static rivet::rivet_type_id SpeedDefault_type_id = 0xd1b9bcbb;
		constexpr const static std::string_view Accel_type_name = "Accel";
		constexpr const static rivet::rivet_type_id Accel_type_id = 0x44affa24;
		constexpr const static std::string_view Decel_type_name = "Decel";
		constexpr const static rivet::rivet_type_id Decel_type_id = 0xa9242a88; 

		explicit GrindMoveData() = default;
		explicit GrindMoveData([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		float SpeedDefault {};
		float Accel {};
		float Decel {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<GrindMoveData>;
	};
} // namespace rivet::ddl::generated

// clang-format on