// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/DebugPlaytestHeroInfo.hpp>
#include <rivet/ddl/generated/DebugPlaytestLoadInfo.hpp>
#include <rivet/ddl/generated/DebugPlaytestMissionInfo.hpp> 

#include <rivet/ddl/generated/DebugPlaytest.hpp>

namespace rivet::ddl::generated {
	DebugPlaytest::DebugPlaytest([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		Name = serialized->get_string(Name_type_id);
		Description = serialized->get_string(Description_type_id);
		CommandLineAlias = serialized->get_string(CommandLineAlias_type_id);
		IsDemo = serialized->get_bool(IsDemo_type_id);
		DemoName = serialized->get_string(DemoName_type_id);
		CineTimeCodeMode = serialized->get_enum<rivet::ddl::generated::xc74f3c1>(CineTimeCodeMode_type_id, rivet::ddl::generated::xc74f3c1_values);
		EnableRecoveryLedgesOnWalkOff = serialized->get_bool(EnableRecoveryLedgesOnWalkOff_type_id);
		EnableRecoveryLedgesOnRunOffCombat = serialized->get_bool(EnableRecoveryLedgesOnRunOffCombat_type_id);
		EnableRecoveryLedgesOnRunOffNoCombat = serialized->get_bool(EnableRecoveryLedgesOnRunOffNoCombat_type_id);
		EnableRecoveryLedgesOnKnockOff = serialized->get_bool(EnableRecoveryLedgesOnKnockOff_type_id);
		EnableFrontRecoveryLedgesOnJump = serialized->get_bool(EnableFrontRecoveryLedgesOnJump_type_id);
		EnablePlatformingShadowDecal = serialized->get_bool(EnablePlatformingShadowDecal_type_id);
		RiftTetherCombatTargeting = serialized->get_bool(RiftTetherCombatTargeting_type_id);
		FlyerCameraStickOption = serialized->get_enum<rivet::ddl::generated::FlyerCameraStickOption>(FlyerCameraStickOption_type_id, rivet::ddl::generated::FlyerCameraStickOption_values);
		FlyerCameraResponsivenessOption = serialized->get_enum<rivet::ddl::generated::x8b42b541>(FlyerCameraResponsivenessOption_type_id, rivet::ddl::generated::x8b42b541_values);
		FlyerStickInvert = serialized->get_bool(FlyerStickInvert_type_id);
		MissionInfo = serialized->unwrap_into<rivet::ddl::generated::DebugPlaytestMissionInfo>(MissionInfo_type_id);
		LoadInfo = serialized->unwrap_into<rivet::ddl::generated::DebugPlaytestLoadInfo>(LoadInfo_type_id);
		OverrideHero = serialized->get_bool(OverrideHero_type_id);
		HeroInfo = serialized->unwrap_into<rivet::ddl::generated::DebugPlaytestHeroInfo>(HeroInfo_type_id); 
	}

	auto
	DebugPlaytest::get_type_id() const noexcept -> rivet::rivet_type_id {
		return type_id;
	}

	[[nodiscard]] auto
	DebugPlaytest::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	DebugPlaytest::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<DebugPlaytest> {
		if (incoming_type_id == DebugPlaytest::type_id) {
			return std::make_shared<DebugPlaytest>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated