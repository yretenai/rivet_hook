// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#pragma once

// clang-format off

#include <cstdint>
#include <string_view>
#include <array>

#include <rivet/hash/type_id.hpp>
#include <rivet/rivet_keywords.hpp>

namespace rivet::ddl::generated {
	constexpr const static std::string_view x38a8002d_type_name = "x38a8002d";
	constexpr const static rivet::rivet_type_id x38a8002d_type_id = 0x38a8002d;

	constexpr const static std::array<std::string_view, 14> x38a8002d_values = {
		"kOff",
		"kClipMap",
		"kClipMapTiles",
		"kCurrentPaintTarget",
		"kGray",
		"kUVs",
		"kVistaMap",
		"kPipelinePaintBase",
		"kPipelinePaintBaseOffset",
		"kPipelinePaintBrush",
		"kPipelinePaintBrushAccumulated",
		"kPipelinePaintBrushAccumulatedValue",
		"kPipelinePaintComposite",
		"kPipelineProceduralComposite", 
	};

	enum class x38a8002d : uint64_t {
		Off,
		ClipMap,
		ClipMap_Tiles,
		Current_Paint_Target,
		Gray,
		UVs,
		Vista_Map,
		PipelinePaintBase,
		PipelinePaintBaseOffset,
		PipelinePaintBrush,
		PipelinePaintBrushAccumulated,
		PipelinePaintBrushAccumulatedValue,
		PipelinePaintComposite,
		PipelineProceduralComposite, 
	};
} // namespace rivet::ddl::generated

// clang-format on