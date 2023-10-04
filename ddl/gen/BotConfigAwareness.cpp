// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/AwarenessBasePrius.hpp>
#include <rivet/ddl/generated/TargetingStimulusListenerPrius.hpp> 

#include <rivet/ddl/generated/BotConfigAwareness.hpp>

namespace rivet::ddl::generated {
	BotConfigAwareness::BotConfigAwareness([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): ConfigBase(serialized) {
		Awareness = serialized->unwrap_into<rivet::ddl::generated::AwarenessBasePrius>(Awareness_type_id);
		StimulusSource = serialized->get_enum<rivet::ddl::generated::x2efb4283>(StimulusSource_type_id, rivet::ddl::generated::x2efb4283_values);
		StimulusConfig = serialized->get_string(StimulusConfig_type_id);
		TargetingStimulus = serialized->unwrap_into<rivet::ddl::generated::TargetingStimulusListenerPrius>(TargetingStimulus_type_id); 
	}

	[[nodiscard]] auto
	BotConfigAwareness::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	BotConfigAwareness::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<BotConfigAwareness> {
		if (incoming_type_id == BotConfigAwareness::type_id) {
			return std::make_shared<BotConfigAwareness>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated