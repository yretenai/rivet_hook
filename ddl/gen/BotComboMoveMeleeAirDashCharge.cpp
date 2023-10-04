// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/AirDashChargeData.hpp> 

#include <rivet/ddl/generated/BotComboMoveMeleeAirDashCharge.hpp>

namespace rivet::ddl::generated {
	BotComboMoveMeleeAirDashCharge::BotComboMoveMeleeAirDashCharge([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): BotComboMove(serialized) {
		AirDashChargeData = serialized->unwrap_into<rivet::ddl::generated::AirDashChargeData>(AirDashChargeData_type_id); 
	}

	[[nodiscard]] auto
	BotComboMoveMeleeAirDashCharge::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	BotComboMoveMeleeAirDashCharge::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<BotComboMoveMeleeAirDashCharge> {
		if (incoming_type_id == BotComboMoveMeleeAirDashCharge::type_id) {
			return std::make_shared<BotComboMoveMeleeAirDashCharge>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
