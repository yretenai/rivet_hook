// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/ExplodedEvent.hpp>

namespace rivet::ddl::generated {
	ExplodedEvent::ExplodedEvent([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): EventBase(serialized) {
		LastDamageType = serialized->get_enum<rivet::ddl::generated::DamageTypes>(LastDamageType_type_id, rivet::ddl::generated::DamageTypes_values, rivet::ddl::generated::DamageTypes::None);
		HideDelay = serialized->get_float(HideDelay_type_id, 0.000000f);
		SmokePuff = serialized->get_bool(SmokePuff_type_id, false); 
	}

	[[nodiscard]] auto
	ExplodedEvent::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	ExplodedEvent::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<ExplodedEvent> {
		if (incoming_type_id == ExplodedEvent::type_id) {
			return std::make_shared<ExplodedEvent>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
