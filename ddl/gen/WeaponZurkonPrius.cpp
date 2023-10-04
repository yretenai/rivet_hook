// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/WeaponZurkonPrius.hpp>

namespace rivet::ddl::generated {
	WeaponZurkonPrius::WeaponZurkonPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): WeaponGamePrius(serialized) {
		ZurkonActor = serialized->get_string(ZurkonActor_type_id);
		ZurkonJrActor = serialized->get_string(ZurkonJrActor_type_id);
		ZurkonShotConfig = serialized->get_string(ZurkonShotConfig_type_id);
		ZurkonVOConfig = serialized->get_string(ZurkonVOConfig_type_id); 
	}

	[[nodiscard]] auto
	WeaponZurkonPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	WeaponZurkonPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<WeaponZurkonPrius> {
		if (incoming_type_id == WeaponZurkonPrius::type_id) {
			return std::make_shared<WeaponZurkonPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
