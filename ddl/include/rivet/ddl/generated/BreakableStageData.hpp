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
	struct SpawnableChunk; 

	struct RIVET_DDL_SHARED BreakableStageData : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "BreakableStageData";
		constexpr static rivet::rivet_type_id type_id = 0xb2563cc8;

		constexpr static std::string_view Model_type_name = "Model";
		constexpr static rivet::rivet_type_id Model_type_id = 0xcec6be18;
		constexpr static std::string_view AnimSet_type_name = "AnimSet";
		constexpr static rivet::rivet_type_id AnimSet_type_id = 0xffcf15f1;
		constexpr static std::string_view AnimDriver_type_name = "AnimDriver";
		constexpr static rivet::rivet_type_id AnimDriver_type_id = 0x10f54dce;
		constexpr static std::string_view ChunkModels_type_name = "ChunkModels";
		constexpr static rivet::rivet_type_id ChunkModels_type_id = 0x4901ec1a;
		constexpr static std::string_view NoncollidingChunkModels_type_name = "NoncollidingChunkModels";
		constexpr static rivet::rivet_type_id NoncollidingChunkModels_type_id = 0xb1362cd8;
		constexpr static std::string_view DebrisModels_type_name = "DebrisModels";
		constexpr static rivet::rivet_type_id DebrisModels_type_id = 0xf9574946;
		constexpr static std::string_view BrokenAtHealth_type_name = "BrokenAtHealth";
		constexpr static rivet::rivet_type_id BrokenAtHealth_type_id = 0x3b00cce2;
		constexpr static std::string_view ManualBreak_type_name = "ManualBreak";
		constexpr static rivet::rivet_type_id ManualBreak_type_id = 0x6a479137; 

		explicit BreakableStageData() = default;
		explicit BreakableStageData([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::string_view Model {};
		std::string_view AnimSet {};
		std::string_view AnimDriver {};
		std::vector<std::string_view> ChunkModels {};
		std::vector<std::shared_ptr<rivet::ddl::generated::SpawnableChunk>> NoncollidingChunkModels {};
		std::vector<std::string_view> DebrisModels {};
		float BrokenAtHealth {};
		bool ManualBreak {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<BreakableStageData>;
	};
} // namespace rivet::ddl::generated

// clang-format on