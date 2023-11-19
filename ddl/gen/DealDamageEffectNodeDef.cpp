// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/ShotDamageData.hpp> 

#include <rivet/ddl/generated/DealDamageEffectNodeDef.hpp>

namespace rivet::ddl::generated {
	DealDamageEffectNodeDef::DealDamageEffectNodeDef([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): NodalShotEffectNodeBaseDef(serialized) {
		ActorType = serialized->get_enum<rivet::ddl::generated::x684c6439>(ActorType_type_id, rivet::ddl::generated::x684c6439_values);
		Damage = serialized->unwrap_into<rivet::ddl::generated::ShotDamageData>(Damage_type_id); 
	}

	[[nodiscard]] auto
	DealDamageEffectNodeDef::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	DealDamageEffectNodeDef::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<DealDamageEffectNodeDef> {
		if (incoming_type_id == DealDamageEffectNodeDef::type_id) {
			return std::make_shared<DealDamageEffectNodeDef>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated