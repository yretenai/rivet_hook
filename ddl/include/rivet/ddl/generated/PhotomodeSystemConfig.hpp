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

#include <rivet/ddl/generated/PhotomodeSystemSharedConfig.hpp> 

namespace rivet::ddl::generated {
	struct BlackoutData;
	struct GoldBoltRewardItem;
	struct ModeUnavailableData;
	struct OrbitCamData;
	struct SelfieModeData;
	struct IntersectionFadeData;
	struct FreeMoveCamData;
	struct DefaultPhotoLightSettings;
	struct FirstPersonCamData;
	struct BlackoutFilterItem; 

	struct RIVET_DDL_SHARED PhotomodeSystemConfig : PhotomodeSystemSharedConfig {
		constexpr const static std::string_view type_name = "PhotomodeSystemConfig";
		constexpr const static rivet::rivet_type_id type_id = 0xd3a6731e;

		constexpr const static std::string_view ModeUnavailable_type_name = "ModeUnavailable";
		constexpr const static rivet::rivet_type_id ModeUnavailable_type_id = 0x4bbb8104;
		constexpr const static std::string_view SelfieModeUnavailable_type_name = "SelfieModeUnavailable";
		constexpr const static rivet::rivet_type_id SelfieModeUnavailable_type_id = 0xab87ad0f;
		constexpr const static std::string_view CamCollisRad_type_name = "CamCollisRad";
		constexpr const static rivet::rivet_type_id CamCollisRad_type_id = 0x3b89fd7d;
		constexpr const static std::string_view SavePauseTime_type_name = "SavePauseTime";
		constexpr const static rivet::rivet_type_id SavePauseTime_type_id = 0x4758b254;
		constexpr const static std::string_view DofRangeNear_type_name = "DofRangeNear";
		constexpr const static rivet::rivet_type_id DofRangeNear_type_id = 0xa4afead0;
		constexpr const static std::string_view FacePoseMax_type_name = "FacePoseMax";
		constexpr const static rivet::rivet_type_id FacePoseMax_type_id = 0xaf7db4d1;
		constexpr const static std::string_view BodyPoseNeutralMax_type_name = "BodyPoseNeutralMax";
		constexpr const static rivet::rivet_type_id BodyPoseNeutralMax_type_id = 0xd28c99e0;
		constexpr const static std::string_view BodyPoseMeleeMax_type_name = "BodyPoseMeleeMax";
		constexpr const static rivet::rivet_type_id BodyPoseMeleeMax_type_id = 0x4a5913fb;
		constexpr const static std::string_view BodyPosePistolMax_type_name = "BodyPosePistolMax";
		constexpr const static rivet::rivet_type_id BodyPosePistolMax_type_id = 0xdfaec09f;
		constexpr const static std::string_view BodyPoseRifleMax_type_name = "BodyPoseRifleMax";
		constexpr const static rivet::rivet_type_id BodyPoseRifleMax_type_id = 0x84e91b1f;
		constexpr const static std::string_view BodyPoseThrownMax_type_name = "BodyPoseThrownMax";
		constexpr const static rivet::rivet_type_id BodyPoseThrownMax_type_id = 0x7b177c29;
		constexpr const static std::string_view BodyPoseHeavyMax_type_name = "BodyPoseHeavyMax";
		constexpr const static rivet::rivet_type_id BodyPoseHeavyMax_type_id = 0x83a80b34;
		constexpr const static std::string_view LoadoutConfig_type_name = "LoadoutConfig";
		constexpr const static rivet::rivet_type_id LoadoutConfig_type_id = 0xaa7d7769;
		constexpr const static std::string_view SelfieMode_type_name = "SelfieMode";
		constexpr const static rivet::rivet_type_id SelfieMode_type_id = 0x34819132;
		constexpr const static std::string_view SelfieModeRivet_type_name = "SelfieModeRivet";
		constexpr const static rivet::rivet_type_id SelfieModeRivet_type_id = 0x9ea3f560;
		constexpr const static std::string_view SelfieModeClank_type_name = "SelfieModeClank";
		constexpr const static rivet::rivet_type_id SelfieModeClank_type_id = 0x8368daab;
		constexpr const static std::string_view SelfieModeKit_type_name = "SelfieModeKit";
		constexpr const static rivet::rivet_type_id SelfieModeKit_type_id = 0x4a923ecd;
		constexpr const static std::string_view IntersectionFade_type_name = "IntersectionFade";
		constexpr const static rivet::rivet_type_id IntersectionFade_type_id = 0xd9fd1df8;
		constexpr const static std::string_view FreeMove_type_name = "FreeMove";
		constexpr const static rivet::rivet_type_id FreeMove_type_id = 0x95f32ba9;
		constexpr const static std::string_view OrbitCam_type_name = "OrbitCam";
		constexpr const static rivet::rivet_type_id OrbitCam_type_id = 0xe565e930;
		constexpr const static std::string_view FirstPerson_type_name = "FirstPerson";
		constexpr const static rivet::rivet_type_id FirstPerson_type_id = 0x15d76f0d;
		constexpr const static std::string_view LightDefaults_type_name = "LightDefaults";
		constexpr const static rivet::rivet_type_id LightDefaults_type_id = 0x96fa27bc;
		constexpr const static std::string_view GoldBoltRewardItems_type_name = "GoldBoltRewardItems";
		constexpr const static rivet::rivet_type_id GoldBoltRewardItems_type_id = 0xec3f85c7;
		constexpr const static std::string_view BlackoutFilterItems_type_name = "BlackoutFilterItems";
		constexpr const static rivet::rivet_type_id BlackoutFilterItems_type_id = 0x737afc59;
		constexpr const static std::string_view BlackoutFilterData_type_name = "BlackoutFilterData";
		constexpr const static rivet::rivet_type_id BlackoutFilterData_type_id = 0x14020c89; 

