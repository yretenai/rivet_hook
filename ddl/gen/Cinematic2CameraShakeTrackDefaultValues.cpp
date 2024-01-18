// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/Cinematic2CameraShakeTrackDefaultValues.hpp>

namespace rivet::ddl::generated {
	Cinematic2CameraShakeTrackDefaultValues::Cinematic2CameraShakeTrackDefaultValues([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		MagnitudeShake = serialized->get_float(MagnitudeShake_type_id, 0.000000f);
		MagnitudeWave = serialized->get_float(MagnitudeWave_type_id, 0.400000f);
		MagnitudeJitter = serialized->get_float(MagnitudeJitter_type_id, 0.000000f); 
	}

	[[nodiscard]] auto
	Cinematic2CameraShakeTrackDefaultValues::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	Cinematic2CameraShakeTrackDefaultValues::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<Cinematic2CameraShakeTrackDefaultValues> {
		if (incoming_type_id == Cinematic2CameraShakeTrackDefaultValues::type_id) {
			return std::make_shared<Cinematic2CameraShakeTrackDefaultValues>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
