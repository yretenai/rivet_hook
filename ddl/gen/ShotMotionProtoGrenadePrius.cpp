// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/ShotMotionProtoGrenadePrius.hpp>

namespace rivet::ddl::generated {
	ShotMotionProtoGrenadePrius::ShotMotionProtoGrenadePrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): GrenadeShotMotionGamePrius(serialized) {

	}

	[[nodiscard]] auto
	ShotMotionProtoGrenadePrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	ShotMotionProtoGrenadePrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<ShotMotionProtoGrenadePrius> {
		if (incoming_type_id == ShotMotionProtoGrenadePrius::type_id) {
			return std::make_shared<ShotMotionProtoGrenadePrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
