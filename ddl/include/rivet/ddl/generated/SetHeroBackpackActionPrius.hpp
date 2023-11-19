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

#include <rivet/ddl/generated/bitsets/x76b84f53.hpp>
#include <rivet/ddl/generated/enums/x10228b34.hpp> 

namespace rivet::ddl::generated {
	struct RIVET_DDL_SHARED SetHeroBackpackActionPrius : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "SetHeroBackpackActionPrius";
		constexpr static rivet::rivet_type_id type_id = 0xa02f802b;

		constexpr static std::string_view ActionType_type_name = "ActionType";
		constexpr static rivet::rivet_type_id ActionType_type_id = 0x874b2194;
		constexpr static std::string_view AffectedCharacters_type_name = "AffectedCharacters";
		constexpr static rivet::rivet_type_id AffectedCharacters_type_id = 0x4c858936;
		constexpr static std::string_view HasBackpack_type_name = "HasBackpack";
		constexpr static rivet::rivet_type_id HasBackpack_type_id = 0x6b263f42;
		constexpr static std::string_view OverrideBackpackConfig_type_name = "OverrideBackpackConfig";
		constexpr static rivet::rivet_type_id OverrideBackpackConfig_type_id = 0xde895c83; 

		explicit SetHeroBackpackActionPrius() = default;
		explicit SetHeroBackpackActionPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		rivet::ddl::generated::x10228b34 ActionType {};
		rivet::ddl::generated::x76b84f53 AffectedCharacters {};
		bool HasBackpack {};
		std::string_view OverrideBackpackConfig {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<SetHeroBackpackActionPrius>;
	};
} // namespace rivet::ddl::generated

// clang-format on