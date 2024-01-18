// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/BeamSpotlightPrius.hpp>

namespace rivet::ddl::generated {
	BeamSpotlightPrius::BeamSpotlightPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		Angle = serialized->get_float(Angle_type_id, 15.000000f);
		Range = serialized->get_float(Range_type_id, 15.000000f);
		RotationTime = serialized->get_float(RotationTime_type_id, 3.000000f); 
	}

	[[nodiscard]] auto
	BeamSpotlightPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	BeamSpotlightPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<BeamSpotlightPrius> {
		if (incoming_type_id == BeamSpotlightPrius::type_id) {
			return std::make_shared<BeamSpotlightPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
