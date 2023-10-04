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
	struct Steering3DPrius; 

	struct RIVET_DDL_SHARED BotConfigMovement3D : ConfigBase {
		constexpr const static std::string_view type_name = "BotConfigMovement3D";
		constexpr const static rivet::rivet_type_id type_id = 0xd34d9c83;

		constexpr const static std::string_view Steering_type_name = "Steering";
		constexpr const static rivet::rivet_type_id Steering_type_id = 0x2a84cec; 

		explicit BotConfigMovement3D() = default;
		explicit BotConfigMovement3D([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::shared_ptr<rivet::ddl::generated::Steering3DPrius> Steering {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<BotConfigMovement3D>;
	};
} // namespace rivet::ddl::generated

// clang-format on