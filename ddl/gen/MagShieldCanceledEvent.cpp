// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/MagShieldCanceledEvent.hpp>

namespace rivet::ddl::generated {
	MagShieldCanceledEvent::MagShieldCanceledEvent([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): EventBase(serialized) {

	}

	[[nodiscard]] auto
	MagShieldCanceledEvent::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	MagShieldCanceledEvent::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<MagShieldCanceledEvent> {
		if (incoming_type_id == MagShieldCanceledEvent::type_id) {
			return std::make_shared<MagShieldCanceledEvent>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated