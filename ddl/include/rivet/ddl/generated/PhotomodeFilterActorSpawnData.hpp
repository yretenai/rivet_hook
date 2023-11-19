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
	struct DDLTransform; 

	struct RIVET_DDL_SHARED PhotomodeFilterActorSpawnData : ActorSpawnData {
		constexpr static std::string_view type_name = "PhotomodeFilterActorSpawnData";
		constexpr static rivet::rivet_type_id type_id = 0x728df61d;

		constexpr static std::string_view ActorAssetId_type_name = "ActorAssetId";
		constexpr static rivet::rivet_type_id ActorAssetId_type_id = 0xb54bdec6;
		constexpr static std::string_view SpawnTransform_type_name = "SpawnTransform";
		constexpr static rivet::rivet_type_id SpawnTransform_type_id = 0x1793260d; 

		explicit PhotomodeFilterActorSpawnData() = default;
		explicit PhotomodeFilterActorSpawnData([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		uint64_t ActorAssetId {};
		std::shared_ptr<rivet::ddl::generated::DDLTransform> SpawnTransform {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<PhotomodeFilterActorSpawnData>;
	};
} // namespace rivet::ddl::generated

// clang-format on