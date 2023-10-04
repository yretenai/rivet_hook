// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/HeroForceFieldSource.hpp>
#include <rivet/ddl/generated/HeroSpeedVFXKeyFrameModifierData.hpp>
#include <rivet/ddl/generated/HeroWaterSplashSpeedData.hpp>
#include <rivet/ddl/generated/HeroMaterialGlobal.hpp>
#include <rivet/ddl/generated/WaterImpulseGeneratorPrius.hpp>
#include <rivet/ddl/generated/HeroDecalShadowData.hpp>
#include <rivet/ddl/generated/HeroWetnessConfig.hpp> 

#include <rivet/ddl/generated/HeroEffectsConfig.hpp>

namespace rivet::ddl::generated {
	HeroEffectsConfig::HeroEffectsConfig([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		WetToDryTime = serialized->get_float(WetToDryTime_type_id);
		InAirHeight = serialized->get_float(InAirHeight_type_id);
		InWaterDepth = serialized->get_float(InWaterDepth_type_id);
		SpeedVFXKeyFrameModifiers = serialized->unwrap_into_many<rivet::ddl::generated::HeroSpeedVFXKeyFrameModifierData>(SpeedVFXKeyFrameModifiers_type_id);
		WaterSplashSpeeds = serialized->unwrap_into<rivet::ddl::generated::HeroWaterSplashSpeedData>(WaterSplashSpeeds_type_id);
		MaterialGlobals = serialized->unwrap_into_many<rivet::ddl::generated::HeroMaterialGlobal>(MaterialGlobals_type_id);
		ForceFieldSources = serialized->unwrap_into_many<rivet::ddl::generated::HeroForceFieldSource>(ForceFieldSources_type_id);
		WaterImpulseGeneratorPrius = serialized->unwrap_into<rivet::ddl::generated::WaterImpulseGeneratorPrius>(WaterImpulseGeneratorPrius_type_id);
		DecalShadow = serialized->unwrap_into<rivet::ddl::generated::HeroDecalShadowData>(DecalShadow_type_id);
		WetnessConfig = serialized->unwrap_into<rivet::ddl::generated::HeroWetnessConfig>(WetnessConfig_type_id); 
	}

	[[nodiscard]] auto
	HeroEffectsConfig::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	HeroEffectsConfig::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<HeroEffectsConfig> {
		if (incoming_type_id == HeroEffectsConfig::type_id) {
			return std::make_shared<HeroEffectsConfig>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated