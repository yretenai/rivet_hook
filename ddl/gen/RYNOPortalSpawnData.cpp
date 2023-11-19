// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/RYNOPortalPrius.hpp> 

#include <rivet/ddl/generated/RYNOPortalSpawnData.hpp>

namespace rivet::ddl::generated {
	RYNOPortalSpawnData::RYNOPortalSpawnData([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): SpawnDataBase(serialized) {
		Scale = serialized->get_float(Scale_type_id);
		PortalPrius = serialized->unwrap_into<rivet::ddl::generated::RYNOPortalPrius>(PortalPrius_type_id);
		OtherIp = serialized->get_bool(OtherIp_type_id); 
	}

	[[nodiscard]] auto
	RYNOPortalSpawnData::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	RYNOPortalSpawnData::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<RYNOPortalSpawnData> {
		if (incoming_type_id == RYNOPortalSpawnData::type_id) {
			return std::make_shared<RYNOPortalSpawnData>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated