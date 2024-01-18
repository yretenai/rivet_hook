// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/GamePreferencesSave.hpp>
#include <rivet/ddl/generated/MouseControl.hpp> 

#include <rivet/ddl/generated/PreferencesSave.hpp>

namespace rivet::ddl::generated {
	PreferencesSave::PreferencesSave([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		LookSensitivity = serialized->get_float(LookSensitivity_type_id, 1.000000f);
		GammaCorrection = serialized->get_float(GammaCorrection_type_id, 0.000000f);
		CameraInvertX = serialized->get_bool(CameraInvertX_type_id, false);
		CameraInvertY = serialized->get_bool(CameraInvertY_type_id, false);
		RumbleEnabled = serialized->get_bool(RumbleEnabled_type_id, true);
		ControllerSpeakerEnabled = serialized->get_bool(ControllerSpeakerEnabled_type_id, true);
		SubtitlesEnabled = serialized->get_bool(SubtitlesEnabled_type_id, false);
		TextSubtitlesEnabled = serialized->get_bool(TextSubtitlesEnabled_type_id, false);
		GoreEnabled = serialized->get_bool(GoreEnabled_type_id, true);
		ProfanityEnabled = serialized->get_bool(ProfanityEnabled_type_id, true);
		OutlinesEnabled = serialized->get_bool(OutlinesEnabled_type_id, true);
		VoiceChatEnabled = serialized->get_bool(VoiceChatEnabled_type_id, true);
		MasterVolume = serialized->get_float(MasterVolume_type_id, 1.000000f);
		MusicVolume = serialized->get_float(MusicVolume_type_id, 1.000000f);
		DialogVolume = serialized->get_float(DialogVolume_type_id, 1.000000f);
		SFXVolume = serialized->get_float(SFXVolume_type_id, 1.000000f);
		UIVolume = serialized->get_float(UIVolume_type_id, 1.000000f);
		HitConfirmVolume = serialized->get_float(HitConfirmVolume_type_id, 0.500000f);
		ControllerSpeakerVolume = serialized->get_float(ControllerSpeakerVolume_type_id, 1.000000f);
		ListeningMode = serialized->get_int32(ListeningMode_type_id, 0u);
		HeadphonesListeningMode = serialized->get_int32(HeadphonesListeningMode_type_id, 3u);
		UIAdjustX = serialized->get_int32(UIAdjustX_type_id, 128u);
		UIAdjustY = serialized->get_int32(UIAdjustY_type_id, 72u);
		UIAdjustW = serialized->get_int32(UIAdjustW_type_id, 0u);
		UIAdjustH = serialized->get_int32(UIAdjustH_type_id, 0u);
		MouseControlNormal = serialized->unwrap_into<rivet::ddl::generated::MouseControl>(MouseControlNormal_type_id);
		MouseControlAiming = serialized->unwrap_into<rivet::ddl::generated::MouseControl>(MouseControlAiming_type_id); 
	}

	[[nodiscard]] auto
	PreferencesSave::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	PreferencesSave::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<PreferencesSave> {
		if (incoming_type_id == PreferencesSave::type_id) {
			return std::make_shared<PreferencesSave>(serialized);
		}

		auto GamePreferencesSave_ptr = GamePreferencesSave::from_substruct(incoming_type_id, serialized);
		if (GamePreferencesSave_ptr != nullptr) {
			return GamePreferencesSave_ptr;
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
