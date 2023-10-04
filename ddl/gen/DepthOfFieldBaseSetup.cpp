// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/DepthOfFieldBaseSetup.hpp>

namespace rivet::ddl::generated {
	DepthOfFieldBaseSetup::DepthOfFieldBaseSetup([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		DistanceFar = serialized->get_float(DistanceFar_type_id);
		DistanceNear = serialized->get_float(DistanceNear_type_id);
		AperatureScaleFar = serialized->get_float(AperatureScaleFar_type_id);
		AperatureScaleNear = serialized->get_float(AperatureScaleNear_type_id); 
	}

	[[nodiscard]] auto
	DepthOfFieldBaseSetup::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	DepthOfFieldBaseSetup::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<DepthOfFieldBaseSetup> {
		if (incoming_type_id == DepthOfFieldBaseSetup::type_id) {
			return std::make_shared<DepthOfFieldBaseSetup>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
