// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/SpawnHazardDamageAreaEffectNodeDef.hpp> 

#include <rivet/ddl/generated/NodalShotGraphDef.hpp>

namespace rivet::ddl::generated {
	NodalShotGraphDef::NodalShotGraphDef([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): NodalShotBaseGraphDef(serialized) {
		SpawnHazardDamageAreaEffectNodes = serialized->unwrap_into_many<rivet::ddl::generated::SpawnHazardDamageAreaEffectNodeDef>(SpawnHazardDamageAreaEffectNodes_type_id); 
	}

	[[nodiscard]] auto
	NodalShotGraphDef::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	NodalShotGraphDef::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<NodalShotGraphDef> {
		if (incoming_type_id == NodalShotGraphDef::type_id) {
			return std::make_shared<NodalShotGraphDef>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated