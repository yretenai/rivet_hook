// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/JobManagerFormationPrius.hpp>

namespace rivet::ddl::generated {
	JobManagerFormationPrius::JobManagerFormationPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		ExclusionVolumeGroup = serialized->get_uint64(ExclusionVolumeGroup_type_id, 0ull);
		MasterBoundsVolume = serialized->get_uint64(MasterBoundsVolume_type_id, 0ull);
		OverrideTarget = serialized->get_uint64(OverrideTarget_type_id, 0ull);
		IsCameraBased = serialized->get_bool(IsCameraBased_type_id, false);
		MinTimeBetweenFormations = serialized->get_float(MinTimeBetweenFormations_type_id, 5.000000f);
		IsTurretBased = serialized->get_bool(IsTurretBased_type_id, false);
		TurretActor = serialized->get_uint64(TurretActor_type_id, 0ull);
		EdgeAngle = serialized->get_float(EdgeAngle_type_id, 20.000000f); 
	}

	[[nodiscard]] auto
	JobManagerFormationPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	JobManagerFormationPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<JobManagerFormationPrius> {
		if (incoming_type_id == JobManagerFormationPrius::type_id) {
			return std::make_shared<JobManagerFormationPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
