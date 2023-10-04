// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/StatusEffectTrackerLightningRodPrius.hpp>
#include <rivet/ddl/generated/StatusEffectTrackerWarpRifleImplodePrius.hpp>
#include <rivet/ddl/generated/StatusEffectTrackerFossilizePrius.hpp>
#include <rivet/ddl/generated/StatusEffectTrackerShrubberyPrius.hpp>
#include <rivet/ddl/generated/FinaleMechStatusEffectTrackerPixelizedPrius.hpp>
#include <rivet/ddl/generated/StatusEffectTrackerMagnaMissilePrius.hpp>
#include <rivet/ddl/generated/StatusEffectTrackerProtoGrenadePrius.hpp>
#include <rivet/ddl/generated/StatusEffectTrackerFreezePrius.hpp>
#include <rivet/ddl/generated/StatusEffectTrackerRynotizePrius.hpp>
#include <rivet/ddl/generated/StatusEffectTrackerFirePrius.hpp>
#include <rivet/ddl/generated/StatusEffectTrackerElectricityPrius.hpp> 

#include <rivet/ddl/generated/StatusEffectTrackerBasePrius.hpp>

namespace rivet::ddl::generated {
	StatusEffectTrackerBasePrius::StatusEffectTrackerBasePrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		Threshhold = serialized->get_float(Threshhold_type_id);
		DecayRate = serialized->get_float(DecayRate_type_id);
		DecayDelay = serialized->get_float(DecayDelay_type_id);
		Vulnerability = serialized->get_float(Vulnerability_type_id);
		DurationMod = serialized->get_float(DurationMod_type_id);
		CooldownMod = serialized->get_float(CooldownMod_type_id);
		AllowRefresh = serialized->get_bool(AllowRefresh_type_id);
		AllowProportionalRefresh = serialized->get_bool(AllowProportionalRefresh_type_id);
		AllowIfDead = serialized->get_bool(AllowIfDead_type_id);
		OnlyApplyOnDeath = serialized->get_bool(OnlyApplyOnDeath_type_id); 
	}

	[[nodiscard]] auto
	StatusEffectTrackerBasePrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	StatusEffectTrackerBasePrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<StatusEffectTrackerBasePrius> {
		if (incoming_type_id == StatusEffectTrackerBasePrius::type_id) {
			return std::make_shared<StatusEffectTrackerBasePrius>(serialized);
		}

		auto StatusEffectTrackerLightningRodPrius_ptr = StatusEffectTrackerLightningRodPrius::from_substruct(incoming_type_id, serialized);
		if (StatusEffectTrackerLightningRodPrius_ptr != nullptr) {
			return StatusEffectTrackerLightningRodPrius_ptr;
		}

		auto StatusEffectTrackerFossilizePrius_ptr = StatusEffectTrackerFossilizePrius::from_substruct(incoming_type_id, serialized);
		if (StatusEffectTrackerFossilizePrius_ptr != nullptr) {
			return StatusEffectTrackerFossilizePrius_ptr;
		}

		auto StatusEffectTrackerMagnaMissilePrius_ptr = StatusEffectTrackerMagnaMissilePrius::from_substruct(incoming_type_id, serialized);
		if (StatusEffectTrackerMagnaMissilePrius_ptr != nullptr) {
			return StatusEffectTrackerMagnaMissilePrius_ptr;
		}

		auto StatusEffectTrackerWarpRifleImplodePrius_ptr = StatusEffectTrackerWarpRifleImplodePrius::from_substruct(incoming_type_id, serialized);
		if (StatusEffectTrackerWarpRifleImplodePrius_ptr != nullptr) {
			return StatusEffectTrackerWarpRifleImplodePrius_ptr;
		}

		auto StatusEffectTrackerProtoGrenadePrius_ptr = StatusEffectTrackerProtoGrenadePrius::from_substruct(incoming_type_id, serialized);
		if (StatusEffectTrackerProtoGrenadePrius_ptr != nullptr) {
			return StatusEffectTrackerProtoGrenadePrius_ptr;
		}

		auto FinaleMechStatusEffectTrackerPixelizedPrius_ptr = FinaleMechStatusEffectTrackerPixelizedPrius::from_substruct(incoming_type_id, serialized);
		if (FinaleMechStatusEffectTrackerPixelizedPrius_ptr != nullptr) {
			return FinaleMechStatusEffectTrackerPixelizedPrius_ptr;
		}

		auto StatusEffectTrackerShrubberyPrius_ptr = StatusEffectTrackerShrubberyPrius::from_substruct(incoming_type_id, serialized);
		if (StatusEffectTrackerShrubberyPrius_ptr != nullptr) {
			return StatusEffectTrackerShrubberyPrius_ptr;
		}

		auto StatusEffectTrackerFreezePrius_ptr = StatusEffectTrackerFreezePrius::from_substruct(incoming_type_id, serialized);
		if (StatusEffectTrackerFreezePrius_ptr != nullptr) {
			return StatusEffectTrackerFreezePrius_ptr;
		}

		auto StatusEffectTrackerRynotizePrius_ptr = StatusEffectTrackerRynotizePrius::from_substruct(incoming_type_id, serialized);
		if (StatusEffectTrackerRynotizePrius_ptr != nullptr) {
			return StatusEffectTrackerRynotizePrius_ptr;
		}

		auto StatusEffectTrackerFirePrius_ptr = StatusEffectTrackerFirePrius::from_substruct(incoming_type_id, serialized);
		if (StatusEffectTrackerFirePrius_ptr != nullptr) {
			return StatusEffectTrackerFirePrius_ptr;
		}

		auto StatusEffectTrackerElectricityPrius_ptr = StatusEffectTrackerElectricityPrius::from_substruct(incoming_type_id, serialized);
		if (StatusEffectTrackerElectricityPrius_ptr != nullptr) {
			return StatusEffectTrackerElectricityPrius_ptr;
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
