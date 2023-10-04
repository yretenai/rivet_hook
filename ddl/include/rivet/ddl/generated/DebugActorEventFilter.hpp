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
	struct DebugActorEventFilterItem; 

	struct RIVET_DDL_SHARED DebugActorEventFilter : rivet::structures::rivet_ddl_base {
		constexpr const static std::string_view type_name = "DebugActorEventFilter";
		constexpr const static rivet::rivet_type_id type_id = 0x539237af;

		constexpr const static std::string_view FilterName_type_name = "FilterName";
		constexpr const static rivet::rivet_type_id FilterName_type_id = 0x8f981729;
		constexpr const static std::string_view DefaultOn_type_name = "DefaultOn";
		constexpr const static rivet::rivet_type_id DefaultOn_type_id = 0x186fa8e8;
		constexpr const static std::string_view IsInclude_type_name = "IsInclude";
		constexpr const static rivet::rivet_type_id IsInclude_type_id = 0x9497a047;
		constexpr const static std::string_view EventList_type_name = "EventList";
		constexpr const static rivet::rivet_type_id EventList_type_id = 0x3aa31403; 

		explicit DebugActorEventFilter() = default;
		explicit DebugActorEventFilter([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::string_view FilterName {};
		bool DefaultOn {};
		bool IsInclude {};
		std::vector<std::shared_ptr<rivet::ddl::generated::DebugActorEventFilterItem>> EventList {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<DebugActorEventFilter>;
	};
} // namespace rivet::ddl::generated

// clang-format on
