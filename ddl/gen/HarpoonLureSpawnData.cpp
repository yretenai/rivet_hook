// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/DDLVector3.hpp> 

#include <rivet/ddl/generated/HarpoonLureSpawnData.hpp>

namespace rivet::ddl::generated {
	HarpoonLureSpawnData::HarpoonLureSpawnData([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): ActorSpawnData(serialized) {
		ShotOwner = serialized->get_uint32(ShotOwner_type_id, 0u);
		AssetId = serialized->get_uint32(AssetId_type_id, 0u);
		Position = serialized->unwrap_into<rivet::ddl::generated::DDLVector3>(Position_type_id);
		Lifetime = serialized->get_float(Lifetime_type_id, 10.000000f);
		Range = serialized->get_float(Range_type_id, 8.000000f); 
	}

	[[nodiscard]] auto
	HarpoonLureSpawnData::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	HarpoonLureSpawnData::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<HarpoonLureSpawnData> {
		if (incoming_type_id == HarpoonLureSpawnData::type_id) {
			return std::make_shared<HarpoonLureSpawnData>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
