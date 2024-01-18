// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/Cinematic2MovieActionDef.hpp>
#include <rivet/ddl/generated/Cinematic2TrackTagsDef.hpp> 

#include <rivet/ddl/generated/Cinematic2MovieTrackDef.hpp>

namespace rivet::ddl::generated {
	Cinematic2MovieTrackDef::Cinematic2MovieTrackDef([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		Id = serialized->get_uint64(Id_type_id, 0ull);
		Name = serialized->get_string(Name_type_id, {});
		PlatformFilter = serialized->get_bitset<rivet::ddl::generated::xb52df7e7>(PlatformFilter_type_id, rivet::ddl::generated::xb52df7e7_values, 7u);
		Tags = serialized->unwrap_into<rivet::ddl::generated::Cinematic2TrackTagsDef>(Tags_type_id);
		Global = serialized->get_bool(Global_type_id, false);
		Actions = serialized->unwrap_into_many<rivet::ddl::generated::Cinematic2MovieActionDef>(Actions_type_id); 
	}

	[[nodiscard]] auto
	Cinematic2MovieTrackDef::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	Cinematic2MovieTrackDef::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<Cinematic2MovieTrackDef> {
		if (incoming_type_id == Cinematic2MovieTrackDef::type_id) {
			return std::make_shared<Cinematic2MovieTrackDef>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
