// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/DDLVector3.hpp> 

#include <rivet/ddl/generated/SpawnShotAimOffsetTargetingPrius.hpp>

namespace rivet::ddl::generated {
	SpawnShotAimOffsetTargetingPrius::SpawnShotAimOffsetTargetingPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): SpawnShotTargetingPrius(serialized) {
		AimOffset = serialized->unwrap_into<rivet::ddl::generated::DDLVector3>(AimOffset_type_id);
		AimOffsetSmall = serialized->unwrap_into<rivet::ddl::generated::DDLVector3>(AimOffsetSmall_type_id);
		AimOffsetLarge = serialized->unwrap_into<rivet::ddl::generated::DDLVector3>(AimOffsetLarge_type_id); 
	}

	[[nodiscard]] auto
	SpawnShotAimOffsetTargetingPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	SpawnShotAimOffsetTargetingPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<SpawnShotAimOffsetTargetingPrius> {
		if (incoming_type_id == SpawnShotAimOffsetTargetingPrius::type_id) {
			return std::make_shared<SpawnShotAimOffsetTargetingPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
