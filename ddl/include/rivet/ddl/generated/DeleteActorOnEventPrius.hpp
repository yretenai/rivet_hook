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
	struct EventBase; 

	struct RIVET_DDL_SHARED DeleteActorOnEventPrius : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "DeleteActorOnEventPrius";
		constexpr static rivet::rivet_type_id type_id = 0x88cd5e67;

		constexpr static std::string_view ListenEvent_type_name = "ListenEvent";
		constexpr static rivet::rivet_type_id ListenEvent_type_id = 0xa76e74de;
		constexpr static std::string_view Kill_type_name = "Kill";
		constexpr static rivet::rivet_type_id Kill_type_id = 0x37b996d9; 

		explicit DeleteActorOnEventPrius() = default;
		explicit DeleteActorOnEventPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::shared_ptr<rivet::ddl::generated::EventBase> ListenEvent {};
		bool Kill {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<DeleteActorOnEventPrius>;
	};
} // namespace rivet::ddl::generated

// clang-format on