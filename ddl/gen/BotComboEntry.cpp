// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/BotComboConditionListEntry.hpp>
#include <rivet/ddl/generated/BotComboMoveContainer.hpp> 

#include <rivet/ddl/generated/BotComboEntry.hpp>

namespace rivet::ddl::generated {
	BotComboEntry::BotComboEntry([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		Name = serialized->get_string(Name_type_id);
		RandomWeighting = serialized->get_float(RandomWeighting_type_id);
		StartingCooldown = serialized->get_float(StartingCooldown_type_id);
		Cooldown = serialized->get_float(Cooldown_type_id);
		SelectDistanceMin = serialized->get_float(SelectDistanceMin_type_id);
		SelectDistanceMax = serialized->get_float(SelectDistanceMax_type_id);
		SelectHeightMin = serialized->get_float(SelectHeightMin_type_id);
		SelectHeightMax = serialized->get_float(SelectHeightMax_type_id);
		SelectHeightDiffMin = serialized->get_float(SelectHeightDiffMin_type_id);
		SelectHeightDiffMax = serialized->get_float(SelectHeightDiffMax_type_id);
		SelectNavDistanceMax = serialized->get_float(SelectNavDistanceMax_type_id);
		Directional = serialized->get_bool(Directional_type_id);
		FaceTargetAngleTolerance = serialized->get_float(FaceTargetAngleTolerance_type_id);
		CanBeResumed = serialized->get_bool(CanBeResumed_type_id);
		IsTopiaryRetaliate = serialized->get_bool(IsTopiaryRetaliate_type_id);
		ComboConditionList = serialized->unwrap_into_many<rivet::ddl::generated::BotComboConditionListEntry>(ComboConditionList_type_id);
		Moves = serialized->unwrap_into_many<rivet::ddl::generated::BotComboMoveContainer>(Moves_type_id); 
	}

	[[nodiscard]] auto
	BotComboEntry::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	BotComboEntry::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<BotComboEntry> {
		if (incoming_type_id == BotComboEntry::type_id) {
			return std::make_shared<BotComboEntry>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
