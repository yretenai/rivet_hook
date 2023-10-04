// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/ShotMotionWarpRiflePrius.hpp>

namespace rivet::ddl::generated {
	ShotMotionWarpRiflePrius::ShotMotionWarpRiflePrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): BasicShotMotionPrius(serialized) {

	}

	[[nodiscard]] auto
	ShotMotionWarpRiflePrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	ShotMotionWarpRiflePrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<ShotMotionWarpRiflePrius> {
		if (incoming_type_id == ShotMotionWarpRiflePrius::type_id) {
			return std::make_shared<ShotMotionWarpRiflePrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
