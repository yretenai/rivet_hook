// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/ChargeAttackStartEvent.hpp>

namespace rivet::ddl::generated {
	ChargeAttackStartEvent::ChargeAttackStartEvent([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): EventBase(serialized) {

	}

	[[nodiscard]] auto
	ChargeAttackStartEvent::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	ChargeAttackStartEvent::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<ChargeAttackStartEvent> {
		if (incoming_type_id == ChargeAttackStartEvent::type_id) {
			return std::make_shared<ChargeAttackStartEvent>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated