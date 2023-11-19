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
	struct RegionNamedLink;
	struct Region2DMapOverlay; 

	struct RIVET_DDL_SHARED RegionAuxInstanceUnit : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "RegionAuxInstanceUnit";
		constexpr static rivet::rivet_type_id type_id = 0x25a9c1fc;

		constexpr static std::string_view MapOverlay_type_name = "MapOverlay";
		constexpr static rivet::rivet_type_id MapOverlay_type_id = 0x10c367a4;
		constexpr static std::string_view Zones_type_name = "Zones";
		constexpr static rivet::rivet_type_id Zones_type_id = 0x9c997da9;
		constexpr static std::string_view NamedLinks_type_name = "NamedLinks";
		constexpr static rivet::rivet_type_id NamedLinks_type_id = 0x6bee750e; 

		explicit RegionAuxInstanceUnit() = default;
		explicit RegionAuxInstanceUnit([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::shared_ptr<rivet::ddl::generated::Region2DMapOverlay> MapOverlay {};
		std::vector<std::string_view> Zones {};
		std::vector<std::shared_ptr<rivet::ddl::generated::RegionNamedLink>> NamedLinks {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<RegionAuxInstanceUnit>;
	};
} // namespace rivet::ddl::generated

// clang-format on