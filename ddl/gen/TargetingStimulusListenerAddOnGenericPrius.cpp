// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/TargetingStimulusListenerAddOnGenericPrius.hpp>

namespace rivet::ddl::generated {
	TargetingStimulusListenerAddOnGenericPrius::TargetingStimulusListenerAddOnGenericPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): TargetingStimulusListenerAddOnPrius(serialized) {
		Event = serialized->get_field(Event_type_id); 
	}

	[[nodiscard]] auto
	TargetingStimulusListenerAddOnGenericPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	TargetingStimulusListenerAddOnGenericPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<TargetingStimulusListenerAddOnGenericPrius> {
		if (incoming_type_id == TargetingStimulusListenerAddOnGenericPrius::type_id) {
			return std::make_shared<TargetingStimulusListenerAddOnGenericPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated