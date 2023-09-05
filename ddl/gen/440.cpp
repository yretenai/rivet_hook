// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/FlyerFireballShotMotionPrius.hpp>

namespace rivet::ddl::generated {
	FlyerFireballShotMotionPrius::FlyerFireballShotMotionPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): HomingShotMotionPrius(serialized) {

	}

	auto
	FlyerFireballShotMotionPrius::get_type_id() const noexcept -> rivet::rivet_type_id {
		return type_id;
	}

	[[nodiscard]] auto
	FlyerFireballShotMotionPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	FlyerFireballShotMotionPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<FlyerFireballShotMotionPrius> {
		if (incoming_type_id == FlyerFireballShotMotionPrius::type_id) {
			return std::make_shared<FlyerFireballShotMotionPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated