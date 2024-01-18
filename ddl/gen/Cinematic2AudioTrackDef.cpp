// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/Cinematic2AudioGameSyncActionDef.hpp>
#include <rivet/ddl/generated/Cinematic2AudioGameSyncGroupActionDef.hpp>
#include <rivet/ddl/generated/Cinematic2AudioRtpcTrackDef.hpp>
#include <rivet/ddl/generated/Cinematic2AudioActionDef.hpp>
#include <rivet/ddl/generated/Cinematic2TrackTagsDef.hpp> 

#include <rivet/ddl/generated/Cinematic2AudioTrackDef.hpp>

namespace rivet::ddl::generated {
	Cinematic2AudioTrackDef::Cinematic2AudioTrackDef([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		Id = serialized->get_uint64(Id_type_id, 0ull);
		Name = serialized->get_string(Name_type_id, {});
		PlatformFilter = serialized->get_bitset<rivet::ddl::generated::xb52df7e7>(PlatformFilter_type_id, rivet::ddl::generated::xb52df7e7_values, 7u);
		Tags = serialized->unwrap_into<rivet::ddl::generated::Cinematic2TrackTagsDef>(Tags_type_id);
		Global = serialized->get_bool(Global_type_id, false);
		AudioActions = serialized->unwrap_into_many<rivet::ddl::generated::Cinematic2AudioActionDef>(AudioActions_type_id);
		AudioRtpcTracks = serialized->unwrap_into_many<rivet::ddl::generated::Cinematic2AudioRtpcTrackDef>(AudioRtpcTracks_type_id);
		SwitchGroupActions = serialized->unwrap_into_many<rivet::ddl::generated::Cinematic2AudioGameSyncGroupActionDef>(SwitchGroupActions_type_id);
		TriggerActions = serialized->unwrap_into_many<rivet::ddl::generated::Cinematic2AudioGameSyncActionDef>(TriggerActions_type_id); 
	}

	[[nodiscard]] auto
	Cinematic2AudioTrackDef::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	Cinematic2AudioTrackDef::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<Cinematic2AudioTrackDef> {
		if (incoming_type_id == Cinematic2AudioTrackDef::type_id) {
			return std::make_shared<Cinematic2AudioTrackDef>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
