// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/UI_CinematicActorLocatorPicker.hpp>

namespace rivet::ddl::generated {
	UI_CinematicActorLocatorPicker::UI_CinematicActorLocatorPicker([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		ActorId = serialized->get_uint64(ActorId_type_id, 0ull);
		LocatorName = serialized->get_string(LocatorName_type_id, {}); 
	}

	[[nodiscard]] auto
	UI_CinematicActorLocatorPicker::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	UI_CinematicActorLocatorPicker::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<UI_CinematicActorLocatorPicker> {
		if (incoming_type_id == UI_CinematicActorLocatorPicker::type_id) {
			return std::make_shared<UI_CinematicActorLocatorPicker>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
