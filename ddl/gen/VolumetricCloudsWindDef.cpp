// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/VolumetricCloudsWindDef.hpp>

namespace rivet::ddl::generated {
	VolumetricCloudsWindDef::VolumetricCloudsWindDef([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		WindAzimuth = serialized->get_float(WindAzimuth_type_id, 0.000000f);
		WindIntensity = serialized->get_float(WindIntensity_type_id, 0.000000f);
		EnabledRotation = serialized->get_bool(EnabledRotation_type_id, false);
		RotationPivotAzimuth = serialized->get_float(RotationPivotAzimuth_type_id, 0.000000f);
		RotationPivotDistance = serialized->get_float(RotationPivotDistance_type_id, 0.000000f);
		RotationIntensity = serialized->get_float(RotationIntensity_type_id, 1.000000f);
		RisingVaporIntensity = serialized->get_float(RisingVaporIntensity_type_id, 0.000000f);
		NoiseFlowAzimuth = serialized->get_float(NoiseFlowAzimuth_type_id, 180.000000f);
		NoiseFlowIntensity = serialized->get_float(NoiseFlowIntensity_type_id, 10.000000f); 
	}

	[[nodiscard]] auto
	VolumetricCloudsWindDef::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	VolumetricCloudsWindDef::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<VolumetricCloudsWindDef> {
		if (incoming_type_id == VolumetricCloudsWindDef::type_id) {
			return std::make_shared<VolumetricCloudsWindDef>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
