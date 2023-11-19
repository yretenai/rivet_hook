// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/VehicleFXPrius.hpp>

namespace rivet::ddl::generated {
	VehicleFXPrius::VehicleFXPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		VehicleId = serialized->get_uint32(VehicleId_type_id);
		HeadLightsRenderOverride = serialized->get_string(HeadLightsRenderOverride_type_id);
		SoundComponentDestroyTimer = serialized->get_float(SoundComponentDestroyTimer_type_id);
		MaxHoverSpeed = serialized->get_float(MaxHoverSpeed_type_id); 
	}

	[[nodiscard]] auto
	VehicleFXPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	VehicleFXPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<VehicleFXPrius> {
		if (incoming_type_id == VehicleFXPrius::type_id) {
			return std::make_shared<VehicleFXPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated