// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/EffectRenderOverride.hpp>
#include <rivet/ddl/generated/EventBase.hpp> 

#include <rivet/ddl/generated/EffectRenderOverrideRelayPrius.hpp>

namespace rivet::ddl::generated {
	EffectRenderOverrideRelayPrius::EffectRenderOverrideRelayPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		TriggeringEvent = serialized->unwrap_into<rivet::ddl::generated::EventBase>(TriggeringEvent_type_id);
		MaxTriggeringEvents = serialized->get_int32(MaxTriggeringEvents_type_id, 1u);
		RenderOverrides = serialized->unwrap_into_many<rivet::ddl::generated::EffectRenderOverride>(RenderOverrides_type_id); 
	}

	[[nodiscard]] auto
	EffectRenderOverrideRelayPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	EffectRenderOverrideRelayPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<EffectRenderOverrideRelayPrius> {
		if (incoming_type_id == EffectRenderOverrideRelayPrius::type_id) {
			return std::make_shared<EffectRenderOverrideRelayPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
