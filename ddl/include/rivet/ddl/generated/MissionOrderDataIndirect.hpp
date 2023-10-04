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
	struct MissionOrderDataBase; 

	struct RIVET_DDL_SHARED MissionOrderDataIndirect : rivet::structures::rivet_ddl_base {
		constexpr const static std::string_view type_name = "MissionOrderDataIndirect";
		constexpr const static rivet::rivet_type_id type_id = 0x1e6032ca;

		constexpr const static std::string_view MissionOrderData_type_name = "MissionOrderData";
		constexpr const static rivet::rivet_type_id MissionOrderData_type_id = 0xe634377d; 

		explicit MissionOrderDataIndirect() = default;
		explicit MissionOrderDataIndirect([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::shared_ptr<rivet::ddl::generated::MissionOrderDataBase> MissionOrderData {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<MissionOrderDataIndirect>;
	};
} // namespace rivet::ddl::generated

// clang-format on