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

#include <rivet/ddl/generated/WeaponGamePrius.hpp> 

namespace rivet::ddl::generated {
	struct RIVET_DDL_SHARED WeaponPlasmaStrikerPrius : WeaponGamePrius {
		constexpr const static std::string_view type_name = "WeaponPlasmaStrikerPrius";
		constexpr const static rivet::rivet_type_id type_id = 0xa2a27f8d;

		constexpr const static std::string_view ScopeOverlayActor_type_name = "ScopeOverlayActor";
		constexpr const static rivet::rivet_type_id ScopeOverlayActor_type_id = 0x30af9095;
		constexpr const static std::string_view WeakspotActor_type_name = "WeakspotActor";
		constexpr const static rivet::rivet_type_id WeakspotActor_type_id = 0x3483e017; 

		explicit WeaponPlasmaStrikerPrius() = default;
		explicit WeaponPlasmaStrikerPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::string_view ScopeOverlayActor {};
		std::string_view WeakspotActor {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<WeaponPlasmaStrikerPrius>;
	};
} // namespace rivet::ddl::generated

// clang-format on
