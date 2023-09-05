// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/BotComboConditionClearSpacePrius.hpp>

namespace rivet::ddl::generated {
	BotComboConditionClearSpacePrius::BotComboConditionClearSpacePrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): BotComboConditionBasePrius(serialized) {
		DistanceForward = serialized->get_float(DistanceForward_type_id);
		Height = serialized->get_float(Height_type_id);
		Radius = serialized->get_float(Radius_type_id);
		CheckTargetDirection = serialized->get_bool(CheckTargetDirection_type_id);
		CheckNavMesh = serialized->get_bool(CheckNavMesh_type_id); 
	}

	auto
	BotComboConditionClearSpacePrius::get_type_id() const noexcept -> rivet::rivet_type_id {
		return type_id;
	}

	[[nodiscard]] auto
	BotComboConditionClearSpacePrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	BotComboConditionClearSpacePrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<BotComboConditionClearSpacePrius> {
		if (incoming_type_id == BotComboConditionClearSpacePrius::type_id) {
			return std::make_shared<BotComboConditionClearSpacePrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated