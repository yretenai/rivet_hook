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
#include <rivet/ddl/generated/enums/xd2b2d773.hpp> 

namespace rivet::ddl::generated {
	struct UIDifficultyData; 

	struct RIVET_DDL_SHARED UIDifficultyConfig : ConfigBase {
		constexpr const static std::string_view type_name = "UIDifficultyConfig";
		constexpr const static rivet::rivet_type_id type_id = 0x27cb46bc;

		constexpr const static std::string_view DifficultyLevelData_type_name = "DifficultyLevelData";
		constexpr const static rivet::rivet_type_id DifficultyLevelData_type_id = 0x63e7d044;
		constexpr const static std::string_view SuperEasyDifficultyData_type_name = "SuperEasyDifficultyData";
		constexpr const static rivet::rivet_type_id SuperEasyDifficultyData_type_id = 0x95f5bd15;
		constexpr const static std::string_view DefaultDifficultyID_type_name = "DefaultDifficultyID";
		constexpr const static rivet::rivet_type_id DefaultDifficultyID_type_id = 0x103ace5c; 

		explicit UIDifficultyConfig() = default;
		explicit UIDifficultyConfig([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::vector<std::shared_ptr<rivet::ddl::generated::UIDifficultyData>> DifficultyLevelData {};
		std::shared_ptr<rivet::ddl::generated::UIDifficultyData> SuperEasyDifficultyData {};
		rivet::ddl::generated::xd2b2d773 DefaultDifficultyID {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<UIDifficultyConfig>;
	};
} // namespace rivet::ddl::generated

// clang-format on
