// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/BotComboConditionClearSpacePrius.hpp>
#include <rivet/ddl/generated/BotComboConditionHealthCheckPrius.hpp>
#include <rivet/ddl/generated/BotComboConditionHaveArcFinderPrius.hpp>
#include <rivet/ddl/generated/BotComboConditionTargetIsInFactionPrius.hpp>
#include <rivet/ddl/generated/BotComboConditionTargetHasComponentPrius.hpp>
#include <rivet/ddl/generated/BotComboConditionTargetIsInFrontPrius.hpp>
#include <rivet/ddl/generated/BotComboConditionHaveAnimFilterPrius.hpp>
#include <rivet/ddl/generated/BotComboConditionTargetIsBehindPrius.hpp>
#include <rivet/ddl/generated/BotComboConditionDistFromClosestNavPrius.hpp>
#include <rivet/ddl/generated/BotComboConditionVariantCheckPrius.hpp> 

#include <rivet/ddl/generated/BotComboConditionBasePrius.hpp>

namespace rivet::ddl::generated {
	BotComboConditionBasePrius::BotComboConditionBasePrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {

	}

	[[nodiscard]] auto
	BotComboConditionBasePrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	BotComboConditionBasePrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<BotComboConditionBasePrius> {
		if (incoming_type_id == BotComboConditionBasePrius::type_id) {
			return std::make_shared<BotComboConditionBasePrius>(serialized);
		}

		auto BotComboConditionClearSpacePrius_ptr = BotComboConditionClearSpacePrius::from_substruct(incoming_type_id, serialized);
		if (BotComboConditionClearSpacePrius_ptr != nullptr) {
			return BotComboConditionClearSpacePrius_ptr;
		}

		auto BotComboConditionHealthCheckPrius_ptr = BotComboConditionHealthCheckPrius::from_substruct(incoming_type_id, serialized);
		if (BotComboConditionHealthCheckPrius_ptr != nullptr) {
			return BotComboConditionHealthCheckPrius_ptr;
		}

		auto BotComboConditionTargetHasComponentPrius_ptr = BotComboConditionTargetHasComponentPrius::from_substruct(incoming_type_id, serialized);
		if (BotComboConditionTargetHasComponentPrius_ptr != nullptr) {
			return BotComboConditionTargetHasComponentPrius_ptr;
		}

		auto BotComboConditionTargetIsInFactionPrius_ptr = BotComboConditionTargetIsInFactionPrius::from_substruct(incoming_type_id, serialized);
		if (BotComboConditionTargetIsInFactionPrius_ptr != nullptr) {
			return BotComboConditionTargetIsInFactionPrius_ptr;
		}

		auto BotComboConditionTargetIsBehindPrius_ptr = BotComboConditionTargetIsBehindPrius::from_substruct(incoming_type_id, serialized);
		if (BotComboConditionTargetIsBehindPrius_ptr != nullptr) {
			return BotComboConditionTargetIsBehindPrius_ptr;
		}

		auto BotComboConditionTargetIsInFrontPrius_ptr = BotComboConditionTargetIsInFrontPrius::from_substruct(incoming_type_id, serialized);
		if (BotComboConditionTargetIsInFrontPrius_ptr != nullptr) {
			return BotComboConditionTargetIsInFrontPrius_ptr;
		}

		auto BotComboConditionDistFromClosestNavPrius_ptr = BotComboConditionDistFromClosestNavPrius::from_substruct(incoming_type_id, serialized);
		if (BotComboConditionDistFromClosestNavPrius_ptr != nullptr) {
			return BotComboConditionDistFromClosestNavPrius_ptr;
		}

		auto BotComboConditionHaveArcFinderPrius_ptr = BotComboConditionHaveArcFinderPrius::from_substruct(incoming_type_id, serialized);
		if (BotComboConditionHaveArcFinderPrius_ptr != nullptr) {
			return BotComboConditionHaveArcFinderPrius_ptr;
		}

		auto BotComboConditionVariantCheckPrius_ptr = BotComboConditionVariantCheckPrius::from_substruct(incoming_type_id, serialized);
		if (BotComboConditionVariantCheckPrius_ptr != nullptr) {
			return BotComboConditionVariantCheckPrius_ptr;
		}

		auto BotComboConditionHaveAnimFilterPrius_ptr = BotComboConditionHaveAnimFilterPrius::from_substruct(incoming_type_id, serialized);
		if (BotComboConditionHaveAnimFilterPrius_ptr != nullptr) {
			return BotComboConditionHaveAnimFilterPrius_ptr;
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
