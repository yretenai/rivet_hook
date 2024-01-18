// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/ZurkieJukeboxSelectEvent.hpp>

namespace rivet::ddl::generated {
	ZurkieJukeboxSelectEvent::ZurkieJukeboxSelectEvent([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): EventBase(serialized) {
		SongIndex = serialized->get_float(SongIndex_type_id, 0.000000f); 
	}

	[[nodiscard]] auto
	ZurkieJukeboxSelectEvent::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	ZurkieJukeboxSelectEvent::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<ZurkieJukeboxSelectEvent> {
		if (incoming_type_id == ZurkieJukeboxSelectEvent::type_id) {
			return std::make_shared<ZurkieJukeboxSelectEvent>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
