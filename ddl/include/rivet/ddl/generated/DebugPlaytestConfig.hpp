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
	struct DebugNewGamePlaytest;
	struct DebugPlaytest; 

	struct RIVET_DDL_SHARED DebugPlaytestConfig : ConfigBase {
		constexpr const static std::string_view type_name = "DebugPlaytestConfig";
		constexpr const static rivet::rivet_type_id type_id = 0x23e907ec;

		constexpr const static std::string_view NewGameDemoInfo_type_name = "NewGameDemoInfo";
		constexpr const static rivet::rivet_type_id NewGameDemoInfo_type_id = 0xc26e5bf0;
		constexpr const static std::string_view Playtests_type_name = "Playtests";
		constexpr const static rivet::rivet_type_id Playtests_type_id = 0xc6bded98; 

		explicit DebugPlaytestConfig() = default;
		explicit DebugPlaytestConfig([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::shared_ptr<rivet::ddl::generated::DebugNewGamePlaytest> NewGameDemoInfo {};
		std::vector<std::shared_ptr<rivet::ddl::generated::DebugPlaytest>> Playtests {}; 

		auto
		get_type_id() const noexcept -> rivet::rivet_type_id override;

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<DebugPlaytestConfig>;
	};
} // namespace rivet::ddl::generated

// clang-format on