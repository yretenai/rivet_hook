// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/MultiHeuristicTargetingPrius.hpp>

namespace rivet::ddl::generated {
	MultiHeuristicTargetingPrius::MultiHeuristicTargetingPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): HeuristicTargetingPrius(serialized) {
		MaxTrackedTargets = serialized->get_int32(MaxTrackedTargets_type_id, 1u); 
	}

	[[nodiscard]] auto
	MultiHeuristicTargetingPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	MultiHeuristicTargetingPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<MultiHeuristicTargetingPrius> {
		if (incoming_type_id == MultiHeuristicTargetingPrius::type_id) {
			return std::make_shared<MultiHeuristicTargetingPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
