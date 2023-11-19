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
	struct RIVET_DDL_SHARED PortalSettings : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "PortalSettings";
		constexpr static rivet::rivet_type_id type_id = 0x3be60a53;

		constexpr static std::string_view DebugDraw_type_name = "DebugDraw";
		constexpr static rivet::rivet_type_id DebugDraw_type_id = 0x6020521b;
		constexpr static std::string_view RenderPortals_type_name = "RenderPortals";
		constexpr static rivet::rivet_type_id RenderPortals_type_id = 0x8c124894;
		constexpr static std::string_view UpdatePortalRendering_type_name = "UpdatePortalRendering";
		constexpr static rivet::rivet_type_id UpdatePortalRendering_type_id = 0xec6cfcae;
		constexpr static std::string_view ResolutionMultiplier_type_name = "ResolutionMultiplier";
		constexpr static rivet::rivet_type_id ResolutionMultiplier_type_id = 0x6ff88051;
		constexpr static std::string_view CastUserDataCount_type_name = "CastUserDataCount";
		constexpr static rivet::rivet_type_id CastUserDataCount_type_id = 0x81b8b647;
		constexpr static std::string_view MaxPortalsToWarn_type_name = "MaxPortalsToWarn";
		constexpr static rivet::rivet_type_id MaxPortalsToWarn_type_id = 0x8086c714; 

		explicit PortalSettings() = default;
		explicit PortalSettings([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		bool DebugDraw {};
		bool RenderPortals {};
		bool UpdatePortalRendering {};
		float ResolutionMultiplier {};
		uint32_t CastUserDataCount {};
		uint32_t MaxPortalsToWarn {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<PortalSettings>;
	};
} // namespace rivet::ddl::generated

// clang-format on