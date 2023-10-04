// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/DistanceHeuristics.hpp>
#include <rivet/ddl/generated/MultiHeuristicTargetingPrius.hpp>
#include <rivet/ddl/generated/LosHeuristics.hpp>
#include <rivet/ddl/generated/PlayerHeuristics.hpp>
#include <rivet/ddl/generated/AggroHeuristics.hpp>
#include <rivet/ddl/generated/DirectionHeuristics.hpp>
#include <rivet/ddl/generated/SpreadHeuristics.hpp> 

#include <rivet/ddl/generated/HeuristicTargetingPrius.hpp>

namespace rivet::ddl::generated {
	HeuristicTargetingPrius::HeuristicTargetingPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): TargetingBasePrius(serialized) {
		Distance = serialized->unwrap_into<rivet::ddl::generated::DistanceHeuristics>(Distance_type_id);
		Los = serialized->unwrap_into<rivet::ddl::generated::LosHeuristics>(Los_type_id);
		Player = serialized->unwrap_into<rivet::ddl::generated::PlayerHeuristics>(Player_type_id);
		Aggro = serialized->unwrap_into<rivet::ddl::generated::AggroHeuristics>(Aggro_type_id);
		Direction = serialized->unwrap_into<rivet::ddl::generated::DirectionHeuristics>(Direction_type_id);
		Spread = serialized->unwrap_into<rivet::ddl::generated::SpreadHeuristics>(Spread_type_id); 
	}

	[[nodiscard]] auto
	HeuristicTargetingPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	HeuristicTargetingPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<HeuristicTargetingPrius> {
		if (incoming_type_id == HeuristicTargetingPrius::type_id) {
			return std::make_shared<HeuristicTargetingPrius>(serialized);
		}

		auto MultiHeuristicTargetingPrius_ptr = MultiHeuristicTargetingPrius::from_substruct(incoming_type_id, serialized);
		if (MultiHeuristicTargetingPrius_ptr != nullptr) {
			return MultiHeuristicTargetingPrius_ptr;
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated