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

#include <rivet/ddl/generated/enums/x257e8082.hpp> 

namespace rivet::ddl::generated {
	struct RIVET_DDL_SHARED ActionControlHeroBackpackControl : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "ActionControlHeroBackpackControl";
		constexpr static rivet::rivet_type_id type_id = 0xfbfc98fa;

		constexpr static std::string_view Control_type_name = "Control";
		constexpr static rivet::rivet_type_id Control_type_id = 0xec314f73; 

		explicit ActionControlHeroBackpackControl() = default;
		explicit ActionControlHeroBackpackControl([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		rivet::ddl::generated::x257e8082 Control {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<ActionControlHeroBackpackControl>;
	};
} // namespace rivet::ddl::generated

// clang-format on