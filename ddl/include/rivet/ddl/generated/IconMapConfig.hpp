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
	struct IconMapData; 

	struct RIVET_DDL_SHARED IconMapConfig : ConfigBase {
		constexpr const static std::string_view type_name = "IconMapConfig";
		constexpr const static rivet::rivet_type_id type_id = 0x57b583d3;

		constexpr const static std::string_view Mappings_type_name = "Mappings";
		constexpr const static rivet::rivet_type_id Mappings_type_id = 0xec2bfe69; 

		explicit IconMapConfig() = default;
		explicit IconMapConfig([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::vector<std::shared_ptr<rivet::ddl::generated::IconMapData>> Mappings {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<IconMapConfig>;
	};
} // namespace rivet::ddl::generated

// clang-format on