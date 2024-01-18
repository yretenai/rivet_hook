// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/OverrideHeroShipCamSettings.hpp>

namespace rivet::ddl::generated {
	OverrideHeroShipCamSettings::OverrideHeroShipCamSettings([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		CamDefaultFOV = serialized->get_float(CamDefaultFOV_type_id, 80.389999f);
		CamDefaultFollowHeight = serialized->get_float(CamDefaultFollowHeight_type_id, 6.250000f);
		CamDefaultFollowDist = serialized->get_float(CamDefaultFollowDist_type_id, -18.500000f);
		CamDefaultTargetRelYOffset = serialized->get_float(CamDefaultTargetRelYOffset_type_id, -1.000000f);
		CamDefaultBasePitchOffset = serialized->get_float(CamDefaultBasePitchOffset_type_id, 4.050000f); 
	}

	[[nodiscard]] auto
	OverrideHeroShipCamSettings::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	OverrideHeroShipCamSettings::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<OverrideHeroShipCamSettings> {
		if (incoming_type_id == OverrideHeroShipCamSettings::type_id) {
			return std::make_shared<OverrideHeroShipCamSettings>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
