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
	struct RIVET_DDL_SHARED ObjectiveNodeInfoUI : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "ObjectiveNodeInfoUI";
		constexpr static rivet::rivet_type_id type_id = 0x5363cec9;

		constexpr static std::string_view NameLocTag_type_name = "NameLocTag";
		constexpr static rivet::rivet_type_id NameLocTag_type_id = 0xa0041b54;
		constexpr static std::string_view DescriptionLocTag_type_name = "DescriptionLocTag";
		constexpr static rivet::rivet_type_id DescriptionLocTag_type_id = 0xe61fee0c;
		constexpr static std::string_view PlanetName_type_name = "PlanetName";
		constexpr static rivet::rivet_type_id PlanetName_type_id = 0x38548038;
		constexpr static std::string_view AlwaysPing_type_name = "AlwaysPing";
		constexpr static rivet::rivet_type_id AlwaysPing_type_id = 0x1667fa0; 

		explicit ObjectiveNodeInfoUI() = default;
		explicit ObjectiveNodeInfoUI([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::string_view NameLocTag {};
		std::string_view DescriptionLocTag {};
		std::string_view PlanetName {};
		bool AlwaysPing {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<ObjectiveNodeInfoUI>;
	};
} // namespace rivet::ddl::generated

// clang-format on