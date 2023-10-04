// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/SargassoCentipedeAODShotMotionPrius.hpp>

namespace rivet::ddl::generated {
	SargassoCentipedeAODShotMotionPrius::SargassoCentipedeAODShotMotionPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): PredictableTrajectoryShotMotionPrius(serialized) {

	}

	[[nodiscard]] auto
	SargassoCentipedeAODShotMotionPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	SargassoCentipedeAODShotMotionPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<SargassoCentipedeAODShotMotionPrius> {
		if (incoming_type_id == SargassoCentipedeAODShotMotionPrius::type_id) {
			return std::make_shared<SargassoCentipedeAODShotMotionPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
