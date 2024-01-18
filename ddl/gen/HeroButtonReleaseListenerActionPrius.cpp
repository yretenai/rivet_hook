// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/ActionControlBase.hpp> 

#include <rivet/ddl/generated/HeroButtonReleaseListenerActionPrius.hpp>

namespace rivet::ddl::generated {
	HeroButtonReleaseListenerActionPrius::HeroButtonReleaseListenerActionPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		ActionType = serialized->get_enum<rivet::ddl::generated::x10228b34>(ActionType_type_id, rivet::ddl::generated::x10228b34_values, rivet::ddl::generated::x10228b34::Hero);
		InputType = serialized->get_enum<rivet::ddl::generated::x290280c7>(InputType_type_id, rivet::ddl::generated::x290280c7_values, rivet::ddl::generated::x290280c7::Button);
		Button = serialized->get_enum<rivet::ddl::generated::xe50c3252>(Button_type_id, rivet::ddl::generated::xe50c3252_values, rivet::ddl::generated::xe50c3252::None);
		Action = serialized->unwrap_into<rivet::ddl::generated::ActionControlBase>(Action_type_id);
		StartListening = serialized->get_bool(StartListening_type_id, true);
		RetriggerDelay = serialized->get_float(RetriggerDelay_type_id, -1.000000f); 
	}

	[[nodiscard]] auto
	HeroButtonReleaseListenerActionPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	HeroButtonReleaseListenerActionPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<HeroButtonReleaseListenerActionPrius> {
		if (incoming_type_id == HeroButtonReleaseListenerActionPrius::type_id) {
			return std::make_shared<HeroButtonReleaseListenerActionPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
