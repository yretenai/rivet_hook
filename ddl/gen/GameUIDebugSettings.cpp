// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/GameUIDebugSettings.hpp>

namespace rivet::ddl::generated {
	GameUIDebugSettings::GameUIDebugSettings([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		AllowPause = serialized->get_bool(AllowPause_type_id);
		AllowHUD = serialized->get_bool(AllowHUD_type_id);
		UnlockVendorWeapons = serialized->get_bool(UnlockVendorWeapons_type_id);
		UnlockGalleryEntries = serialized->get_bool(UnlockGalleryEntries_type_id);
		UnlockAudioLogs = serialized->get_bool(UnlockAudioLogs_type_id); 
	}

	[[nodiscard]] auto
	GameUIDebugSettings::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	GameUIDebugSettings::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<GameUIDebugSettings> {
		if (incoming_type_id == GameUIDebugSettings::type_id) {
			return std::make_shared<GameUIDebugSettings>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated