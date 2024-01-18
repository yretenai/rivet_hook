// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/GameEndDevstatsEvent.hpp>

namespace rivet::ddl::generated {
	GameEndDevstatsEvent::GameEndDevstatsEvent([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): EventBase(serialized) {
		game_id = serialized->get_string(game_id_type_id, {});
		level_id = serialized->get_string(level_id_type_id, {});
		end_reason = serialized->get_string(end_reason_type_id, {});
		mode = serialized->get_string(mode_type_id, {});
		player_count = serialized->get_int32(player_count_type_id, 0u);
		player_count_local = serialized->get_int32(player_count_local_type_id, 0u);
		is_online = serialized->get_bool(is_online_type_id, false);
		duration_secs = serialized->get_int32(duration_secs_type_id, -1);
		duration_gameplay_secs = serialized->get_int32(duration_gameplay_secs_type_id, -1); 
	}

	[[nodiscard]] auto
	GameEndDevstatsEvent::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	GameEndDevstatsEvent::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<GameEndDevstatsEvent> {
		if (incoming_type_id == GameEndDevstatsEvent::type_id) {
			return std::make_shared<GameEndDevstatsEvent>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
