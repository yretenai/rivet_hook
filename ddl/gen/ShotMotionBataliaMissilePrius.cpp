// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/ShotMotionBataliaMissilePrius.hpp>

namespace rivet::ddl::generated {
	ShotMotionBataliaMissilePrius::ShotMotionBataliaMissilePrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): DispersingShotMotionPrius(serialized) {

	}

	[[nodiscard]] auto
	ShotMotionBataliaMissilePrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	ShotMotionBataliaMissilePrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<ShotMotionBataliaMissilePrius> {
		if (incoming_type_id == ShotMotionBataliaMissilePrius::type_id) {
			return std::make_shared<ShotMotionBataliaMissilePrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
