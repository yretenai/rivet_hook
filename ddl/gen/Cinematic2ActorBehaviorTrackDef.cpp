// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/Cinematic2MayaExportInfo.hpp>
#include <rivet/ddl/generated/Cinematic2BehaviorGoToActionDef.hpp>
#include <rivet/ddl/generated/Cinematic2BehaviorPlayAnimClipActionDef.hpp>
#include <rivet/ddl/generated/Cinematic2BehaviorPlayDriverActionDef.hpp>
#include <rivet/ddl/generated/Cinematic2TrackTagsDef.hpp> 

#include <rivet/ddl/generated/Cinematic2ActorBehaviorTrackDef.hpp>

namespace rivet::ddl::generated {
	Cinematic2ActorBehaviorTrackDef::Cinematic2ActorBehaviorTrackDef([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		Id = serialized->get_uint64(Id_type_id, 0ull);
		Name = serialized->get_string(Name_type_id, {});
		PlatformFilter = serialized->get_bitset<rivet::ddl::generated::xb52df7e7>(PlatformFilter_type_id, rivet::ddl::generated::xb52df7e7_values, 7u);
		Tags = serialized->unwrap_into<rivet::ddl::generated::Cinematic2TrackTagsDef>(Tags_type_id);
		Global = serialized->get_bool(Global_type_id, false);
		PlayAnimActions = serialized->unwrap_into_many<rivet::ddl::generated::Cinematic2BehaviorPlayAnimClipActionDef>(PlayAnimActions_type_id);
		BehaviorGoToActions = serialized->unwrap_into_many<rivet::ddl::generated::Cinematic2BehaviorGoToActionDef>(BehaviorGoToActions_type_id);
		PlayDriverActions = serialized->unwrap_into_many<rivet::ddl::generated::Cinematic2BehaviorPlayDriverActionDef>(PlayDriverActions_type_id);
		MayaExportInfo = serialized->unwrap_into<rivet::ddl::generated::Cinematic2MayaExportInfo>(MayaExportInfo_type_id); 
	}

	[[nodiscard]] auto
	Cinematic2ActorBehaviorTrackDef::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	Cinematic2ActorBehaviorTrackDef::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<Cinematic2ActorBehaviorTrackDef> {
		if (incoming_type_id == Cinematic2ActorBehaviorTrackDef::type_id) {
			return std::make_shared<Cinematic2ActorBehaviorTrackDef>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
