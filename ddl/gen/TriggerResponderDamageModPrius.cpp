// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/TriggerResponderDamageModPrius.hpp>

namespace rivet::ddl::generated {
	TriggerResponderDamageModPrius::TriggerResponderDamageModPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): TriggerResponderBasePrius(serialized) {
		ModWhenTriggered = serialized->get_float(ModWhenTriggered_type_id, 1.000000f);
		ModWhenUntriggered = serialized->get_float(ModWhenUntriggered_type_id, 1.000000f); 
	}

	[[nodiscard]] auto
	TriggerResponderDamageModPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	TriggerResponderDamageModPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<TriggerResponderDamageModPrius> {
		if (incoming_type_id == TriggerResponderDamageModPrius::type_id) {
			return std::make_shared<TriggerResponderDamageModPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
