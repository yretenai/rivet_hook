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

#include <rivet/ddl/generated/enums/x5907f033.hpp> 

namespace rivet::ddl::generated {
	struct DDLMatrix4;
	struct AnimPerformanceSetDef;
	struct AnimPerformanceClipDef; 

	struct RIVET_DDL_SHARED PerformanceEngineItem : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "PerformanceEngineItem";
		constexpr static rivet::rivet_type_id type_id = 0xcc1e1d2;

		constexpr static std::string_view ActivePerformanceClipDef_type_name = "ActivePerformanceClipDef";
		constexpr static rivet::rivet_type_id ActivePerformanceClipDef_type_id = 0xb92d34f;
		constexpr static std::string_view ActivePerformanceClipGroupPath_type_name = "ActivePerformanceClipGroupPath";
		constexpr static rivet::rivet_type_id ActivePerformanceClipGroupPath_type_id = 0xd933bd4a;
		constexpr static std::string_view ActivePerformanceClipPath_type_name = "ActivePerformanceClipPath";
		constexpr static rivet::rivet_type_id ActivePerformanceClipPath_type_id = 0x5873f7f;
		constexpr static std::string_view AnimSetStack_type_name = "AnimSetStack";
		constexpr static rivet::rivet_type_id AnimSetStack_type_id = 0x5d0f513c;
		constexpr static std::string_view AssetPath_type_name = "AssetPath";
		constexpr static rivet::rivet_type_id AssetPath_type_id = 0xefa614b;
		constexpr static std::string_view BodyId_type_name = "BodyId";
		constexpr static rivet::rivet_type_id BodyId_type_id = 0x55e4c38f;
		constexpr static std::string_view HeadId_type_name = "HeadId";
		constexpr static rivet::rivet_type_id HeadId_type_id = 0x9def3859;
		constexpr static std::string_view PerformanceSetDef_type_name = "PerformanceSetDef";
		constexpr static rivet::rivet_type_id PerformanceSetDef_type_id = 0xde20145a;
		constexpr static std::string_view PreviewAnimDriverName_type_name = "PreviewAnimDriverName";
		constexpr static rivet::rivet_type_id PreviewAnimDriverName_type_id = 0xa09e267c;
		constexpr static std::string_view Matrix_type_name = "Matrix";
		constexpr static rivet::rivet_type_id Matrix_type_id = 0xc64b0fa8;
		constexpr static std::string_view Playing_type_name = "Playing";
		constexpr static rivet::rivet_type_id Playing_type_id = 0xd21350da;
		constexpr static std::string_view RequestPlay_type_name = "RequestPlay";
		constexpr static rivet::rivet_type_id RequestPlay_type_id = 0xf32678e9;
		constexpr static std::string_view RequestPause_type_name = "RequestPause";
		constexpr static rivet::rivet_type_id RequestPause_type_id = 0xf757d288;
		constexpr static std::string_view RequestTime_type_name = "RequestTime";
		constexpr static rivet::rivet_type_id RequestTime_type_id = 0xc23b3e16;
		constexpr static std::string_view ShowAnimControllerHud_type_name = "ShowAnimControllerHud";
		constexpr static rivet::rivet_type_id ShowAnimControllerHud_type_id = 0x40f112b1;
		constexpr static std::string_view ShowAnimDebugHud_type_name = "ShowAnimDebugHud";
		constexpr static rivet::rivet_type_id ShowAnimDebugHud_type_id = 0x2266257a;
		constexpr static std::string_view Time_type_name = "Time";
		constexpr static rivet::rivet_type_id Time_type_id = 0x5f0458f5; 

		explicit PerformanceEngineItem() = default;
		explicit PerformanceEngineItem([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::shared_ptr<rivet::ddl::generated::AnimPerformanceClipDef> ActivePerformanceClipDef {};
		std::string_view ActivePerformanceClipGroupPath {};
		std::string_view ActivePerformanceClipPath {};
		std::vector<std::string_view> AnimSetStack {};
		std::string_view AssetPath {};
		uint64_t BodyId {};
		uint64_t HeadId {};
		std::shared_ptr<rivet::ddl::generated::AnimPerformanceSetDef> PerformanceSetDef {};
		std::string_view PreviewAnimDriverName {};
		std::shared_ptr<rivet::ddl::generated::DDLMatrix4> Matrix {};
		bool Playing {};
		bool RequestPlay {};
		bool RequestPause {};
		double RequestTime {};
		rivet::ddl::generated::x5907f033 ShowAnimControllerHud {};
		bool ShowAnimDebugHud {};
		double Time {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<PerformanceEngineItem>;
	};
} // namespace rivet::ddl::generated

// clang-format on