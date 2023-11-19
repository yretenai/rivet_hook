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

#include <rivet/ddl/generated/enums/xe916d2e3.hpp> 

namespace rivet::ddl::generated {
	struct Cinematic2IdMapDef; 

	struct RIVET_DDL_SHARED Cinematic2PaneDef : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "Cinematic2PaneDef";
		constexpr static rivet::rivet_type_id type_id = 0xd9d61f51;

		constexpr static std::string_view Id_type_name = "Id";
		constexpr static rivet::rivet_type_id Id_type_id = 0x8a514a8d;
		constexpr static std::string_view PaneId_type_name = "PaneId";
		constexpr static rivet::rivet_type_id PaneId_type_id = 0xde4b640e;
		constexpr static std::string_view NearClipPlane_type_name = "NearClipPlane";
		constexpr static rivet::rivet_type_id NearClipPlane_type_id = 0xa4080ee4;
		constexpr static std::string_view FarClipPlane_type_name = "FarClipPlane";
		constexpr static rivet::rivet_type_id FarClipPlane_type_id = 0xafd55002;
		constexpr static std::string_view LodScaleMultiplier_type_name = "LodScaleMultiplier";
		constexpr static rivet::rivet_type_id LodScaleMultiplier_type_id = 0xdcd98a8d;
		constexpr static std::string_view ImpostorHQBaseDistance_type_name = "ImpostorHQBaseDistance";
		constexpr static rivet::rivet_type_id ImpostorHQBaseDistance_type_id = 0xe0979ab;
		constexpr static std::string_view CameraIds_type_name = "CameraIds";
		constexpr static rivet::rivet_type_id CameraIds_type_id = 0x185d3e89;
		constexpr static std::string_view LightGroupIds_type_name = "LightGroupIds";
		constexpr static rivet::rivet_type_id LightGroupIds_type_id = 0x4bf984fd; 

		explicit Cinematic2PaneDef() = default;
		explicit Cinematic2PaneDef([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		uint64_t Id {};
		rivet::ddl::generated::xe916d2e3 PaneId {};
		float NearClipPlane {};
		float FarClipPlane {};
		float LodScaleMultiplier {};
		float ImpostorHQBaseDistance {};
		std::vector<std::shared_ptr<rivet::ddl::generated::Cinematic2IdMapDef>> CameraIds {};
		std::vector<std::shared_ptr<rivet::ddl::generated::Cinematic2IdMapDef>> LightGroupIds {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<Cinematic2PaneDef>;
	};
} // namespace rivet::ddl::generated

// clang-format on