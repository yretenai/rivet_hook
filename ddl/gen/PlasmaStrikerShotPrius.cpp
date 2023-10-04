// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/PlasmaStrikerShotPrius.hpp>

namespace rivet::ddl::generated {
	PlasmaStrikerShotPrius::PlasmaStrikerShotPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): BasicBulletPrius(serialized) {

	}

	[[nodiscard]] auto
	PlasmaStrikerShotPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	PlasmaStrikerShotPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<PlasmaStrikerShotPrius> {
		if (incoming_type_id == PlasmaStrikerShotPrius::type_id) {
			return std::make_shared<PlasmaStrikerShotPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
