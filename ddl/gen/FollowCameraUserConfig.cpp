// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/VelocityFollowerData.hpp>
#include <rivet/ddl/generated/CameraTargetTrackData.hpp> 

#include <rivet/ddl/generated/FollowCameraUserConfig.hpp>

namespace rivet::ddl::generated {
	FollowCameraUserConfig::FollowCameraUserConfig([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): ConfigBase(serialized) {
		PitchMin = serialized->get_float(PitchMin_type_id);
		PitchMax = serialized->get_float(PitchMax_type_id);
		NearClipOverride = serialized->get_float(NearClipOverride_type_id);
		FarClipOverride = serialized->get_float(FarClipOverride_type_id);
		TargetTrackingData = serialized->unwrap_into<rivet::ddl::generated::CameraTargetTrackData>(TargetTrackingData_type_id);
		VelocityFollowData = serialized->unwrap_into<rivet::ddl::generated::VelocityFollowerData>(VelocityFollowData_type_id); 
	}

	[[nodiscard]] auto
	FollowCameraUserConfig::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	FollowCameraUserConfig::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<FollowCameraUserConfig> {
		if (incoming_type_id == FollowCameraUserConfig::type_id) {
			return std::make_shared<FollowCameraUserConfig>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
