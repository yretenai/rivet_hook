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
	struct RIVET_DDL_SHARED GUISettings : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "GUISettings";
		constexpr static rivet::rivet_type_id type_id = 0xcba98626;

		constexpr static std::string_view RenderEnable_type_name = "RenderEnable";
		constexpr static rivet::rivet_type_id RenderEnable_type_id = 0x393a3cef;
		constexpr static std::string_view PrintErrorMarkers_type_name = "PrintErrorMarkers";
		constexpr static rivet::rivet_type_id PrintErrorMarkers_type_id = 0x37388d78;
		constexpr static std::string_view EasyDebug_type_name = "EasyDebug";
		constexpr static rivet::rivet_type_id EasyDebug_type_id = 0xf4aae66d;
		constexpr static std::string_view UseDebugMenuInput_type_name = "UseDebugMenuInput";
		constexpr static rivet::rivet_type_id UseDebugMenuInput_type_id = 0x4c500304;
		constexpr static std::string_view UseAltDebugMenuInput_type_name = "UseAltDebugMenuInput";
		constexpr static rivet::rivet_type_id UseAltDebugMenuInput_type_id = 0x7988e93;
		constexpr static std::string_view DebugMenuLeftStickAsDPad_type_name = "DebugMenuLeftStickAsDPad";
		constexpr static rivet::rivet_type_id DebugMenuLeftStickAsDPad_type_id = 0x94770b6a;
		constexpr static std::string_view UpdatePhase_type_name = "UpdatePhase";
		constexpr static rivet::rivet_type_id UpdatePhase_type_id = 0x74e98f90;
		constexpr static std::string_view PostActorUpdate_type_name = "PostActorUpdate";
		constexpr static rivet::rivet_type_id PostActorUpdate_type_id = 0xf47191a5;
		constexpr static std::string_view PrototypeMessageDebug_type_name = "PrototypeMessageDebug";
		constexpr static rivet::rivet_type_id PrototypeMessageDebug_type_id = 0x12aa6ea2; 

		explicit GUISettings() = default;
		explicit GUISettings([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		bool RenderEnable {};
		bool PrintErrorMarkers {};
		bool EasyDebug {};
		bool UseDebugMenuInput {};
		bool UseAltDebugMenuInput {};
		bool DebugMenuLeftStickAsDPad {};
		uint32_t UpdatePhase {};
		bool PostActorUpdate {};
		bool PrototypeMessageDebug {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<GUISettings>;
	};
} // namespace rivet::ddl::generated

// clang-format on