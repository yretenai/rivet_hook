// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/ShootingTauntData.hpp>

namespace rivet::ddl::generated {
	ShootingTauntData::ShootingTauntData([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		MinRangedAttacksMissedForTaunt = serialized->get_int32(MinRangedAttacksMissedForTaunt_type_id);
		MaxRangedAttacksMissedForTaunt = serialized->get_int32(MaxRangedAttacksMissedForTaunt_type_id);
		TauntChance = serialized->get_float(TauntChance_type_id);
		IdleTauntChance = serialized->get_float(IdleTauntChance_type_id);
		AimFidgetChance = serialized->get_float(AimFidgetChance_type_id);
		AimAdjustBias = serialized->get_float(AimAdjustBias_type_id); 
	}

	[[nodiscard]] auto
	ShootingTauntData::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	ShootingTauntData::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<ShootingTauntData> {
		if (incoming_type_id == ShootingTauntData::type_id) {
			return std::make_shared<ShootingTauntData>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated