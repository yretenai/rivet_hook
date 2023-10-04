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
	struct RIVET_DDL_SHARED ShootAtCurveFiringEmitData : rivet::structures::rivet_ddl_base {
		constexpr const static std::string_view type_name = "ShootAtCurveFiringEmitData";
		constexpr const static rivet::rivet_type_id type_id = 0x1ca189c1;

		constexpr const static std::string_view PartialDriver_type_name = "PartialDriver";
		constexpr const static rivet::rivet_type_id PartialDriver_type_id = 0x677d5f23;
		constexpr const static std::string_view EmitLocator_type_name = "EmitLocator";
		constexpr const static rivet::rivet_type_id EmitLocator_type_id = 0x138c6595;
		constexpr const static std::string_view IsFullBodyAnim_type_name = "IsFullBodyAnim";
		constexpr const static rivet::rivet_type_id IsFullBodyAnim_type_id = 0x10cdb0b8; 

		explicit ShootAtCurveFiringEmitData() = default;
		explicit ShootAtCurveFiringEmitData([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::string_view PartialDriver {};
		std::string_view EmitLocator {};
		bool IsFullBodyAnim {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<ShootAtCurveFiringEmitData>;
	};
} // namespace rivet::ddl::generated

// clang-format on