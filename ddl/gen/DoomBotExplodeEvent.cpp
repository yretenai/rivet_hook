// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/DoomBotExplodeEvent.hpp>

namespace rivet::ddl::generated {
	DoomBotExplodeEvent::DoomBotExplodeEvent([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): EventBase(serialized) {
		Radius = serialized->get_float(Radius_type_id, 0.000000f); 
	}

	[[nodiscard]] auto
	DoomBotExplodeEvent::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	DoomBotExplodeEvent::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<DoomBotExplodeEvent> {
		if (incoming_type_id == DoomBotExplodeEvent::type_id) {
			return std::make_shared<DoomBotExplodeEvent>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
