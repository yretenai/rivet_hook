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
	struct AssetProfileDataReferenceArray;
	struct AssetProfileWwiseEventDependency;
	struct AssetProfileDataDependency;
	struct NamedSize; 

	struct RIVET_DDL_SHARED AssetProfileData : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "AssetProfileData";
		constexpr static rivet::rivet_type_id type_id = 0x8c368bad;

		constexpr static std::string_view _id_type_name = "_id";
		constexpr static rivet::rivet_type_id _id_type_id = 0x7459aa19;
		constexpr static std::string_view Platform_type_name = "Platform";
		constexpr static rivet::rivet_type_id Platform_type_id = 0xc3536dbb;
		constexpr static std::string_view Extension_type_name = "Extension";
		constexpr static rivet::rivet_type_id Extension_type_id = 0x1d4aa27b;
		constexpr static std::string_view Language_type_name = "Language";
		constexpr static rivet::rivet_type_id Language_type_id = 0x2edaccc5;
		constexpr static std::string_view AssetPath_type_name = "AssetPath";
		constexpr static rivet::rivet_type_id AssetPath_type_id = 0xefa614b;
		constexpr static std::string_view FileSize_type_name = "FileSize";
		constexpr static rivet::rivet_type_id FileSize_type_id = 0xcfdba147;
		constexpr static std::string_view BlockSizes_type_name = "BlockSizes";
		constexpr static rivet::rivet_type_id BlockSizes_type_id = 0x3722d434;
		constexpr static std::string_view SourceDeps_type_name = "SourceDeps";
		constexpr static rivet::rivet_type_id SourceDeps_type_id = 0x5ab4024f;
		constexpr static std::string_view ManualLoadDeps_type_name = "ManualLoadDeps";
		constexpr static rivet::rivet_type_id ManualLoadDeps_type_id = 0xb14a519e;
		constexpr static std::string_view AutoLoadWwiseEventDeps_type_name = "AutoLoadWwiseEventDeps";
		constexpr static rivet::rivet_type_id AutoLoadWwiseEventDeps_type_id = 0x53add904;
		constexpr static std::string_view ManualLoadWwiseEventDeps_type_name = "ManualLoadWwiseEventDeps";
		constexpr static rivet::rivet_type_id ManualLoadWwiseEventDeps_type_id = 0x49a26fc8;
		constexpr static std::string_view HibernatedAssets_type_name = "HibernatedAssets";
		constexpr static rivet::rivet_type_id HibernatedAssets_type_id = 0xdc3692e8;
		constexpr static std::string_view DelayStreamAssets_type_name = "DelayStreamAssets";
		constexpr static rivet::rivet_type_id DelayStreamAssets_type_id = 0x308c6cc7;
		constexpr static std::string_view LightingConditionReferences_type_name = "LightingConditionReferences";
		constexpr static rivet::rivet_type_id LightingConditionReferences_type_id = 0x7cf3f883;
		constexpr static std::string_view RuntimeZoneTotalModelInstCount_type_name = "RuntimeZoneTotalModelInstCount";
		constexpr static rivet::rivet_type_id RuntimeZoneTotalModelInstCount_type_id = 0x5a453bf7;
		constexpr static std::string_view RuntimeZoneDelayModelInstCount_type_name = "RuntimeZoneDelayModelInstCount";
		constexpr static rivet::rivet_type_id RuntimeZoneDelayModelInstCount_type_id = 0xdd263255;
		constexpr static std::string_view AnimClipSizes_type_name = "AnimClipSizes";
		constexpr static rivet::rivet_type_id AnimClipSizes_type_id = 0xe9a1ee16;
		constexpr static std::string_view AnimDriverSizes_type_name = "AnimDriverSizes";
		constexpr static rivet::rivet_type_id AnimDriverSizes_type_id = 0x77eb2a40;
		constexpr static std::string_view SoundSize_type_name = "SoundSize";
		constexpr static rivet::rivet_type_id SoundSize_type_id = 0x32bbd2c6;
		constexpr static std::string_view IndexCount_type_name = "IndexCount";
		constexpr static rivet::rivet_type_id IndexCount_type_id = 0x698b9d17;
		constexpr static std::string_view SkinBatchCount_type_name = "SkinBatchCount";
		constexpr static rivet::rivet_type_id SkinBatchCount_type_id = 0x6e000a83;
		constexpr static std::string_view MorphBatchCount_type_name = "MorphBatchCount";
		constexpr static rivet::rivet_type_id MorphBatchCount_type_id = 0x813a7a38;
		constexpr static std::string_view VertexCount_type_name = "VertexCount";
		constexpr static rivet::rivet_type_id VertexCount_type_id = 0x8d88b31f;
		constexpr static std::string_view PhysicsAVMaterialsCount_type_name = "PhysicsAVMaterialsCount";
		constexpr static rivet::rivet_type_id PhysicsAVMaterialsCount_type_id = 0x9d8ac838;
		constexpr static std::string_view ClothJointCount_type_name = "ClothJointCount";
		constexpr static rivet::rivet_type_id ClothJointCount_type_id = 0xc96da6f1;
		constexpr static std::string_view LocatorCount_type_name = "LocatorCount";
		constexpr static rivet::rivet_type_id LocatorCount_type_id = 0xb6d304db;
		constexpr static std::string_view JointCount_type_name = "JointCount";
		constexpr static rivet::rivet_type_id JointCount_type_id = 0x7b07b307;
		constexpr static std::string_view ResidentTextureSize_type_name = "ResidentTextureSize";
		constexpr static rivet::rivet_type_id ResidentTextureSize_type_id = 0xc159e341;
		constexpr static std::string_view TextureFormat_type_name = "TextureFormat";
		constexpr static rivet::rivet_type_id TextureFormat_type_id = 0xa4e99a36;
		constexpr static std::string_view TextureType_type_name = "TextureType";
		constexpr static rivet::rivet_type_id TextureType_type_id = 0x58cf7ca5;
		constexpr static std::string_view Width_type_name = "Width";
		constexpr static rivet::rivet_type_id Width_type_id = 0x954989ee;
		constexpr static std::string_view Height_type_name = "Height";
		constexpr static rivet::rivet_type_id Height_type_id = 0xcb35ab68;
		constexpr static std::string_view CannotStreamMips_type_name = "CannotStreamMips";
		constexpr static rivet::rivet_type_id CannotStreamMips_type_id = 0x4347d5a5;
		constexpr static std::string_view Duration_type_name = "Duration";
		constexpr static rivet::rivet_type_id Duration_type_id = 0x7c5e3db0;
		constexpr static std::string_view Components_type_name = "Components";
		constexpr static rivet::rivet_type_id Components_type_id = 0x357eabc4; 

		explicit AssetProfileData() = default;
		explicit AssetProfileData([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::string_view _id {};
		std::string_view Platform {};
		std::string_view Extension {};
		std::string_view Language {};
		std::string_view AssetPath {};
		uint32_t FileSize {};
		std::vector<std::shared_ptr<rivet::ddl::generated::NamedSize>> BlockSizes {};
		std::vector<std::shared_ptr<rivet::ddl::generated::AssetProfileDataDependency>> SourceDeps {};
		std::vector<std::shared_ptr<rivet::ddl::generated::AssetProfileDataDependency>> ManualLoadDeps {};
		std::vector<std::shared_ptr<rivet::ddl::generated::AssetProfileWwiseEventDependency>> AutoLoadWwiseEventDeps {};
		std::vector<std::shared_ptr<rivet::ddl::generated::AssetProfileWwiseEventDependency>> ManualLoadWwiseEventDeps {};
		std::vector<std::string_view> HibernatedAssets {};
		std::vector<std::string_view> DelayStreamAssets {};
		std::vector<std::shared_ptr<rivet::ddl::generated::AssetProfileDataReferenceArray>> LightingConditionReferences {};
		uint32_t RuntimeZoneTotalModelInstCount {};
		uint32_t RuntimeZoneDelayModelInstCount {};
		std::vector<std::shared_ptr<rivet::ddl::generated::NamedSize>> AnimClipSizes {};
		std::vector<std::shared_ptr<rivet::ddl::generated::NamedSize>> AnimDriverSizes {};
		uint32_t SoundSize {};
		uint32_t IndexCount {};
		uint32_t SkinBatchCount {};
		uint32_t MorphBatchCount {};
		uint32_t VertexCount {};
		uint32_t PhysicsAVMaterialsCount {};
		uint32_t ClothJointCount {};
		uint32_t LocatorCount {};
		uint32_t JointCount {};
		uint32_t ResidentTextureSize {};
		std::string_view TextureFormat {};
		std::string_view TextureType {};
		uint32_t Width {};
		uint32_t Height {};
		bool CannotStreamMips {};
		float Duration {};
		std::vector<std::string_view> Components {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<AssetProfileData>;
	};
} // namespace rivet::ddl::generated

// clang-format on