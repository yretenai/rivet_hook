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

#include <rivet/ddl/generated/enums/x38a2d189.hpp>
#include <rivet/ddl/generated/StructuredLogAnimTreeNode.hpp> 

namespace rivet::ddl::generated {
	struct StructuredLogAnimTreePerformanceClipNodeGesture; 

	struct RIVET_DDL_SHARED StructuredLogAnimTreePerformanceClipNode : StructuredLogAnimTreeNode {
		constexpr static std::string_view type_name = "StructuredLogAnimTreePerformanceClipNode";
		constexpr static rivet::rivet_type_id type_id = 0xf106a4a6;

		constexpr static std::string_view Time_type_name = "Time";
		constexpr static rivet::rivet_type_id Time_type_id = 0x5f0458f5;
		constexpr static std::string_view ClipDuration_type_name = "ClipDuration";
		constexpr static rivet::rivet_type_id ClipDuration_type_id = 0x7a039578;
		constexpr static std::string_view Rate_type_name = "Rate";
		constexpr static rivet::rivet_type_id Rate_type_id = 0xef7cff89;
		constexpr static std::string_view ClipNodeFlags_type_name = "ClipNodeFlags";
		constexpr static rivet::rivet_type_id ClipNodeFlags_type_id = 0x47011b15;
		constexpr static std::string_view Gestures_type_name = "Gestures";
		constexpr static rivet::rivet_type_id Gestures_type_id = 0xc775c26d;
		constexpr static std::string_view FacialPosesScale_type_name = "FacialPosesScale";
		constexpr static rivet::rivet_type_id FacialPosesScale_type_id = 0xbc92bdf; 

		explicit StructuredLogAnimTreePerformanceClipNode() = default;
		explicit StructuredLogAnimTreePerformanceClipNode([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		float Time {};
		float ClipDuration {};
		float Rate {};
		rivet::ddl::generated::x38a2d189 ClipNodeFlags {};
		std::vector<std::shared_ptr<rivet::ddl::generated::StructuredLogAnimTreePerformanceClipNodeGesture>> Gestures {};
		float FacialPosesScale {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<StructuredLogAnimTreePerformanceClipNode>;
	};
} // namespace rivet::ddl::generated

// clang-format on