// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/ArachnodroidDamageEvent.hpp>

namespace rivet::ddl::generated {
	ArachnodroidDamageEvent::ArachnodroidDamageEvent([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): EventBase(serialized) {

	}

	[[nodiscard]] auto
	ArachnodroidDamageEvent::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	ArachnodroidDamageEvent::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<ArachnodroidDamageEvent> {
		if (incoming_type_id == ArachnodroidDamageEvent::type_id) {
			return std::make_shared<ArachnodroidDamageEvent>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated