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
	struct RIVET_DDL_SHARED MissionOrderListBase : rivet::structures::rivet_ddl_base {
		constexpr const static std::string_view type_name = "MissionOrderListBase";
		constexpr const static rivet::rivet_type_id type_id = 0x5effcc35;

		constexpr const static std::string_view MissionOrderListId_type_name = "MissionOrderListId";
		constexpr const static rivet::rivet_type_id MissionOrderListId_type_id = 0x12518503;
		constexpr const static std::string_view MissionOrderConfigs_type_name = "MissionOrderConfigs";
		constexpr const static rivet::rivet_type_id MissionOrderConfigs_type_id = 0x1066a49; 

		explicit MissionOrderListBase() = default;
		explicit MissionOrderListBase([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::string_view MissionOrderListId {};
		std::vector<std::string_view> MissionOrderConfigs {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<MissionOrderListBase>;
	};
} // namespace rivet::ddl::generated

// clang-format on
