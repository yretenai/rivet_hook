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
	struct InputSettingsData;
	struct FilterData;
	struct StickerModeData;
	struct PhotoLightSettings;
	struct FrameData;
	struct PhotomodeCameraManagerData; 

	struct RIVET_DDL_SHARED PhotomodeSystemSharedConfig : ConfigBase {
		constexpr const static std::string_view type_name = "PhotomodeSystemSharedConfig";
		constexpr const static rivet::rivet_type_id type_id = 0x41c600f0;

		constexpr const static std::string_view InputSettings_type_name = "InputSettings";
		constexpr const static rivet::rivet_type_id InputSettings_type_id = 0x421458bb;
		constexpr const static std::string_view StickerMode_type_name = "StickerMode";
		constexpr const static rivet::rivet_type_id StickerMode_type_id = 0x94bb6350;
		constexpr const static std::string_view LightSettings_type_name = "LightSettings";
		constexpr const static rivet::rivet_type_id LightSettings_type_id = 0x7e3ed937;
		constexpr const static std::string_view Cameras_type_name = "Cameras";
		constexpr const static rivet::rivet_type_id Cameras_type_id = 0x6ab54452;
		constexpr const static std::string_view Frames_type_name = "Frames";
		constexpr const static rivet::rivet_type_id Frames_type_id = 0xc016c75d;
		constexpr const static std::string_view Filters_type_name = "Filters";
		constexpr const static rivet::rivet_type_id Filters_type_id = 0x799d04b5; 

		explicit PhotomodeSystemSharedConfig() = default;
		explicit PhotomodeSystemSharedConfig([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::shared_ptr<rivet::ddl::generated::InputSettingsData> InputSettings {};
		std::shared_ptr<rivet::ddl::generated::StickerModeData> StickerMode {};
		std::shared_ptr<rivet::ddl::generated::PhotoLightSettings> LightSettings {};
		std::shared_ptr<rivet::ddl::generated::PhotomodeCameraManagerData> Cameras {};
		std::vector<std::shared_ptr<rivet::ddl::generated::FrameData>> Frames {};
		std::vector<std::shared_ptr<rivet::ddl::generated::FilterData>> Filters {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<PhotomodeSystemSharedConfig>;
	};
} // namespace rivet::ddl::generated

// clang-format on
