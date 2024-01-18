// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/AimAssistSnagData.hpp>

namespace rivet::ddl::generated {
	AimAssistSnagData::AimAssistSnagData([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		Enable = serialized->get_bool(Enable_type_id, true);
		OnFactor = serialized->get_float(OnFactor_type_id, 0.900000f);
		OffFactorSame = serialized->get_float(OffFactorSame_type_id, 0.200000f);
		OffFactorNew = serialized->get_float(OffFactorNew_type_id, 0.800000f);
		SpeedUp = serialized->get_float(SpeedUp_type_id, 20.000000f);
		SpeedDown = serialized->get_float(SpeedDown_type_id, 3.000000f);
		StickMin = serialized->get_float(StickMin_type_id, 0.700000f);
		StickMax = serialized->get_float(StickMax_type_id, 0.950000f);
		SnagMin = serialized->get_float(SnagMin_type_id, 0.900000f);
		SnagMax = serialized->get_float(SnagMax_type_id, 0.500000f); 
	}

	[[nodiscard]] auto
	AimAssistSnagData::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	AimAssistSnagData::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<AimAssistSnagData> {
		if (incoming_type_id == AimAssistSnagData::type_id) {
			return std::make_shared<AimAssistSnagData>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
