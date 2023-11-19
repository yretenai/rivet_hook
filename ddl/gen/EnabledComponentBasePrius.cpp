// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/GameInteractIconFXPrius.hpp>
#include <rivet/ddl/generated/DamageEmitterMultiPrius.hpp>
#include <rivet/ddl/generated/BotMinionMasterComponentPrius.hpp>
#include <rivet/ddl/generated/NoMagbootVolumePrius.hpp>
#include <rivet/ddl/generated/TriggerSwitchBasePrius.hpp>
#include <rivet/ddl/generated/MinionSpawnLocationPrius.hpp>
#include <rivet/ddl/generated/RespawnableGroupManagerPrius.hpp>
#include <rivet/ddl/generated/SwingshotTargetBasePrius.hpp>
#include <rivet/ddl/generated/HoverbootOmniBoostPadPrius.hpp>
#include <rivet/ddl/generated/BotMinionComponentPrius.hpp>
#include <rivet/ddl/generated/LookAtPrius.hpp>
#include <rivet/ddl/generated/DisplayButtonPOIPrius.hpp> 

#include <rivet/ddl/generated/EnabledComponentBasePrius.hpp>

namespace rivet::ddl::generated {
	EnabledComponentBasePrius::EnabledComponentBasePrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		StartEnabled = serialized->get_bool(StartEnabled_type_id);
		SendEnabledEvents = serialized->get_bool(SendEnabledEvents_type_id); 
	}

	[[nodiscard]] auto
	EnabledComponentBasePrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	EnabledComponentBasePrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<EnabledComponentBasePrius> {
		if (incoming_type_id == EnabledComponentBasePrius::type_id) {
			return std::make_shared<EnabledComponentBasePrius>(serialized);
		}

		auto DisplayButtonPOIPrius_ptr = DisplayButtonPOIPrius::from_substruct(incoming_type_id, serialized);
		if (DisplayButtonPOIPrius_ptr != nullptr) {
			return DisplayButtonPOIPrius_ptr;
		}

		auto LookAtPrius_ptr = LookAtPrius::from_substruct(incoming_type_id, serialized);
		if (LookAtPrius_ptr != nullptr) {
			return LookAtPrius_ptr;
		}

		auto HoverbootOmniBoostPadPrius_ptr = HoverbootOmniBoostPadPrius::from_substruct(incoming_type_id, serialized);
		if (HoverbootOmniBoostPadPrius_ptr != nullptr) {
			return HoverbootOmniBoostPadPrius_ptr;
		}

		auto SwingshotTargetBasePrius_ptr = SwingshotTargetBasePrius::from_substruct(incoming_type_id, serialized);
		if (SwingshotTargetBasePrius_ptr != nullptr) {
			return SwingshotTargetBasePrius_ptr;
		}

		auto MinionSpawnLocationPrius_ptr = MinionSpawnLocationPrius::from_substruct(incoming_type_id, serialized);
		if (MinionSpawnLocationPrius_ptr != nullptr) {
			return MinionSpawnLocationPrius_ptr;
		}

		auto NoMagbootVolumePrius_ptr = NoMagbootVolumePrius::from_substruct(incoming_type_id, serialized);
		if (NoMagbootVolumePrius_ptr != nullptr) {
			return NoMagbootVolumePrius_ptr;
		}

		auto RespawnableGroupManagerPrius_ptr = RespawnableGroupManagerPrius::from_substruct(incoming_type_id, serialized);
		if (RespawnableGroupManagerPrius_ptr != nullptr) {
			return RespawnableGroupManagerPrius_ptr;
		}

		auto BotMinionMasterComponentPrius_ptr = BotMinionMasterComponentPrius::from_substruct(incoming_type_id, serialized);
		if (BotMinionMasterComponentPrius_ptr != nullptr) {
			return BotMinionMasterComponentPrius_ptr;
		}

		auto DamageEmitterMultiPrius_ptr = DamageEmitterMultiPrius::from_substruct(incoming_type_id, serialized);
		if (DamageEmitterMultiPrius_ptr != nullptr) {
			return DamageEmitterMultiPrius_ptr;
		}

		auto TriggerSwitchBasePrius_ptr = TriggerSwitchBasePrius::from_substruct(incoming_type_id, serialized);
		if (TriggerSwitchBasePrius_ptr != nullptr) {
			return TriggerSwitchBasePrius_ptr;
		}

		auto BotMinionComponentPrius_ptr = BotMinionComponentPrius::from_substruct(incoming_type_id, serialized);
		if (BotMinionComponentPrius_ptr != nullptr) {
			return BotMinionComponentPrius_ptr;
		}

		auto GameInteractIconFXPrius_ptr = GameInteractIconFXPrius::from_substruct(incoming_type_id, serialized);
		if (GameInteractIconFXPrius_ptr != nullptr) {
			return GameInteractIconFXPrius_ptr;
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated