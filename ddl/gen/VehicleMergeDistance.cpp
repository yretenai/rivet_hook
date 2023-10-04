// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/VehicleMergeDistance.hpp>

namespace rivet::ddl::generated {
	VehicleMergeDistance::VehicleMergeDistance([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		Speed = serialized->get_float(Speed_type_id);
		Distance = serialized->get_float(Distance_type_id); 
	}

	[[nodiscard]] auto
	VehicleMergeDistance::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	VehicleMergeDistance::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<VehicleMergeDistance> {
		if (incoming_type_id == VehicleMergeDistance::type_id) {
			return std::make_shared<VehicleMergeDistance>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
