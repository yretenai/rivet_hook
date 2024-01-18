// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/BotComboConditionGoonBikeBolaCheckPrius.hpp> 

#include <rivet/ddl/generated/BotComboConditionDistFromClosestNavPrius.hpp>

namespace rivet::ddl::generated {
	BotComboConditionDistFromClosestNavPrius::BotComboConditionDistFromClosestNavPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): BotComboConditionBasePrius(serialized) {
		NavDistance = serialized->get_float(NavDistance_type_id, 6.000000f);
		FlipLogicToCheckOutsideOfDist = serialized->get_bool(FlipLogicToCheckOutsideOfDist_type_id, false);
		CheckFromLastGoodGround = serialized->get_bool(CheckFromLastGoodGround_type_id, true); 
	}

	[[nodiscard]] auto
	BotComboConditionDistFromClosestNavPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	BotComboConditionDistFromClosestNavPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<BotComboConditionDistFromClosestNavPrius> {
		if (incoming_type_id == BotComboConditionDistFromClosestNavPrius::type_id) {
			return std::make_shared<BotComboConditionDistFromClosestNavPrius>(serialized);
		}

		auto BotComboConditionGoonBikeBolaCheckPrius_ptr = BotComboConditionGoonBikeBolaCheckPrius::from_substruct(incoming_type_id, serialized);
		if (BotComboConditionGoonBikeBolaCheckPrius_ptr != nullptr) {
			return BotComboConditionGoonBikeBolaCheckPrius_ptr;
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
