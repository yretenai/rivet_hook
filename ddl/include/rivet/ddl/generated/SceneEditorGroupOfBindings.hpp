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
	struct SceneEditorHotkey; 

	struct RIVET_DDL_SHARED SceneEditorGroupOfBindings : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "SceneEditorGroupOfBindings";
		constexpr static rivet::rivet_type_id type_id = 0xd0d9e413;

		constexpr static std::string_view GroupName_type_name = "GroupName";
		constexpr static rivet::rivet_type_id GroupName_type_id = 0xb215bfb7;
		constexpr static std::string_view HotKeys_type_name = "HotKeys";
		constexpr static rivet::rivet_type_id HotKeys_type_id = 0xe4d7718a; 

		explicit SceneEditorGroupOfBindings() = default;
		explicit SceneEditorGroupOfBindings([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::string_view GroupName {};
		std::vector<std::shared_ptr<rivet::ddl::generated::SceneEditorHotkey>> HotKeys {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<SceneEditorGroupOfBindings>;
	};
} // namespace rivet::ddl::generated

// clang-format on