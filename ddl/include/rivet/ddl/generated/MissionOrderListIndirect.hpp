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
	struct MissionOrderListBase; 

	struct RIVET_DDL_SHARED MissionOrderListIndirect : rivet::structures::rivet_ddl_base {
		constexpr const static std::string_view type_name = "MissionOrderListIndirect";
		constexpr const static rivet::rivet_type_id type_id = 0xa624b936;

		constexpr const static std::string_view MissionOrderList_type_name = "MissionOrderList";
		constexpr const static rivet::rivet_type_id MissionOrderList_type_id = 0xf0f3c06; 

		explicit MissionOrderListIndirect() = default;
		explicit MissionOrderListIndirect([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::shared_ptr<rivet::ddl::generated::MissionOrderListBase> MissionOrderList {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<MissionOrderListIndirect>;
	};
} // namespace rivet::ddl::generated

// clang-format on
