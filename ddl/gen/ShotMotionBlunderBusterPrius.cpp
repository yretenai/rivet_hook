// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/ShotMotionBlunderBusterPrius.hpp>

namespace rivet::ddl::generated {
	ShotMotionBlunderBusterPrius::ShotMotionBlunderBusterPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): BasicShotMotionPrius(serialized) {

	}

	[[nodiscard]] auto
	ShotMotionBlunderBusterPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	ShotMotionBlunderBusterPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<ShotMotionBlunderBusterPrius> {
		if (incoming_type_id == ShotMotionBlunderBusterPrius::type_id) {
			return std::make_shared<ShotMotionBlunderBusterPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
