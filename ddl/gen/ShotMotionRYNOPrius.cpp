// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/ShotMotionRYNOPrius.hpp>

namespace rivet::ddl::generated {
	ShotMotionRYNOPrius::ShotMotionRYNOPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): BasicShotMotionPrius(serialized) {

	}

	[[nodiscard]] auto
	ShotMotionRYNOPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	ShotMotionRYNOPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<ShotMotionRYNOPrius> {
		if (incoming_type_id == ShotMotionRYNOPrius::type_id) {
			return std::make_shared<ShotMotionRYNOPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
