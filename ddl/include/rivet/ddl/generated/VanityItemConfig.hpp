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

#include <rivet/ddl/generated/SkinItemConfig.hpp> 

namespace rivet::ddl::generated {
	struct VanityItemData; 

	struct RIVET_DDL_SHARED VanityItemConfig : SkinItemConfig {
		constexpr const static std::string_view type_name = "VanityItemConfig";
		constexpr const static rivet::rivet_type_id type_id = 0x69ec9e21;

		constexpr const static std::string_view VanityItemData_type_name = "VanityItemData";
		constexpr const static rivet::rivet_type_id VanityItemData_type_id = 0x3098b726; 

		explicit VanityItemConfig() = default;
		explicit VanityItemConfig([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::shared_ptr<rivet::ddl::generated::VanityItemData> VanityItemData {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<VanityItemConfig>;
	};
} // namespace rivet::ddl::generated

// clang-format on
