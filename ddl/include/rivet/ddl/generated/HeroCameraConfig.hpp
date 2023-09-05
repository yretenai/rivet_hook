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
	struct RIVET_DDL_SHARED HeroCameraConfig : rivet::structures::rivet_ddl_base {
		constexpr const static std::string_view type_name = "HeroCameraConfig";
		constexpr const static rivet::rivet_type_id type_id = 0xf1c01c30;

		constexpr const static std::string_view DefaultCameraFollowConfig_type_name = "DefaultCameraFollowConfig";
		constexpr const static rivet::rivet_type_id DefaultCameraFollowConfig_type_id = 0x479a8857;
		constexpr const static std::string_view DefaultCameraAimContextConfig_type_name = "DefaultCameraAimContextConfig";
		constexpr const static rivet::rivet_type_id DefaultCameraAimContextConfig_type_id = 0xeacaba4d;
		constexpr const static std::string_view DefaultCameraStickConfig_type_name = "DefaultCameraStickConfig";
		constexpr const static rivet::rivet_type_id DefaultCameraStickConfig_type_id = 0x205c944;
		constexpr const static std::string_view DefaultCameraFollowFastConfig_type_name = "DefaultCameraFollowFastConfig";
		constexpr const static rivet::rivet_type_id DefaultCameraFollowFastConfig_type_id = 0x85f30c6d;
		constexpr const static std::string_view CasualCameraFollowConfig_type_name = "CasualCameraFollowConfig";
		constexpr const static rivet::rivet_type_id CasualCameraFollowConfig_type_id = 0xeba23786;
		constexpr const static std::string_view StrafeCameraAimContextConfig_type_name = "StrafeCameraAimContextConfig";
		constexpr const static rivet::rivet_type_id StrafeCameraAimContextConfig_type_id = 0xd65cd1a2;
		constexpr const static std::string_view StrafeCameraStickConfig_type_name = "StrafeCameraStickConfig";
		constexpr const static rivet::rivet_type_id StrafeCameraStickConfig_type_id = 0xe68333e6;
		constexpr const static std::string_view LookCameraStickConfig_type_name = "LookCameraStickConfig";
		constexpr const static rivet::rivet_type_id LookCameraStickConfig_type_id = 0xf078b6f0;
		constexpr const static std::string_view OTSCameraAimContextConfig_type_name = "OTSCameraAimContextConfig";
		constexpr const static rivet::rivet_type_id OTSCameraAimContextConfig_type_id = 0x89480bbd;
		constexpr const static std::string_view OTSCameraStickConfig_type_name = "OTSCameraStickConfig";
		constexpr const static rivet::rivet_type_id OTSCameraStickConfig_type_id = 0xafb5e6bd;
		constexpr const static std::string_view LedgeCameraFollowConfig_type_name = "LedgeCameraFollowConfig";
		constexpr const static rivet::rivet_type_id LedgeCameraFollowConfig_type_id = 0xb9d82580;
		constexpr const static std::string_view LedgeCameraAimContextConfig_type_name = "LedgeCameraAimContextConfig";
		constexpr const static rivet::rivet_type_id LedgeCameraAimContextConfig_type_id = 0x18a307c2;
		constexpr const static std::string_view ClimbCameraFollowConfig_type_name = "ClimbCameraFollowConfig";
		constexpr const static rivet::rivet_type_id ClimbCameraFollowConfig_type_id = 0xd44919ee;
		constexpr const static std::string_view ClimbCameraAimContextConfig_type_name = "ClimbCameraAimContextConfig";
		constexpr const static rivet::rivet_type_id ClimbCameraAimContextConfig_type_id = 0xb5723db8;
		constexpr const static std::string_view GlideCameraFollowConfig_type_name = "GlideCameraFollowConfig";
		constexpr const static rivet::rivet_type_id GlideCameraFollowConfig_type_id = 0x6697dec2;
		constexpr const static std::string_view GlideCameraAimContextConfig_type_name = "GlideCameraAimContextConfig";
		constexpr const static rivet::rivet_type_id GlideCameraAimContextConfig_type_id = 0xf1a297ca;
		constexpr const static std::string_view SwingshotCameraFollowConfig_type_name = "SwingshotCameraFollowConfig";
		constexpr const static rivet::rivet_type_id SwingshotCameraFollowConfig_type_id = 0xa1343ef7;
		constexpr const static std::string_view SwingshotCameraAimContextConfig_type_name = "SwingshotCameraAimContextConfig";
		constexpr const static rivet::rivet_type_id SwingshotCameraAimContextConfig_type_id = 0x1f9ff7c0;
		constexpr const static std::string_view SlingshotCameraAimContextConfig_type_name = "SlingshotCameraAimContextConfig";
		constexpr const static rivet::rivet_type_id SlingshotCameraAimContextConfig_type_id = 0x13a4f0db;
		constexpr const static std::string_view TetherCameraAimContextConfig_type_name = "TetherCameraAimContextConfig";
		constexpr const static rivet::rivet_type_id TetherCameraAimContextConfig_type_id = 0x7b26fb27;
		constexpr const static std::string_view SwimCameraFollowConfig_type_name = "SwimCameraFollowConfig";
		constexpr const static rivet::rivet_type_id SwimCameraFollowConfig_type_id = 0x89e05de0;
		constexpr const static std::string_view SwimCameraAimContextConfig_type_name = "SwimCameraAimContextConfig";
		constexpr const static rivet::rivet_type_id SwimCameraAimContextConfig_type_id = 0x4821457e;
		constexpr const static std::string_view HydropackCameraFollowConfig_type_name = "HydropackCameraFollowConfig";
		constexpr const static rivet::rivet_type_id HydropackCameraFollowConfig_type_id = 0x52fefed9;
		constexpr const static std::string_view HydropackCameraAimContextConfig_type_name = "HydropackCameraAimContextConfig";
		constexpr const static rivet::rivet_type_id HydropackCameraAimContextConfig_type_id = 0xdb7c25ef;
		constexpr const static std::string_view ConversationCameraAimContextConfig_type_name = "ConversationCameraAimContextConfig";
		constexpr const static rivet::rivet_type_id ConversationCameraAimContextConfig_type_id = 0x27cd16a7;
		constexpr const static std::string_view WallJumpCameraAimContextConfig_type_name = "WallJumpCameraAimContextConfig";
		constexpr const static rivet::rivet_type_id WallJumpCameraAimContextConfig_type_id = 0x40ada22a;
		constexpr const static std::string_view TaxiCameraAimContextConfig_type_name = "TaxiCameraAimContextConfig";
		constexpr const static rivet::rivet_type_id TaxiCameraAimContextConfig_type_id = 0x5d3cce19;
		constexpr const static std::string_view GrindCameraFollowConfig_type_name = "GrindCameraFollowConfig";
		constexpr const static rivet::rivet_type_id GrindCameraFollowConfig_type_id = 0x8425c865;
		constexpr const static std::string_view GrindCameraAimContextConfig_type_name = "GrindCameraAimContextConfig";
		constexpr const static rivet::rivet_type_id GrindCameraAimContextConfig_type_id = 0xa14226da;
		constexpr const static std::string_view RideLedgeCameraAimContextConfig_type_name = "RideLedgeCameraAimContextConfig";
		constexpr const static rivet::rivet_type_id RideLedgeCameraAimContextConfig_type_id = 0x82ad44fa;
		constexpr const static std::string_view SlideCameraFollowConfig_type_name = "SlideCameraFollowConfig";
		constexpr const static rivet::rivet_type_id SlideCameraFollowConfig_type_id = 0x67b9f91d;
		constexpr const static std::string_view SlideCameraAimContextConfig_type_name = "SlideCameraAimContextConfig";
		constexpr const static rivet::rivet_type_id SlideCameraAimContextConfig_type_id = 0xce9757da;
		constexpr const static std::string_view WallRunCameraAimContextConfig_type_name = "WallRunCameraAimContextConfig";
		constexpr const static rivet::rivet_type_id WallRunCameraAimContextConfig_type_id = 0xf687d7fe;
		constexpr const static std::string_view MagbootLaunchCameraAimContextConfig_type_name = "MagbootLaunchCameraAimContextConfig";
		constexpr const static rivet::rivet_type_id MagbootLaunchCameraAimContextConfig_type_id = 0xda3331f9;
		constexpr const static std::string_view HoverbootCameraAimContextConfig_type_name = "HoverbootCameraAimContextConfig";
		constexpr const static rivet::rivet_type_id HoverbootCameraAimContextConfig_type_id = 0xdac953eb;
		constexpr const static std::string_view PassiveShiftCameraAimContextConfig_type_name = "PassiveShiftCameraAimContextConfig";
		constexpr const static rivet::rivet_type_id PassiveShiftCameraAimContextConfig_type_id = 0x2b355a16; 

		explicit HeroCameraConfig() = default;
		explicit HeroCameraConfig([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::string_view DefaultCameraFollowConfig {};
		std::string_view DefaultCameraAimContextConfig {};
		std::string_view DefaultCameraStickConfig {};
		std::string_view DefaultCameraFollowFastConfig {};
		std::string_view CasualCameraFollowConfig {};
		std::string_view StrafeCameraAimContextConfig {};
		std::string_view StrafeCameraStickConfig {};
		std::string_view LookCameraStickConfig {};
		std::string_view OTSCameraAimContextConfig {};
		std::string_view OTSCameraStickConfig {};
		std::string_view LedgeCameraFollowConfig {};
		std::string_view LedgeCameraAimContextConfig {};
		std::string_view ClimbCameraFollowConfig {};
		std::string_view ClimbCameraAimContextConfig {};
		std::string_view GlideCameraFollowConfig {};
		std::string_view GlideCameraAimContextConfig {};
		std::string_view SwingshotCameraFollowConfig {};
		std::string_view SwingshotCameraAimContextConfig {};
		std::string_view SlingshotCameraAimContextConfig {};
		std::string_view TetherCameraAimContextConfig {};
		std::string_view SwimCameraFollowConfig {};
		std::string_view SwimCameraAimContextConfig {};
		std::string_view HydropackCameraFollowConfig {};
		std::string_view HydropackCameraAimContextConfig {};
		std::string_view ConversationCameraAimContextConfig {};
		std::string_view WallJumpCameraAimContextConfig {};
		std::string_view TaxiCameraAimContextConfig {};
		std::string_view GrindCameraFollowConfig {};
		std::string_view GrindCameraAimContextConfig {};
		std::string_view RideLedgeCameraAimContextConfig {};
		std::string_view SlideCameraFollowConfig {};
		std::string_view SlideCameraAimContextConfig {};
		std::string_view WallRunCameraAimContextConfig {};
		std::string_view MagbootLaunchCameraAimContextConfig {};
		std::string_view HoverbootCameraAimContextConfig {};
		std::string_view PassiveShiftCameraAimContextConfig {}; 

		auto
		get_type_id() const noexcept -> rivet::rivet_type_id override;

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<HeroCameraConfig>;
	};
} // namespace rivet::ddl::generated

// clang-format on