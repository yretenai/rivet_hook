// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/DamageModifierConditionAllegiancePrius.hpp>
#include <rivet/ddl/generated/DamageModifierConditionDamageTypePrius.hpp>
#include <rivet/ddl/generated/DamageModifierConditionDamageHashPrius.hpp>
#include <rivet/ddl/generated/DamageModifierConditionNotPrius.hpp>
#include <rivet/ddl/generated/DamageModifierConditionOrPrius.hpp>
#include <rivet/ddl/generated/DamageModifierConditionHealthThreshholdPrius.hpp>
#include <rivet/ddl/generated/DamageModifierConditionHasComponentPrius.hpp>
#include <rivet/ddl/generated/DamageModifierConditionAndPrius.hpp>
#include <rivet/ddl/generated/DamageModifierConditionOrMultiPrius.hpp>
#include <rivet/ddl/generated/DamageModifierConditionSelfDamagePrius.hpp>
#include <rivet/ddl/generated/DamageModifierConditionDamageHashListPrius.hpp>
#include <rivet/ddl/generated/DamageModifierConditionDirectionalIncomingPrius.hpp>
#include <rivet/ddl/generated/DamageModifierConditionRequestIdListPrius.hpp>
#include <rivet/ddl/generated/DamageModifierConditionRequestIdPrius.hpp> 

#include <rivet/ddl/generated/DamageModifierConditionBasePrius.hpp>

namespace rivet::ddl::generated {
	DamageModifierConditionBasePrius::DamageModifierConditionBasePrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {

	}

	[[nodiscard]] auto
	DamageModifierConditionBasePrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	DamageModifierConditionBasePrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<DamageModifierConditionBasePrius> {
		if (incoming_type_id == DamageModifierConditionBasePrius::type_id) {
			return std::make_shared<DamageModifierConditionBasePrius>(serialized);
		}

		auto DamageModifierConditionDamageHashPrius_ptr = DamageModifierConditionDamageHashPrius::from_substruct(incoming_type_id, serialized);
		if (DamageModifierConditionDamageHashPrius_ptr != nullptr) {
			return DamageModifierConditionDamageHashPrius_ptr;
		}

		auto DamageModifierConditionNotPrius_ptr = DamageModifierConditionNotPrius::from_substruct(incoming_type_id, serialized);
		if (DamageModifierConditionNotPrius_ptr != nullptr) {
			return DamageModifierConditionNotPrius_ptr;
		}

		auto DamageModifierConditionHealthThreshholdPrius_ptr = DamageModifierConditionHealthThreshholdPrius::from_substruct(incoming_type_id, serialized);
		if (DamageModifierConditionHealthThreshholdPrius_ptr != nullptr) {
			return DamageModifierConditionHealthThreshholdPrius_ptr;
		}

		auto DamageModifierConditionAllegiancePrius_ptr = DamageModifierConditionAllegiancePrius::from_substruct(incoming_type_id, serialized);
		if (DamageModifierConditionAllegiancePrius_ptr != nullptr) {
			return DamageModifierConditionAllegiancePrius_ptr;
		}

		auto DamageModifierConditionAndPrius_ptr = DamageModifierConditionAndPrius::from_substruct(incoming_type_id, serialized);
		if (DamageModifierConditionAndPrius_ptr != nullptr) {
			return DamageModifierConditionAndPrius_ptr;
		}

		auto DamageModifierConditionDamageTypePrius_ptr = DamageModifierConditionDamageTypePrius::from_substruct(incoming_type_id, serialized);
		if (DamageModifierConditionDamageTypePrius_ptr != nullptr) {
			return DamageModifierConditionDamageTypePrius_ptr;
		}

		auto DamageModifierConditionHasComponentPrius_ptr = DamageModifierConditionHasComponentPrius::from_substruct(incoming_type_id, serialized);
		if (DamageModifierConditionHasComponentPrius_ptr != nullptr) {
			return DamageModifierConditionHasComponentPrius_ptr;
		}

		auto DamageModifierConditionOrMultiPrius_ptr = DamageModifierConditionOrMultiPrius::from_substruct(incoming_type_id, serialized);
		if (DamageModifierConditionOrMultiPrius_ptr != nullptr) {
			return DamageModifierConditionOrMultiPrius_ptr;
		}

		auto DamageModifierConditionSelfDamagePrius_ptr = DamageModifierConditionSelfDamagePrius::from_substruct(incoming_type_id, serialized);
		if (DamageModifierConditionSelfDamagePrius_ptr != nullptr) {
			return DamageModifierConditionSelfDamagePrius_ptr;
		}

		auto DamageModifierConditionDamageHashListPrius_ptr = DamageModifierConditionDamageHashListPrius::from_substruct(incoming_type_id, serialized);
		if (DamageModifierConditionDamageHashListPrius_ptr != nullptr) {
			return DamageModifierConditionDamageHashListPrius_ptr;
		}

		auto DamageModifierConditionOrPrius_ptr = DamageModifierConditionOrPrius::from_substruct(incoming_type_id, serialized);
		if (DamageModifierConditionOrPrius_ptr != nullptr) {
			return DamageModifierConditionOrPrius_ptr;
		}

		auto DamageModifierConditionDirectionalIncomingPrius_ptr = DamageModifierConditionDirectionalIncomingPrius::from_substruct(incoming_type_id, serialized);
		if (DamageModifierConditionDirectionalIncomingPrius_ptr != nullptr) {
			return DamageModifierConditionDirectionalIncomingPrius_ptr;
		}

		auto DamageModifierConditionRequestIdListPrius_ptr = DamageModifierConditionRequestIdListPrius::from_substruct(incoming_type_id, serialized);
		if (DamageModifierConditionRequestIdListPrius_ptr != nullptr) {
			return DamageModifierConditionRequestIdListPrius_ptr;
		}

		auto DamageModifierConditionRequestIdPrius_ptr = DamageModifierConditionRequestIdPrius::from_substruct(incoming_type_id, serialized);
		if (DamageModifierConditionRequestIdPrius_ptr != nullptr) {
			return DamageModifierConditionRequestIdPrius_ptr;
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
