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
	struct DDLVector3; 

	struct RIVET_DDL_SHARED SVOGeneratorStepDone : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "SVOGeneratorStepDone";
		constexpr static rivet::rivet_type_id type_id = 0x749cb45a;

		constexpr static std::string_view Centers_type_name = "Centers";
		constexpr static rivet::rivet_type_id Centers_type_id = 0x26a7b809;
		constexpr static std::string_view Radii_type_name = "Radii";
		constexpr static rivet::rivet_type_id Radii_type_id = 0x107672fb;
		constexpr static std::string_view Clear_type_name = "Clear";
		constexpr static rivet::rivet_type_id Clear_type_id = 0xfce23dc7; 

		explicit SVOGeneratorStepDone() = default;
		explicit SVOGeneratorStepDone([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::vector<std::shared_ptr<rivet::ddl::generated::DDLVector3>> Centers {};
		std::vector<std::shared_ptr<rivet::ddl::generated::DDLVector3>> Radii {};
		std::vector<bool> Clear {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<SVOGeneratorStepDone>;
	};
} // namespace rivet::ddl::generated

// clang-format on