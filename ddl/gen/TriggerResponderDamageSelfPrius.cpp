// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/TriggerResponderDamageSelfPrius.hpp>

namespace rivet::ddl::generated {
	TriggerResponderDamageSelfPrius::TriggerResponderDamageSelfPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): TriggerResponderBasePrius(serialized) {
		Amount = serialized->get_float(Amount_type_id, 100.000000f);
		DamageType = serialized->get_enum<rivet::ddl::generated::DamageTypes>(DamageType_type_id, rivet::ddl::generated::DamageTypes_values, rivet::ddl::generated::DamageTypes::Melee); 
	}

	[[nodiscard]] auto
	TriggerResponderDamageSelfPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	TriggerResponderDamageSelfPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<TriggerResponderDamageSelfPrius> {
		if (incoming_type_id == TriggerResponderDamageSelfPrius::type_id) {
			return std::make_shared<TriggerResponderDamageSelfPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
