// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/DimensionalPulseConfig.hpp>

namespace rivet::ddl::generated {
	DimensionalPulseConfig::DimensionalPulseConfig([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): ConfigBase(serialized) {
		PulseRadius = serialized->get_float(PulseRadius_type_id);
		PulseDuration = serialized->get_float(PulseDuration_type_id);
		EffectChance = serialized->get_float(EffectChance_type_id);
		PreCompositeShader = serialized->get_string(PreCompositeShader_type_id);
		PostCompositeShader = serialized->get_string(PostCompositeShader_type_id);
		PostHitEffectLifetime = serialized->get_float(PostHitEffectLifetime_type_id);
		DefaultTargetConduit = serialized->get_string(DefaultTargetConduit_type_id); 
	}

	[[nodiscard]] auto
	DimensionalPulseConfig::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	DimensionalPulseConfig::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<DimensionalPulseConfig> {
		if (incoming_type_id == DimensionalPulseConfig::type_id) {
			return std::make_shared<DimensionalPulseConfig>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated