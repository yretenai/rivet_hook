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

#include <rivet/ddl/generated/ActorSpawnData.hpp> 

namespace rivet::ddl::generated {
	struct RIVET_DDL_SHARED PilotSpawnData : ActorSpawnData {
		constexpr static std::string_view type_name = "PilotSpawnData";
		constexpr static rivet::rivet_type_id type_id = 0x27d25163;

		constexpr static std::string_view VehicleHandle_type_name = "VehicleHandle";
		constexpr static rivet::rivet_type_id VehicleHandle_type_id = 0x41c2ab0a;
		constexpr static std::string_view AssetId_type_name = "AssetId";
		constexpr static rivet::rivet_type_id AssetId_type_id = 0xb6e788d7;
		constexpr static std::string_view AttachLocator_type_name = "AttachLocator";
		constexpr static rivet::rivet_type_id AttachLocator_type_id = 0xfa8dcd9a; 

		explicit PilotSpawnData() = default;
		explicit PilotSpawnData([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		uint32_t VehicleHandle {};
		uint64_t AssetId {};
		uint32_t AttachLocator {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<PilotSpawnData>;
	};
} // namespace rivet::ddl::generated

// clang-format on