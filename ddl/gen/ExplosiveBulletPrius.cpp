// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/DamageModifierExplosionPrius.hpp>
#include <rivet/ddl/generated/ShotPredatorLauncherPrius.hpp>
#include <rivet/ddl/generated/ShotWarmongerMicroRocketPrius.hpp>
#include <rivet/ddl/generated/ShotWarmongerRocketPrius.hpp>
#include <rivet/ddl/generated/PyrocitorExplosionShotPrius.hpp>
#include <rivet/ddl/generated/ShotTunnelerPrius.hpp> 

#include <rivet/ddl/generated/ExplosiveBulletPrius.hpp>

namespace rivet::ddl::generated {
	ExplosiveBulletPrius::ExplosiveBulletPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): SimpleShotPrius(serialized) {
		ExplosionDamageType = serialized->get_enum<rivet::ddl::generated::x8d7e44cf>(ExplosionDamageType_type_id, rivet::ddl::generated::x8d7e44cf_values);
		DamageFlags = serialized->get_bitset<rivet::ddl::generated::x65d7dac2>(DamageFlags_type_id, rivet::ddl::generated::x65d7dac2_values);
		ExplosionData = serialized->unwrap_into<rivet::ddl::generated::DamageModifierExplosionPrius>(ExplosionData_type_id);
		DamageLOSType = serialized->get_enum<rivet::ddl::generated::DamageLOSTypes>(DamageLOSType_type_id, rivet::ddl::generated::DamageLOSTypes_values); 
	}

	[[nodiscard]] auto
	ExplosiveBulletPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	ExplosiveBulletPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<ExplosiveBulletPrius> {
		if (incoming_type_id == ExplosiveBulletPrius::type_id) {
			return std::make_shared<ExplosiveBulletPrius>(serialized);
		}

		auto ShotPredatorLauncherPrius_ptr = ShotPredatorLauncherPrius::from_substruct(incoming_type_id, serialized);
		if (ShotPredatorLauncherPrius_ptr != nullptr) {
			return ShotPredatorLauncherPrius_ptr;
		}

		auto ShotWarmongerMicroRocketPrius_ptr = ShotWarmongerMicroRocketPrius::from_substruct(incoming_type_id, serialized);
		if (ShotWarmongerMicroRocketPrius_ptr != nullptr) {
			return ShotWarmongerMicroRocketPrius_ptr;
		}

		auto ShotWarmongerRocketPrius_ptr = ShotWarmongerRocketPrius::from_substruct(incoming_type_id, serialized);
		if (ShotWarmongerRocketPrius_ptr != nullptr) {
			return ShotWarmongerRocketPrius_ptr;
		}

		auto PyrocitorExplosionShotPrius_ptr = PyrocitorExplosionShotPrius::from_substruct(incoming_type_id, serialized);
		if (PyrocitorExplosionShotPrius_ptr != nullptr) {
			return PyrocitorExplosionShotPrius_ptr;
		}

		auto ShotTunnelerPrius_ptr = ShotTunnelerPrius::from_substruct(incoming_type_id, serialized);
		if (ShotTunnelerPrius_ptr != nullptr) {
			return ShotTunnelerPrius_ptr;
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
