// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/DDLVector3.hpp> 

#include <rivet/ddl/generated/HazardDamageAreaConfig.hpp>

namespace rivet::ddl::generated {
	HazardDamageAreaConfig::HazardDamageAreaConfig([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): ConfigBase(serialized) {
		HazardLifetime = serialized->get_float(HazardLifetime_type_id);
		InsideDPS = serialized->get_float(InsideDPS_type_id);
		DotDPS = serialized->get_float(DotDPS_type_id);
		DotDuration = serialized->get_float(DotDuration_type_id);
		ConditionDuration = serialized->get_float(ConditionDuration_type_id);
		Radius = serialized->get_float(Radius_type_id);
		Elevation = serialized->get_float(Elevation_type_id);
		WarmUpTime = serialized->get_float(WarmUpTime_type_id);
		EffectOffTime = serialized->get_float(EffectOffTime_type_id);
		DamageSendInterval = serialized->get_float(DamageSendInterval_type_id);
		Knockback = serialized->get_bool(Knockback_type_id);
		UseSweptSphere = serialized->get_bool(UseSweptSphere_type_id);
		DamageFriends = serialized->get_bool(DamageFriends_type_id);
		SweptSphereEndOffset = serialized->unwrap_into<rivet::ddl::generated::DDLVector3>(SweptSphereEndOffset_type_id); 
	}

	[[nodiscard]] auto
	HazardDamageAreaConfig::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	HazardDamageAreaConfig::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<HazardDamageAreaConfig> {
		if (incoming_type_id == HazardDamageAreaConfig::type_id) {
			return std::make_shared<HazardDamageAreaConfig>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
