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

#include <rivet/ddl/generated/CameraAimContextConfig.hpp> 

namespace rivet::ddl::generated {
	struct HackySeparatorStruct; 

	struct RIVET_DDL_SHARED CameraAimContextVariableFOVConfig : CameraAimContextConfig {
		constexpr const static std::string_view type_name = "CameraAimContextVariableFOVConfig";
		constexpr const static rivet::rivet_type_id type_id = 0xb2edddf3;

		constexpr const static std::string_view SeparatorFOVConfig_type_name = "SeparatorFOVConfig";
		constexpr const static rivet::rivet_type_id SeparatorFOVConfig_type_id = 0xf63dbb91; 

		explicit CameraAimContextVariableFOVConfig() = default;
		explicit CameraAimContextVariableFOVConfig([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::shared_ptr<rivet::ddl::generated::HackySeparatorStruct> SeparatorFOVConfig {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<CameraAimContextVariableFOVConfig>;
	};
} // namespace rivet::ddl::generated

// clang-format on
