// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/PyrocitorExplosionShotPrius.hpp>

namespace rivet::ddl::generated {
	PyrocitorExplosionShotPrius::PyrocitorExplosionShotPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): ExplosiveBulletPrius(serialized) {

	}

	auto
	PyrocitorExplosionShotPrius::get_type_id() const noexcept -> rivet::rivet_type_id {
		return type_id;
	}

	[[nodiscard]] auto
	PyrocitorExplosionShotPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	PyrocitorExplosionShotPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<PyrocitorExplosionShotPrius> {
		if (incoming_type_id == PyrocitorExplosionShotPrius::type_id) {
			return std::make_shared<PyrocitorExplosionShotPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated