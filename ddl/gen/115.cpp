// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/NefariousFinaleLaserArmPrius.hpp>

namespace rivet::ddl::generated {
	NefariousFinaleLaserArmPrius::NefariousFinaleLaserArmPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): NefariousFinaleWeaponPrius(serialized) {
		AimRefX = serialized->get_float(AimRefX_type_id);
		AimRefY = serialized->get_float(AimRefY_type_id);
		AimRefZ = serialized->get_float(AimRefZ_type_id);
		AimMinH = serialized->get_float(AimMinH_type_id);
		AimCenterH = serialized->get_float(AimCenterH_type_id);
		AimMaxH = serialized->get_float(AimMaxH_type_id);
		AimMinV = serialized->get_float(AimMinV_type_id);
		AimCenterV = serialized->get_float(AimCenterV_type_id);
		AimMaxV = serialized->get_float(AimMaxV_type_id); 
	}

	auto
	NefariousFinaleLaserArmPrius::get_type_id() const noexcept -> rivet::rivet_type_id {
		return type_id;
	}

	[[nodiscard]] auto
	NefariousFinaleLaserArmPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	NefariousFinaleLaserArmPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<NefariousFinaleLaserArmPrius> {
		if (incoming_type_id == NefariousFinaleLaserArmPrius::type_id) {
			return std::make_shared<NefariousFinaleLaserArmPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated