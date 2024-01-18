// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/ShotNailGunPrius.hpp>

namespace rivet::ddl::generated {
	ShotNailGunPrius::ShotNailGunPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): BasicBulletPrius(serialized) {
		MaxHitCount = serialized->get_int32(MaxHitCount_type_id, 5u); 
	}

	[[nodiscard]] auto
	ShotNailGunPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	ShotNailGunPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<ShotNailGunPrius> {
		if (incoming_type_id == ShotNailGunPrius::type_id) {
			return std::make_shared<ShotNailGunPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
