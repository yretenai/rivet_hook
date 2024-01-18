// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/PickupCameraPrius.hpp>

namespace rivet::ddl::generated {
	PickupCameraPrius::PickupCameraPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		CameraActor = serialized->get_uint64(CameraActor_type_id, 0ull);
		PickupAnim = serialized->get_string(PickupAnim_type_id, "Pickup_Item"); 
	}

	[[nodiscard]] auto
	PickupCameraPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	PickupCameraPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<PickupCameraPrius> {
		if (incoming_type_id == PickupCameraPrius::type_id) {
			return std::make_shared<PickupCameraPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
