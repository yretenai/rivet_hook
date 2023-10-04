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

#include <rivet/ddl/generated/ConfigBase.hpp> 

namespace rivet::ddl::generated {
	struct DebugGraphList_Tools; 

	struct RIVET_DDL_SHARED ObjectiveSystemConfig_Tools : ConfigBase {
		constexpr const static std::string_view type_name = "ObjectiveSystemConfig_Tools";
		constexpr const static rivet::rivet_type_id type_id = 0x5d42736;

		constexpr const static std::string_view DebugGraphList_type_name = "DebugGraphList";
		constexpr const static rivet::rivet_type_id DebugGraphList_type_id = 0x63f0f436; 

		explicit ObjectiveSystemConfig_Tools() = default;
		explicit ObjectiveSystemConfig_Tools([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::shared_ptr<rivet::ddl::generated::DebugGraphList_Tools> DebugGraphList {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<ObjectiveSystemConfig_Tools>;
	};
} // namespace rivet::ddl::generated

// clang-format on
