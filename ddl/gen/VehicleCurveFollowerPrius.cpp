// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/VehicleCurveFollowerPrius.hpp>

namespace rivet::ddl::generated {
	VehicleCurveFollowerPrius::VehicleCurveFollowerPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		Accel = serialized->get_float(Accel_type_id);
		Decel = serialized->get_float(Decel_type_id);
		BankAccel = serialized->get_float(BankAccel_type_id);
		MaxBankSpeed = serialized->get_float(MaxBankSpeed_type_id);
		BankLookaheadTime = serialized->get_float(BankLookaheadTime_type_id);
		MaxBankAngle = serialized->get_float(MaxBankAngle_type_id); 
	}

	[[nodiscard]] auto
	VehicleCurveFollowerPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	VehicleCurveFollowerPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<VehicleCurveFollowerPrius> {
		if (incoming_type_id == VehicleCurveFollowerPrius::type_id) {
			return std::make_shared<VehicleCurveFollowerPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
