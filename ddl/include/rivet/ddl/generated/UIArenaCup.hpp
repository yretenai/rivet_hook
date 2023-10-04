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
	struct UIArenaChallenge; 

	struct RIVET_DDL_SHARED UIArenaCup : rivet::structures::rivet_ddl_base {
		constexpr const static std::string_view type_name = "UIArenaCup";
		constexpr const static rivet::rivet_type_id type_id = 0x491dc60b;

		constexpr const static std::string_view Title_type_name = "Title";
		constexpr const static rivet::rivet_type_id Title_type_id = 0x3265b4aa;
		constexpr const static std::string_view Description_type_name = "Description";
		constexpr const static rivet::rivet_type_id Description_type_id = 0xe03811fd;
		constexpr const static std::string_view MissionUnlock_type_name = "MissionUnlock";
		constexpr const static rivet::rivet_type_id MissionUnlock_type_id = 0x489fe4ed;
		constexpr const static std::string_view Challenges_type_name = "Challenges";
		constexpr const static rivet::rivet_type_id Challenges_type_id = 0xdc83f9d9; 

		explicit UIArenaCup() = default;
		explicit UIArenaCup([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::string_view Title {};
		std::string_view Description {};
		std::string_view MissionUnlock {};
		std::vector<std::shared_ptr<rivet::ddl::generated::UIArenaChallenge>> Challenges {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<UIArenaCup>;
	};
} // namespace rivet::ddl::generated

// clang-format on