		explicit PhotomodeSystemConfig() = default;
		explicit PhotomodeSystemConfig([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::shared_ptr<rivet::ddl::generated::ModeUnavailableData> ModeUnavailable {};
		std::shared_ptr<rivet::ddl::generated::ModeUnavailableData> SelfieModeUnavailable {};
		float CamCollisRad {};
		float SavePauseTime {};
		float DofRangeNear {};
		int32_t FacePoseMax {};
		int32_t BodyPoseNeutralMax {};
		int32_t BodyPoseMeleeMax {};
		int32_t BodyPosePistolMax {};
		int32_t BodyPoseRifleMax {};
		int32_t BodyPoseThrownMax {};
		int32_t BodyPoseHeavyMax {};
		std::string_view LoadoutConfig {};
		std::shared_ptr<rivet::ddl::generated::SelfieModeData> SelfieMode {};
		std::shared_ptr<rivet::ddl::generated::SelfieModeData> SelfieModeRivet {};
		std::shared_ptr<rivet::ddl::generated::SelfieModeData> SelfieModeClank {};
		std::shared_ptr<rivet::ddl::generated::SelfieModeData> SelfieModeKit {};
		std::shared_ptr<rivet::ddl::generated::IntersectionFadeData> IntersectionFade {};
		std::shared_ptr<rivet::ddl::generated::FreeMoveCamData> FreeMove {};
		std::shared_ptr<rivet::ddl::generated::OrbitCamData> OrbitCam {};
		std::shared_ptr<rivet::ddl::generated::FirstPersonCamData> FirstPerson {};
		std::shared_ptr<rivet::ddl::generated::DefaultPhotoLightSettings> LightDefaults {};
		std::vector<std::shared_ptr<rivet::ddl::generated::GoldBoltRewardItem>> GoldBoltRewardItems {};
		std::vector<std::shared_ptr<rivet::ddl::generated::BlackoutFilterItem>> BlackoutFilterItems {};
		std::shared_ptr<rivet::ddl::generated::BlackoutData> BlackoutFilterData {}; 

		auto
		get_type_id() const noexcept -> rivet::rivet_type_id override;

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<PhotomodeSystemConfig>;
	};
} // namespace rivet::ddl::generated

// clang-format on