// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/ChargeAttackParams.hpp>

namespace rivet::ddl::generated {
	ChargeAttackParams::ChargeAttackParams([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		MinChargeTime = serialized->get_float(MinChargeTime_type_id);
		MaxChargeTime = serialized->get_float(MaxChargeTime_type_id);
		MaxDamage = serialized->get_float(MaxDamage_type_id);
		MaxKnockbackForce = serialized->get_float(MaxKnockbackForce_type_id); 
	}

	[[nodiscard]] auto
	ChargeAttackParams::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	ChargeAttackParams::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<ChargeAttackParams> {
		if (incoming_type_id == ChargeAttackParams::type_id) {
			return std::make_shared<ChargeAttackParams>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
