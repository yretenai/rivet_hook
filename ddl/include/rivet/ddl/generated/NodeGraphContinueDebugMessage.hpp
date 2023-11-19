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
	struct RIVET_DDL_SHARED NodeGraphContinueDebugMessage : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "NodeGraphContinueDebugMessage";
		constexpr static rivet::rivet_type_id type_id = 0xc71fdf32;

		constexpr static std::string_view ActorContextId_type_name = "ActorContextId";
		constexpr static rivet::rivet_type_id ActorContextId_type_id = 0x55ffc909; 

		explicit NodeGraphContinueDebugMessage() = default;
		explicit NodeGraphContinueDebugMessage([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		uint32_t ActorContextId {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<NodeGraphContinueDebugMessage>;
	};
} // namespace rivet::ddl::generated

// clang-format on