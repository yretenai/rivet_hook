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

#include <rivet/ddl/generated/EventBase.hpp> 

namespace rivet::ddl::generated {
	struct RIVET_DDL_SHARED OnStartOpenEvent : EventBase {
		constexpr static std::string_view type_name = "OnStartOpenEvent";
		constexpr static rivet::rivet_type_id type_id = 0x42f93cd;

		constexpr static std::string_view SourceSyncId_type_name = "SourceSyncId";
		constexpr static rivet::rivet_type_id SourceSyncId_type_id = 0xe5a8f223; 

		explicit OnStartOpenEvent() = default;
		explicit OnStartOpenEvent([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		uint64_t SourceSyncId {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<OnStartOpenEvent>;
	};
} // namespace rivet::ddl::generated

// clang-format on