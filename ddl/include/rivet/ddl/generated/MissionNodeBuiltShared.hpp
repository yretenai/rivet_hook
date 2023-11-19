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
	struct RIVET_DDL_SHARED MissionNodeBuiltShared : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "MissionNodeBuiltShared";
		constexpr static rivet::rivet_type_id type_id = 0x35f1e769;

		constexpr static std::string_view MissionName_type_name = "MissionName";
		constexpr static rivet::rivet_type_id MissionName_type_id = 0xa5c30e60;
		constexpr static std::string_view AllowAvailable_type_name = "AllowAvailable";
		constexpr static rivet::rivet_type_id AllowAvailable_type_id = 0x3dee6a87;
		constexpr static std::string_view ObjectiveGraph_type_name = "ObjectiveGraph";
		constexpr static rivet::rivet_type_id ObjectiveGraph_type_id = 0x55ff52bd; 

		explicit MissionNodeBuiltShared() = default;
		explicit MissionNodeBuiltShared([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::string_view MissionName {};
		bool AllowAvailable {};
		std::string_view ObjectiveGraph {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<MissionNodeBuiltShared>;
	};
} // namespace rivet::ddl::generated

// clang-format on