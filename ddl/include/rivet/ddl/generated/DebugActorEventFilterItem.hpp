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
	struct RIVET_DDL_SHARED DebugActorEventFilterItem : rivet::structures::rivet_ddl_base {
		constexpr const static std::string_view type_name = "DebugActorEventFilterItem";
		constexpr const static rivet::rivet_type_id type_id = 0x1b5447ac;

		constexpr const static std::string_view EventItem_type_name = "EventItem";
		constexpr const static rivet::rivet_type_id EventItem_type_id = 0x6170c905; 

		explicit DebugActorEventFilterItem() = default;
		explicit DebugActorEventFilterItem([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::optional<std::vector<rivet::structures::rivet_serialized_value>> EventItem {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<DebugActorEventFilterItem>;
	};
} // namespace rivet::ddl::generated

// clang-format on
