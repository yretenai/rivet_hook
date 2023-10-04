// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/BotComboConditionTargetHasComponentPrius.hpp>

namespace rivet::ddl::generated {
	BotComboConditionTargetHasComponentPrius::BotComboConditionTargetHasComponentPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): BotComboConditionBasePrius(serialized) {
		TargetComponentName = serialized->get_string(TargetComponentName_type_id);
		MaxRange = serialized->get_float(MaxRange_type_id); 
	}

	[[nodiscard]] auto
	BotComboConditionTargetHasComponentPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	BotComboConditionTargetHasComponentPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<BotComboConditionTargetHasComponentPrius> {
		if (incoming_type_id == BotComboConditionTargetHasComponentPrius::type_id) {
			return std::make_shared<BotComboConditionTargetHasComponentPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
