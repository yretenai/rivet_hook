// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/BeamOutStartEvent.hpp>

namespace rivet::ddl::generated {
	BeamOutStartEvent::BeamOutStartEvent([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): EventBase(serialized) {

	}

	[[nodiscard]] auto
	BeamOutStartEvent::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	BeamOutStartEvent::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<BeamOutStartEvent> {
		if (incoming_type_id == BeamOutStartEvent::type_id) {
			return std::make_shared<BeamOutStartEvent>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated