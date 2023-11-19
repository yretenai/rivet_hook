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
	struct PCGamePreferencesSave;
	struct GamePreferencesSave; 

	struct RIVET_DDL_SHARED GamePrefSaveCombined : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "GamePrefSaveCombined";
		constexpr static rivet::rivet_type_id type_id = 0xe5fb2f7e;

		constexpr static std::string_view BaseSave_type_name = "BaseSave";
		constexpr static rivet::rivet_type_id BaseSave_type_id = 0x28584f20;
		constexpr static std::string_view PCSave_type_name = "PCSave";
		constexpr static rivet::rivet_type_id PCSave_type_id = 0x4fdb8a60; 

		explicit GamePrefSaveCombined() = default;
		explicit GamePrefSaveCombined([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::shared_ptr<rivet::ddl::generated::GamePreferencesSave> BaseSave {};
		std::shared_ptr<rivet::ddl::generated::PCGamePreferencesSave> PCSave {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<GamePrefSaveCombined>;
	};
} // namespace rivet::ddl::generated

// clang-format on