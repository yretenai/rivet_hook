// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/TierData.hpp> 

#include <rivet/ddl/generated/StatusEffectConfuseConfig.hpp>

namespace rivet::ddl::generated {
	StatusEffectConfuseConfig::StatusEffectConfuseConfig([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): StatusEffectConfig(serialized) {
		ConfuseTargetingTiers = serialized->unwrap_into<rivet::ddl::generated::TierData>(ConfuseTargetingTiers_type_id);
		VictimMaterialGraph = serialized->get_string(VictimMaterialGraph_type_id);
		StandardDuration = serialized->get_float(StandardDuration_type_id); 
	}

	[[nodiscard]] auto
	StatusEffectConfuseConfig::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	StatusEffectConfuseConfig::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<StatusEffectConfuseConfig> {
		if (incoming_type_id == StatusEffectConfuseConfig::type_id) {
			return std::make_shared<StatusEffectConfuseConfig>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
