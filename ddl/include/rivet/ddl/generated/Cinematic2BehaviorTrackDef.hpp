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

#include <rivet/ddl/generated/bitsets/xb52df7e7.hpp> 

namespace rivet::ddl::generated {
	struct Cinematic2MayaExportInfo;
	struct Cinematic2BehaviorPlayDriverActionDef;
	struct Cinematic2BehaviorGoToActionDef;
	struct Cinematic2BehaviorPlayAnimClipActionDef;
	struct Cinematic2TrackTagsDef; 

	struct RIVET_DDL_SHARED Cinematic2BehaviorTrackDef : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "Cinematic2BehaviorTrackDef";
		constexpr static rivet::rivet_type_id type_id = 0xae164b9c;

		constexpr static std::string_view Id_type_name = "Id";
		constexpr static rivet::rivet_type_id Id_type_id = 0x8a514a8d;
		constexpr static std::string_view Name_type_name = "Name";
		constexpr static rivet::rivet_type_id Name_type_id = 0x6eb3beb6;
		constexpr static std::string_view PlatformFilter_type_name = "PlatformFilter";
		constexpr static rivet::rivet_type_id PlatformFilter_type_id = 0x92542397;
		constexpr static std::string_view Tags_type_name = "Tags";
		constexpr static rivet::rivet_type_id Tags_type_id = 0x5f2c5496;
		constexpr static std::string_view Global_type_name = "Global";
		constexpr static rivet::rivet_type_id Global_type_id = 0xd67dc5e4;
		constexpr static std::string_view PlayAnimActions_type_name = "PlayAnimActions";
		constexpr static rivet::rivet_type_id PlayAnimActions_type_id = 0x2a95c808;
		constexpr static std::string_view BehaviorGoToActions_type_name = "BehaviorGoToActions";
		constexpr static rivet::rivet_type_id BehaviorGoToActions_type_id = 0x1a0c8f02;
		constexpr static std::string_view PlayDriverActions_type_name = "PlayDriverActions";
		constexpr static rivet::rivet_type_id PlayDriverActions_type_id = 0xf706a76;
		constexpr static std::string_view MayaExportInfo_type_name = "MayaExportInfo";
		constexpr static rivet::rivet_type_id MayaExportInfo_type_id = 0xa1192d52; 

		explicit Cinematic2BehaviorTrackDef() = default;
		explicit Cinematic2BehaviorTrackDef([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		uint64_t Id {};
		std::string_view Name {};
		rivet::ddl::generated::xb52df7e7 PlatformFilter {};
		std::shared_ptr<rivet::ddl::generated::Cinematic2TrackTagsDef> Tags {};
		bool Global {};
		std::vector<std::shared_ptr<rivet::ddl::generated::Cinematic2BehaviorPlayAnimClipActionDef>> PlayAnimActions {};
		std::vector<std::shared_ptr<rivet::ddl::generated::Cinematic2BehaviorGoToActionDef>> BehaviorGoToActions {};
		std::vector<std::shared_ptr<rivet::ddl::generated::Cinematic2BehaviorPlayDriverActionDef>> PlayDriverActions {};
		std::shared_ptr<rivet::ddl::generated::Cinematic2MayaExportInfo> MayaExportInfo {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<Cinematic2BehaviorTrackDef>;
	};
} // namespace rivet::ddl::generated

// clang-format on