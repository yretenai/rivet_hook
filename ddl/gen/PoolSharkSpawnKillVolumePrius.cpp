// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/PoolSharkSpawnKillVolumePrius.hpp>

namespace rivet::ddl::generated {
	PoolSharkSpawnKillVolumePrius::PoolSharkSpawnKillVolumePrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		TimeInVolumeToSpawnShark = serialized->get_float(TimeInVolumeToSpawnShark_type_id, 1.500000f);
		ResetTime = serialized->get_float(ResetTime_type_id, 4.000000f);
		PoolSharkActor = serialized->get_string(PoolSharkActor_type_id, {});
		OtherVolumesToUse = serialized->get_uint64s(OtherVolumesToUse_type_id); 
	}

	[[nodiscard]] auto
	PoolSharkSpawnKillVolumePrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	PoolSharkSpawnKillVolumePrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<PoolSharkSpawnKillVolumePrius> {
		if (incoming_type_id == PoolSharkSpawnKillVolumePrius::type_id) {
			return std::make_shared<PoolSharkSpawnKillVolumePrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
