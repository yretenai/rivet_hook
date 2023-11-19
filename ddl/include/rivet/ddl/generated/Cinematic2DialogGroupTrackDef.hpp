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
	struct Cinematic2BehaviorTrackDef;
	struct Cinematic2DialogTrackDef;
	struct Cinematic2TrackTagsDef; 

	struct RIVET_DDL_SHARED Cinematic2DialogGroupTrackDef : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "Cinematic2DialogGroupTrackDef";
		constexpr static rivet::rivet_type_id type_id = 0x249e5601;

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
		constexpr static std::string_view DialogTracks_type_name = "DialogTracks";
		constexpr static rivet::rivet_type_id DialogTracks_type_id = 0xe93d521c;
		constexpr static std::string_view PlayIdleTrack_type_name = "PlayIdleTrack";
		constexpr static rivet::rivet_type_id PlayIdleTrack_type_id = 0xdf189d6a; 

		explicit Cinematic2DialogGroupTrackDef() = default;
		explicit Cinematic2DialogGroupTrackDef([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		uint64_t Id {};
		std::string_view Name {};
		rivet::ddl::generated::xb52df7e7 PlatformFilter {};
		std::shared_ptr<rivet::ddl::generated::Cinematic2TrackTagsDef> Tags {};
		bool Global {};
		std::vector<std::shared_ptr<rivet::ddl::generated::Cinematic2DialogTrackDef>> DialogTracks {};
		std::shared_ptr<rivet::ddl::generated::Cinematic2BehaviorTrackDef> PlayIdleTrack {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<Cinematic2DialogGroupTrackDef>;
	};
} // namespace rivet::ddl::generated

// clang-format on