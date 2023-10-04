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
	struct DepthOfFieldBaseSetup; 

	struct RIVET_DDL_SHARED DepthOfFieldGameConfig : ConfigBase {
		constexpr const static std::string_view type_name = "DepthOfFieldGameConfig";
		constexpr const static rivet::rivet_type_id type_id = 0xff62e83e;

		constexpr const static std::string_view BaseGameSetup_type_name = "BaseGameSetup";
		constexpr const static rivet::rivet_type_id BaseGameSetup_type_id = 0x8b4fe3ad;
		constexpr const static std::string_view CameraNearMin_type_name = "CameraNearMin";
		constexpr const static rivet::rivet_type_id CameraNearMin_type_id = 0x11474998;
		constexpr const static std::string_view CameraNearMax_type_name = "CameraNearMax";
		constexpr const static rivet::rivet_type_id CameraNearMax_type_id = 0x2d4a76c1; 

		explicit DepthOfFieldGameConfig() = default;
		explicit DepthOfFieldGameConfig([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::shared_ptr<rivet::ddl::generated::DepthOfFieldBaseSetup> BaseGameSetup {};
		float CameraNearMin {};
		float CameraNearMax {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<DepthOfFieldGameConfig>;
	};
} // namespace rivet::ddl::generated

// clang-format on
