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

#include <rivet/ddl/generated/LogicNodeBaseDef.hpp> 

namespace rivet::ddl::generated {
	struct OutputPlugSignal;
	struct InputPlugBoolean;
	struct InputPlugSignal; 

	struct RIVET_DDL_SHARED CheckBoolNodeDef : LogicNodeBaseDef {
		constexpr static std::string_view type_name = "CheckBoolNodeDef";
		constexpr static rivet::rivet_type_id type_id = 0x3e488080;

		constexpr static std::string_view Check_type_name = "Check";
		constexpr static rivet::rivet_type_id Check_type_id = 0x25dd60d2;
		constexpr static std::string_view Bool_type_name = "Bool";
		constexpr static rivet::rivet_type_id Bool_type_id = 0x6511f622;
		constexpr static std::string_view True_type_name = "True";
		constexpr static rivet::rivet_type_id True_type_id = 0xcd6c8c3d;
		constexpr static std::string_view False_type_name = "False";
		constexpr static rivet::rivet_type_id False_type_id = 0x329ea4f1; 

		explicit CheckBoolNodeDef() = default;
		explicit CheckBoolNodeDef([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::shared_ptr<rivet::ddl::generated::InputPlugSignal> Check {};
		std::shared_ptr<rivet::ddl::generated::InputPlugBoolean> Bool {};
		std::shared_ptr<rivet::ddl::generated::OutputPlugSignal> True {};
		std::shared_ptr<rivet::ddl::generated::OutputPlugSignal> False {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<CheckBoolNodeDef>;
	};
} // namespace rivet::ddl::generated

// clang-format on