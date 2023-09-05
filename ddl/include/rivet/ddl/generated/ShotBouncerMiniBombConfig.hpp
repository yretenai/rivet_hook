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
	struct ShotBouncerMiniBombPrius; 

	struct RIVET_DDL_SHARED ShotBouncerMiniBombConfig : ConfigBase {
		constexpr const static std::string_view type_name = "ShotBouncerMiniBombConfig";
		constexpr const static rivet::rivet_type_id type_id = 0xc775eb04;

		constexpr const static std::string_view MiniBombActor_type_name = "MiniBombActor";
		constexpr const static rivet::rivet_type_id MiniBombActor_type_id = 0xf61d4e28;
		constexpr const static std::string_view ShotPrius_type_name = "ShotPrius";
		constexpr const static rivet::rivet_type_id ShotPrius_type_id = 0x66fe4621; 

		explicit ShotBouncerMiniBombConfig() = default;
		explicit ShotBouncerMiniBombConfig([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::string_view MiniBombActor {};
		std::shared_ptr<rivet::ddl::generated::ShotBouncerMiniBombPrius> ShotPrius {}; 

		auto
		get_type_id() const noexcept -> rivet::rivet_type_id override;

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<ShotBouncerMiniBombConfig>;
	};
} // namespace rivet::ddl::generated

// clang-format on