// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/PhotoLightData.hpp>
#include <rivet/ddl/generated/PhotoLightMoveOrbitData.hpp> 

#include <rivet/ddl/generated/PhotoLightSettings.hpp>

namespace rivet::ddl::generated {
	PhotoLightSettings::PhotoLightSettings([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		MaxNumLights = serialized->get_uint8(MaxNumLights_type_id);
		LightSettings = serialized->unwrap_into<rivet::ddl::generated::PhotoLightData>(LightSettings_type_id);
		Orbit = serialized->unwrap_into<rivet::ddl::generated::PhotoLightMoveOrbitData>(Orbit_type_id);
		SpotlightCone = serialized->get_string(SpotlightCone_type_id);
		PointLightModel = serialized->get_string(PointLightModel_type_id);
		UseDebugLightRig = serialized->get_bool(UseDebugLightRig_type_id);
		RigModel = serialized->get_string(RigModel_type_id); 
	}

	[[nodiscard]] auto
	PhotoLightSettings::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	PhotoLightSettings::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<PhotoLightSettings> {
		if (incoming_type_id == PhotoLightSettings::type_id) {
			return std::make_shared<PhotoLightSettings>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
