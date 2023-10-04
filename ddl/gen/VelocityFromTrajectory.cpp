// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/VelocityFromTrajectory.hpp>

namespace rivet::ddl::generated {
	VelocityFromTrajectory::VelocityFromTrajectory([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): GrenadeVelocityMode(serialized) {

	}

	[[nodiscard]] auto
	VelocityFromTrajectory::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	VelocityFromTrajectory::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<VelocityFromTrajectory> {
		if (incoming_type_id == VelocityFromTrajectory::type_id) {
			return std::make_shared<VelocityFromTrajectory>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
