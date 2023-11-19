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

#include <rivet/ddl/generated/enums/ImpostorHQType.hpp>
#include <rivet/ddl/generated/enums/DoubleSidedType.hpp> 

namespace rivet::ddl::generated {
	struct RIVET_DDL_SHARED MaterialMap : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "MaterialMap";
		constexpr static rivet::rivet_type_id type_id = 0xa375d4df;

		constexpr static std::string_view MaterialMappingName_type_name = "MaterialMappingName";
		constexpr static rivet::rivet_type_id MaterialMappingName_type_id = 0x981e6927;
		constexpr static std::string_view AssetMaterialName_type_name = "AssetMaterialName";
		constexpr static rivet::rivet_type_id AssetMaterialName_type_id = 0x8193c1fd;
		constexpr static std::string_view MaterialLodDist_type_name = "MaterialLodDist";
		constexpr static rivet::rivet_type_id MaterialLodDist_type_id = 0xe037b091;
		constexpr static std::string_view FadeOutDist_type_name = "FadeOutDist";
		constexpr static rivet::rivet_type_id FadeOutDist_type_id = 0x1c6fd24d;
		constexpr static std::string_view TextureStreamBias_type_name = "TextureStreamBias";
		constexpr static rivet::rivet_type_id TextureStreamBias_type_id = 0x93f82e2;
		constexpr static std::string_view DoubleSidedType_type_name = "DoubleSidedType";
		constexpr static rivet::rivet_type_id DoubleSidedType_type_id = 0xa20f844;
		constexpr static std::string_view ImpostorHQType_type_name = "ImpostorHQType";
		constexpr static rivet::rivet_type_id ImpostorHQType_type_id = 0x260c3706;
		constexpr static std::string_view Disable_type_name = "Disable";
		constexpr static rivet::rivet_type_id Disable_type_id = 0x4eaf2e69;
		constexpr static std::string_view PolySort_type_name = "PolySort";
		constexpr static rivet::rivet_type_id PolySort_type_id = 0x152b001a;
		constexpr static std::string_view LensFlareOccluder_type_name = "LensFlareOccluder";
		constexpr static rivet::rivet_type_id LensFlareOccluder_type_id = 0x74b31ad5;
		constexpr static std::string_view OverrideCollisionMtl_type_name = "OverrideCollisionMtl";
		constexpr static rivet::rivet_type_id OverrideCollisionMtl_type_id = 0xb854ec81;
		constexpr static std::string_view SkipRayTracing_type_name = "SkipRayTracing";
		constexpr static rivet::rivet_type_id SkipRayTracing_type_id = 0x81f71340;
		constexpr static std::string_view NoAvResponse_type_name = "NoAvResponse";
		constexpr static rivet::rivet_type_id NoAvResponse_type_id = 0xeafa4302; 

		explicit MaterialMap() = default;
		explicit MaterialMap([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::string_view MaterialMappingName {};
		std::string_view AssetMaterialName {};
		float MaterialLodDist {};
		float FadeOutDist {};
		float TextureStreamBias {};
		rivet::ddl::generated::DoubleSidedType DoubleSidedType {};
		rivet::ddl::generated::ImpostorHQType ImpostorHQType {};
		bool Disable {};
		bool PolySort {};
		bool LensFlareOccluder {};
		bool OverrideCollisionMtl {};
		bool SkipRayTracing {};
		bool NoAvResponse {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<MaterialMap>;
	};
} // namespace rivet::ddl::generated

// clang-format on