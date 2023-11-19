// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/TimeScaleChannelBlendInEvent.hpp>

namespace rivet::ddl::generated {
	TimeScaleChannelBlendInEvent::TimeScaleChannelBlendInEvent([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): EventBase(serialized) {
		BlendInDuration = serialized->get_float(BlendInDuration_type_id); 
	}

	[[nodiscard]] auto
	TimeScaleChannelBlendInEvent::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	TimeScaleChannelBlendInEvent::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<TimeScaleChannelBlendInEvent> {
		if (incoming_type_id == TimeScaleChannelBlendInEvent::type_id) {
			return std::make_shared<TimeScaleChannelBlendInEvent>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated