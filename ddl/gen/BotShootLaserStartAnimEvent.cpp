// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/BotShootLaserStartAnimEvent.hpp>

namespace rivet::ddl::generated {
	BotShootLaserStartAnimEvent::BotShootLaserStartAnimEvent([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): EventBase(serialized) {

	}

	[[nodiscard]] auto
	BotShootLaserStartAnimEvent::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	BotShootLaserStartAnimEvent::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<BotShootLaserStartAnimEvent> {
		if (incoming_type_id == BotShootLaserStartAnimEvent::type_id) {
			return std::make_shared<BotShootLaserStartAnimEvent>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated