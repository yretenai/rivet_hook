// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/GroundResponseElement.hpp>
#include <rivet/ddl/generated/HeroJumpConfigCollection.hpp>
#include <rivet/ddl/generated/HeroGroovitronConfig.hpp>
#include <rivet/ddl/generated/HeroSpeedConfig.hpp>
#include <rivet/ddl/generated/HeroTetherConfig.hpp>
#include <rivet/ddl/generated/HeroWallStickConfig.hpp>
#include <rivet/ddl/generated/HeroWallRunConfig.hpp>
#include <rivet/ddl/generated/HeroLedgeConfig.hpp>
#include <rivet/ddl/generated/HeroRespawnConfig.hpp>
#include <rivet/ddl/generated/HeroBounceConfig.hpp>
#include <rivet/ddl/generated/HeroHookshotConfig.hpp>
#include <rivet/ddl/generated/HeroSlingshotConfig.hpp>
#include <rivet/ddl/generated/HeroDashConfig.hpp>
#include <rivet/ddl/generated/HeroSkyDiveConfig.hpp>
#include <rivet/ddl/generated/HeroSwimConfig.hpp>
#include <rivet/ddl/generated/HeroShadowDimensionConfig.hpp>
#include <rivet/ddl/generated/HeroSwingshotConfig.hpp>
#include <rivet/ddl/generated/HeroMagbootConfig.hpp> 

#include <rivet/ddl/generated/HeroTraversalConfig.hpp>

namespace rivet::ddl::generated {
	HeroTraversalConfig::HeroTraversalConfig([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): ConfigBase(serialized) {
		WallInteractionMinHeight = serialized->get_float(WallInteractionMinHeight_type_id, 0.800000f);
		BounceInteractMinWallHeight = serialized->get_float(BounceInteractMinWallHeight_type_id, 2.000000f);
		ZeroGJumpTimeScaleModifier = serialized->get_float(ZeroGJumpTimeScaleModifier_type_id, 0.750000f);
		ZeroGJumpMinHeightModifier = serialized->get_float(ZeroGJumpMinHeightModifier_type_id, 1.000000f);
		ZeroGJumpMaxHeightModifier = serialized->get_float(ZeroGJumpMaxHeightModifier_type_id, 1.500000f);
		WallJumpSpeeds = serialized->unwrap_into<rivet::ddl::generated::HeroSpeedConfig>(WallJumpSpeeds_type_id);
		WallStickConfig = serialized->unwrap_into<rivet::ddl::generated::HeroWallStickConfig>(WallStickConfig_type_id);
		WallRunConfig = serialized->unwrap_into<rivet::ddl::generated::HeroWallRunConfig>(WallRunConfig_type_id);
		WallRunJumpSpeeds = serialized->unwrap_into<rivet::ddl::generated::HeroSpeedConfig>(WallRunJumpSpeeds_type_id);
		GlideSpeeds = serialized->unwrap_into<rivet::ddl::generated::HeroSpeedConfig>(GlideSpeeds_type_id);
		BounceConfig = serialized->unwrap_into<rivet::ddl::generated::HeroBounceConfig>(BounceConfig_type_id);
		LedgeConfig = serialized->unwrap_into<rivet::ddl::generated::HeroLedgeConfig>(LedgeConfig_type_id);
		LedgeJumpSpeeds = serialized->unwrap_into<rivet::ddl::generated::HeroSpeedConfig>(LedgeJumpSpeeds_type_id);
		VaultJumpSpeeds = serialized->unwrap_into<rivet::ddl::generated::HeroSpeedConfig>(VaultJumpSpeeds_type_id);
		SwingshotConfig = serialized->unwrap_into<rivet::ddl::generated::HeroSwingshotConfig>(SwingshotConfig_type_id);
		HookshotConfig = serialized->unwrap_into<rivet::ddl::generated::HeroHookshotConfig>(HookshotConfig_type_id);
		SlingshotConfig = serialized->unwrap_into<rivet::ddl::generated::HeroSlingshotConfig>(SlingshotConfig_type_id);
		TetherConfig = serialized->unwrap_into<rivet::ddl::generated::HeroTetherConfig>(TetherConfig_type_id);
		SwimConfig = serialized->unwrap_into<rivet::ddl::generated::HeroSwimConfig>(SwimConfig_type_id);
		DashConfig = serialized->unwrap_into<rivet::ddl::generated::HeroDashConfig>(DashConfig_type_id);
		MagbootConfig = serialized->unwrap_into<rivet::ddl::generated::HeroMagbootConfig>(MagbootConfig_type_id);
		SkyDiveConfig = serialized->unwrap_into<rivet::ddl::generated::HeroSkyDiveConfig>(SkyDiveConfig_type_id);
		GroovyConfig = serialized->unwrap_into<rivet::ddl::generated::HeroGroovitronConfig>(GroovyConfig_type_id);
		RespawnConfig = serialized->unwrap_into<rivet::ddl::generated::HeroRespawnConfig>(RespawnConfig_type_id);
		PortalZipConfig = serialized->get_string(PortalZipConfig_type_id, {});
		OpenPocketDimConfig = serialized->get_string(OpenPocketDimConfig_type_id, {});
		ShadowDimensionConfig = serialized->unwrap_into<rivet::ddl::generated::HeroShadowDimensionConfig>(ShadowDimensionConfig_type_id);
		DropoffForwardTol = serialized->get_float(DropoffForwardTol_type_id, 0.330000f);
		DropoffBackTol = serialized->get_float(DropoffBackTol_type_id, -0.500000f);
		DropoffLeftRightTol = serialized->get_float(DropoffLeftRightTol_type_id, 0.400000f);
		DropoffInitiatedForwardTol = serialized->get_float(DropoffInitiatedForwardTol_type_id, 1.250000f);
		DropoffInitiatedLeftRightTol = serialized->get_float(DropoffInitiatedLeftRightTol_type_id, 1.200000f);
		DropoffUpTol = serialized->get_float(DropoffUpTol_type_id, 0.200000f);
		DropoffDownTol = serialized->get_float(DropoffDownTol_type_id, -0.200000f);
		DropoffDropDistanceMax = serialized->get_float(DropoffDropDistanceMax_type_id, 2.100000f);
		DropoffDropDistanceMin = serialized->get_float(DropoffDropDistanceMin_type_id, 1.600000f);
		MaximumMidairJumps = serialized->get_uint32(MaximumMidairJumps_type_id, 1u);
		JumpConfigs = serialized->unwrap_into<rivet::ddl::generated::HeroJumpConfigCollection>(JumpConfigs_type_id);
		GroundResponse = serialized->unwrap_into_many<rivet::ddl::generated::GroundResponseElement>(GroundResponse_type_id);
		GrindConfig = serialized->get_string(GrindConfig_type_id, {});
		HoverbootConfig = serialized->get_string(HoverbootConfig_type_id, {});
		SlideConfig = serialized->get_string(SlideConfig_type_id, {}); 
	}

	[[nodiscard]] auto
	HeroTraversalConfig::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	HeroTraversalConfig::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<HeroTraversalConfig> {
		if (incoming_type_id == HeroTraversalConfig::type_id) {
			return std::make_shared<HeroTraversalConfig>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
