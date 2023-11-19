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
	struct LoadedMaterialNode; 

	struct RIVET_DDL_SHARED MaterialNodeLibrary : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "MaterialNodeLibrary";
		constexpr static rivet::rivet_type_id type_id = 0xf184af9c;

		constexpr static std::string_view LibraryDirectory_type_name = "LibraryDirectory";
		constexpr static rivet::rivet_type_id LibraryDirectory_type_id = 0x8de289cd;
		constexpr static std::string_view LibraryFullPath_type_name = "LibraryFullPath";
		constexpr static rivet::rivet_type_id LibraryFullPath_type_id = 0x9034cc0f;
		constexpr static std::string_view Name_type_name = "Name";
		constexpr static rivet::rivet_type_id Name_type_id = 0x6eb3beb6;
		constexpr static std::string_view Nodes_type_name = "Nodes";
		constexpr static rivet::rivet_type_id Nodes_type_id = 0x46ec93d;
		constexpr static std::string_view Color_type_name = "Color";
		constexpr static rivet::rivet_type_id Color_type_id = 0x7f058428;
		constexpr static std::string_view FixedWidth_type_name = "FixedWidth";
		constexpr static rivet::rivet_type_id FixedWidth_type_id = 0xaa224c9a;
		constexpr static std::string_view TimeStampLow_type_name = "TimeStampLow";
		constexpr static rivet::rivet_type_id TimeStampLow_type_id = 0xd95c8f23;
		constexpr static std::string_view TimeStampHigh_type_name = "TimeStampHigh";
		constexpr static rivet::rivet_type_id TimeStampHigh_type_id = 0x20fa3d23;
		constexpr static std::string_view Hidden_type_name = "Hidden";
		constexpr static rivet::rivet_type_id Hidden_type_id = 0xb625a7da; 

		explicit MaterialNodeLibrary() = default;
		explicit MaterialNodeLibrary([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::string_view LibraryDirectory {};
		std::string_view LibraryFullPath {};
		std::string_view Name {};
		std::vector<std::shared_ptr<rivet::ddl::generated::LoadedMaterialNode>> Nodes {};
		uint32_t Color {};
		uint32_t FixedWidth {};
		uint32_t TimeStampLow {};
		uint32_t TimeStampHigh {};
		bool Hidden {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<MaterialNodeLibrary>;
	};
} // namespace rivet::ddl::generated

// clang-format on