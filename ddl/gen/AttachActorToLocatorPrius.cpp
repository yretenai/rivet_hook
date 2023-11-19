// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/EventBase.hpp> 

#include <rivet/ddl/generated/AttachActorToLocatorPrius.hpp>

namespace rivet::ddl::generated {
	AttachActorToLocatorPrius::AttachActorToLocatorPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		ActorToAttach = serialized->get_string(ActorToAttach_type_id);
		SyncedSpawn = serialized->get_bool(SyncedSpawn_type_id);
		LocatorName = serialized->get_string(LocatorName_type_id);
		SpawnOnInit = serialized->get_bool(SpawnOnInit_type_id);
		SpawnOnEvent = serialized->unwrap_into<rivet::ddl::generated::EventBase>(SpawnOnEvent_type_id);
		Flags = serialized->get_bitset<rivet::ddl::generated::x6d3f730c>(Flags_type_id, rivet::ddl::generated::x6d3f730c_values);
		DestroyAttachOnDestruction = serialized->get_bool(DestroyAttachOnDestruction_type_id); 
	}

	[[nodiscard]] auto
	AttachActorToLocatorPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	AttachActorToLocatorPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<AttachActorToLocatorPrius> {
		if (incoming_type_id == AttachActorToLocatorPrius::type_id) {
			return std::make_shared<AttachActorToLocatorPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated