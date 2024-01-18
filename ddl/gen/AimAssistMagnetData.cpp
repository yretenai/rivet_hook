// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/AimAssistCurveData.hpp> 

#include <rivet/ddl/generated/AimAssistMagnetData.hpp>

namespace rivet::ddl::generated {
	AimAssistMagnetData::AimAssistMagnetData([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		Enable = serialized->get_bool(Enable_type_id, true);
		BoxProcessing = serialized->unwrap_into<rivet::ddl::generated::AimAssistCurveData>(BoxProcessing_type_id);
		StickMin = serialized->get_float(StickMin_type_id, 0.700000f);
		StickMax = serialized->get_float(StickMax_type_id, 0.950000f);
		FactorMin = serialized->get_float(FactorMin_type_id, 0.000000f);
		FactorMax = serialized->get_float(FactorMax_type_id, 0.000000f);
		PitchFactor = serialized->get_float(PitchFactor_type_id, 0.750000f); 
	}

	[[nodiscard]] auto
	AimAssistMagnetData::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	AimAssistMagnetData::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<AimAssistMagnetData> {
		if (incoming_type_id == AimAssistMagnetData::type_id) {
			return std::make_shared<AimAssistMagnetData>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
