// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/DamageModifierExplosionPrius.hpp> 

#include <rivet/ddl/generated/StatusEffectPoisonConfig.hpp>

namespace rivet::ddl::generated {
	StatusEffectPoisonConfig::StatusEffectPoisonConfig([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): StatusEffectConfig(serialized) {
		DamagePerSecond = serialized->get_float(DamagePerSecond_type_id, 5.000000f);
		Duration = serialized->get_float(Duration_type_id, 8.000000f);
		ExplosionData = serialized->unwrap_into<rivet::ddl::generated::DamageModifierExplosionPrius>(ExplosionData_type_id);
		VictimMaterialGraph = serialized->get_string(VictimMaterialGraph_type_id, {}); 
	}

	[[nodiscard]] auto
	StatusEffectPoisonConfig::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	StatusEffectPoisonConfig::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<StatusEffectPoisonConfig> {
		if (incoming_type_id == StatusEffectPoisonConfig::type_id) {
			return std::make_shared<StatusEffectPoisonConfig>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
