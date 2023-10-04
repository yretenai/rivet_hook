// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/GameBotConfigDeath.hpp>

namespace rivet::ddl::generated {
	GameBotConfigDeath::GameBotConfigDeath([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): BotConfigDeath(serialized) {

	}

	[[nodiscard]] auto
	GameBotConfigDeath::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	GameBotConfigDeath::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<GameBotConfigDeath> {
		if (incoming_type_id == GameBotConfigDeath::type_id) {
			return std::make_shared<GameBotConfigDeath>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
