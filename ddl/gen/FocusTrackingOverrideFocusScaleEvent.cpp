// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/FocusTrackingOverrideFocusScaleEvent.hpp>

namespace rivet::ddl::generated {
	FocusTrackingOverrideFocusScaleEvent::FocusTrackingOverrideFocusScaleEvent([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): EventBase(serialized) {
		FocusScaleTarget = serialized->get_float(FocusScaleTarget_type_id, 1.000000f);
		TimeToTarget = serialized->get_float(TimeToTarget_type_id, 0.000000f); 
	}

	[[nodiscard]] auto
	FocusTrackingOverrideFocusScaleEvent::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	FocusTrackingOverrideFocusScaleEvent::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<FocusTrackingOverrideFocusScaleEvent> {
		if (incoming_type_id == FocusTrackingOverrideFocusScaleEvent::type_id) {
			return std::make_shared<FocusTrackingOverrideFocusScaleEvent>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
