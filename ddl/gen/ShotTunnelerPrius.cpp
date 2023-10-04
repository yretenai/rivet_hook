// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/TunnelerBombPrius.hpp> 

#include <rivet/ddl/generated/ShotTunnelerPrius.hpp>

namespace rivet::ddl::generated {
	ShotTunnelerPrius::ShotTunnelerPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): ExplosiveBulletPrius(serialized) {
		IsPuppy = serialized->get_bool(IsPuppy_type_id);
		BombData = serialized->unwrap_into<rivet::ddl::generated::TunnelerBombPrius>(BombData_type_id); 
	}

	[[nodiscard]] auto
	ShotTunnelerPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	ShotTunnelerPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<ShotTunnelerPrius> {
		if (incoming_type_id == ShotTunnelerPrius::type_id) {
			return std::make_shared<ShotTunnelerPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
