// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/FormationChangeTimeOutEvent.hpp>

namespace rivet::ddl::generated {
	FormationChangeTimeOutEvent::FormationChangeTimeOutEvent([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): EventBase(serialized) {
		TimeOut = serialized->get_float(TimeOut_type_id, 0.000000f); 
	}

	[[nodiscard]] auto
	FormationChangeTimeOutEvent::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	FormationChangeTimeOutEvent::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<FormationChangeTimeOutEvent> {
		if (incoming_type_id == FormationChangeTimeOutEvent::type_id) {
			return std::make_shared<FormationChangeTimeOutEvent>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
