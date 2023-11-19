// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/DDLVector3.hpp> 

#include <rivet/ddl/generated/SpawnPhysicsActorEntry.hpp>

namespace rivet::ddl::generated {
	SpawnPhysicsActorEntry::SpawnPhysicsActorEntry([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		SpawnActor = serialized->get_string(SpawnActor_type_id);
		SpawnLocator = serialized->get_string(SpawnLocator_type_id);
		SpawnOffset = serialized->unwrap_into<rivet::ddl::generated::DDLVector3>(SpawnOffset_type_id);
		SpawnForce = serialized->unwrap_into<rivet::ddl::generated::DDLVector3>(SpawnForce_type_id);
		FadeDelayMin = serialized->get_float(FadeDelayMin_type_id);
		FadeDelayMax = serialized->get_float(FadeDelayMax_type_id);
		FadeTime = serialized->get_float(FadeTime_type_id); 
	}

	[[nodiscard]] auto
	SpawnPhysicsActorEntry::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	SpawnPhysicsActorEntry::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<SpawnPhysicsActorEntry> {
		if (incoming_type_id == SpawnPhysicsActorEntry::type_id) {
			return std::make_shared<SpawnPhysicsActorEntry>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated