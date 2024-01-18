// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/GameSettings.hpp>

namespace rivet::ddl::generated {
	GameSettings::GameSettings([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		ServerCamEnable = serialized->get_bool(ServerCamEnable_type_id, false);
		UseLobby = serialized->get_bool(UseLobby_type_id, false);
		UseFrontend = serialized->get_bool(UseFrontend_type_id, false);
		AutoLoad = serialized->get_bool(AutoLoad_type_id, false);
		LanMode = serialized->get_bool(LanMode_type_id, false);
		LateJoinEnable = serialized->get_bool(LateJoinEnable_type_id, true);
		UnlockMultiplayer = serialized->get_bool(UnlockMultiplayer_type_id, false);
		UnlockMultiplayerSave = serialized->get_bool(UnlockMultiplayerSave_type_id, false);
		UnlockAllMultiplayer = serialized->get_bool(UnlockAllMultiplayer_type_id, false);
		UnlockAll = serialized->get_bool(UnlockAll_type_id, false);
		DoLegal = serialized->get_bool(DoLegal_type_id, false);
		AllowPause = serialized->get_bool(AllowPause_type_id, true);
		MemorySyncCapture = serialized->get_bool(MemorySyncCapture_type_id, false);
		JJJEnabled = serialized->get_bool(JJJEnabled_type_id, true);
		JJJOptional = serialized->get_bool(JJJOptional_type_id, true);
		JJJDebugUI = serialized->get_bool(JJJDebugUI_type_id, false);
		JJJTestConfig = serialized->get_bool(JJJTestConfig_type_id, false);
		NewspaperDebugUI = serialized->get_bool(NewspaperDebugUI_type_id, false);
		NewspaperConfig = serialized->get_string(NewspaperConfig_type_id, "configs\\system\\system_newspaper.config");
		UnlockTechWeb = serialized->get_bool(UnlockTechWeb_type_id, false);
		AFKDisconnectEnable = serialized->get_bool(AFKDisconnectEnable_type_id, false);
		AFKDisconnectTime = serialized->get_float(AFKDisconnectTime_type_id, 300.000000f);
		ContinueGameLoad = serialized->get_bool(ContinueGameLoad_type_id, false); 
	}

	[[nodiscard]] auto
	GameSettings::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	GameSettings::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<GameSettings> {
		if (incoming_type_id == GameSettings::type_id) {
			return std::make_shared<GameSettings>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
