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

#include <rivet/ddl/generated/enums/xdf8f8d7a.hpp> 

namespace rivet::ddl::generated {
	struct AnimDriverVarConnection; 

	struct RIVET_DDL_SHARED AnimDriverVarDef : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "AnimDriverVarDef";
		constexpr static rivet::rivet_type_id type_id = 0x5264054a;

		constexpr static std::string_view Name_type_name = "Name";
		constexpr static rivet::rivet_type_id Name_type_id = 0x6eb3beb6;
		constexpr static std::string_view x_type_name = "x";
		constexpr static rivet::rivet_type_id x_type_id = 0x655d6145;
		constexpr static std::string_view y_type_name = "y";
		constexpr static rivet::rivet_type_id y_type_id = 0x125a51d3;
		constexpr static std::string_view Type_type_name = "Type";
		constexpr static rivet::rivet_type_id Type_type_id = 0xbc4e9799;
		constexpr static std::string_view Connections_type_name = "Connections";
		constexpr static rivet::rivet_type_id Connections_type_id = 0x322aadce; 

		explicit AnimDriverVarDef() = default;
		explicit AnimDriverVarDef([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::string_view Name {};
		float x {};
		float y {};
		rivet::ddl::generated::xdf8f8d7a Type {};
		std::vector<std::shared_ptr<rivet::ddl::generated::AnimDriverVarConnection>> Connections {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<AnimDriverVarDef>;
	};
} // namespace rivet::ddl::generated

// clang-format on