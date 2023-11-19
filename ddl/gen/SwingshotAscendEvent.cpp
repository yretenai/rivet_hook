// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/SwingshotAscendEvent.hpp>

namespace rivet::ddl::generated {
	SwingshotAscendEvent::SwingshotAscendEvent([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): EventBase(serialized) {

	}

	[[nodiscard]] auto
	SwingshotAscendEvent::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	SwingshotAscendEvent::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<SwingshotAscendEvent> {
		if (incoming_type_id == SwingshotAscendEvent::type_id) {
			return std::make_shared<SwingshotAscendEvent>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated