// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/DDLVector3.hpp> 

#include <rivet/ddl/generated/FogSettingsDef.hpp>

namespace rivet::ddl::generated {
	FogSettingsDef::FogSettingsDef([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		Enabled = serialized->get_bool(Enabled_type_id, false);
		ColorMapAsset = serialized->get_string(ColorMapAsset_type_id, {});
		AlphaMapAsset = serialized->get_string(AlphaMapAsset_type_id, {});
		ColorMapDepthRange = serialized->get_float(ColorMapDepthRange_type_id, 1000.000000f);
		ColorMapDepthScale = serialized->get_float(ColorMapDepthScale_type_id, 1.000000f);
		Color = serialized->unwrap_into<rivet::ddl::generated::DDLVector3>(Color_type_id);
		LuminanceScale = serialized->get_float(LuminanceScale_type_id, 1.000000f);
		KeyLightInfluence = serialized->get_float(KeyLightInfluence_type_id, 1.000000f);
		NearRadius = serialized->get_float(NearRadius_type_id, 0.000000f);
		Height0 = serialized->get_float(Height0_type_id, -100.000000f);
		Opacity0 = serialized->get_float(Opacity0_type_id, 0.500000f);
		Height1 = serialized->get_float(Height1_type_id, 100.000000f);
		Opacity1 = serialized->get_float(Opacity1_type_id, 0.000000f);
		Height2 = serialized->get_float(Height2_type_id, 200.000000f);
		Opacity2 = serialized->get_float(Opacity2_type_id, 0.000000f);
		Height3 = serialized->get_float(Height3_type_id, 300.000000f);
		Opacity3 = serialized->get_float(Opacity3_type_id, 0.000000f);
		Height4 = serialized->get_float(Height4_type_id, 400.000000f);
		Opacity4 = serialized->get_float(Opacity4_type_id, 0.000000f);
		RemapStrength = serialized->get_float(RemapStrength_type_id, 0.000000f);
		RemapKeyOpacity = serialized->get_float(RemapKeyOpacity_type_id, 0.500000f); 
	}

	[[nodiscard]] auto
	FogSettingsDef::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	FogSettingsDef::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<FogSettingsDef> {
		if (incoming_type_id == FogSettingsDef::type_id) {
			return std::make_shared<FogSettingsDef>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
