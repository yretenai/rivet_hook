// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/TriggerOtherEntry.hpp> 

#include <rivet/ddl/generated/TriggerResponderTriggerOtherPrius.hpp>

namespace rivet::ddl::generated {
	TriggerResponderTriggerOtherPrius::TriggerResponderTriggerOtherPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): TriggerResponderBasePrius(serialized) {
		ActorsToTrigger = serialized->unwrap_into_many<rivet::ddl::generated::TriggerOtherEntry>(ActorsToTrigger_type_id); 
	}

	[[nodiscard]] auto
	TriggerResponderTriggerOtherPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	TriggerResponderTriggerOtherPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<TriggerResponderTriggerOtherPrius> {
		if (incoming_type_id == TriggerResponderTriggerOtherPrius::type_id) {
			return std::make_shared<TriggerResponderTriggerOtherPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated