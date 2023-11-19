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
	struct ContrastMaterialEntry; 

	struct RIVET_DDL_SHARED ContrastMaterialData : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "ContrastMaterialData";
		constexpr static rivet::rivet_type_id type_id = 0xb39f83d3;

		constexpr static std::string_view Entries_type_name = "Entries";
		constexpr static rivet::rivet_type_id Entries_type_id = 0x2c12d0fd;
		constexpr static std::string_view FallbackMaterial_type_name = "FallbackMaterial";
		constexpr static rivet::rivet_type_id FallbackMaterial_type_id = 0x5ff86493; 

		explicit ContrastMaterialData() = default;
		explicit ContrastMaterialData([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::vector<std::shared_ptr<rivet::ddl::generated::ContrastMaterialEntry>> Entries {};
		std::string_view FallbackMaterial {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<ContrastMaterialData>;
	};
} // namespace rivet::ddl::generated

// clang-format on