// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/WeaponShotData.hpp> 

#include <rivet/ddl/generated/ShotRYNOSniperPrius.hpp>

namespace rivet::ddl::generated {
	ShotRYNOSniperPrius::ShotRYNOSniperPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): BasicBulletPrius(serialized) {
		RYNOShot = serialized->unwrap_into<rivet::ddl::generated::WeaponShotData>(RYNOShot_type_id); 
	}

	[[nodiscard]] auto
	ShotRYNOSniperPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	ShotRYNOSniperPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<ShotRYNOSniperPrius> {
		if (incoming_type_id == ShotRYNOSniperPrius::type_id) {
			return std::make_shared<ShotRYNOSniperPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
