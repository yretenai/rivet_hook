// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/WwiseState.hpp> 

#include <rivet/ddl/generated/UIJukeboxSong.hpp>

namespace rivet::ddl::generated {
	UIJukeboxSong::UIJukeboxSong([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		WwiseState = serialized->unwrap_into<rivet::ddl::generated::WwiseState>(WwiseState_type_id);
		Title = serialized->get_string(Title_type_id);
		Artist = serialized->get_string(Artist_type_id);
		GoldBoltUnlock = serialized->get_enum<rivet::ddl::generated::xf06c6830>(GoldBoltUnlock_type_id, rivet::ddl::generated::xf06c6830_values);
		MissionUnlock = serialized->get_string(MissionUnlock_type_id); 
	}

	[[nodiscard]] auto
	UIJukeboxSong::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	UIJukeboxSong::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<UIJukeboxSong> {
		if (incoming_type_id == UIJukeboxSong::type_id) {
			return std::make_shared<UIJukeboxSong>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
