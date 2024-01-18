// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/Cinematic2BehaviorPlayAnimEvent.hpp>

namespace rivet::ddl::generated {
	Cinematic2BehaviorPlayAnimEvent::Cinematic2BehaviorPlayAnimEvent([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): EventBase(serialized) {
		TimeNorm = serialized->get_float(TimeNorm_type_id, 0.000000f);
		Rate = serialized->get_float(Rate_type_id, 1.000000f); 
	}

	[[nodiscard]] auto
	Cinematic2BehaviorPlayAnimEvent::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	Cinematic2BehaviorPlayAnimEvent::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<Cinematic2BehaviorPlayAnimEvent> {
		if (incoming_type_id == Cinematic2BehaviorPlayAnimEvent::type_id) {
			return std::make_shared<Cinematic2BehaviorPlayAnimEvent>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
