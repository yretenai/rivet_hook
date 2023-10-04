// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/MagBootLaunchItemConfig.hpp>
#include <rivet/ddl/generated/UsableItemConfig.hpp>
#include <rivet/ddl/generated/WeaponItemConfig.hpp>
#include <rivet/ddl/generated/GameItemData.hpp>
#include <rivet/ddl/generated/PlayerXpItemConfig.hpp>
#include <rivet/ddl/generated/MissionItemConfig.hpp>
#include <rivet/ddl/generated/HydropackItemConfig.hpp>
#include <rivet/ddl/generated/ShieldItemConfig.hpp>
#include <rivet/ddl/generated/TradingCardItemConfig.hpp>
#include <rivet/ddl/generated/CompassItemConfig.hpp>
#include <rivet/ddl/generated/GadgetItemConfig.hpp>
#include <rivet/ddl/generated/BattleBrewItemConfig.hpp>
#include <rivet/ddl/generated/AmmoItemConfig.hpp>
#include <rivet/ddl/generated/ProtosuitItemConfig.hpp>
#include <rivet/ddl/generated/PortalTetherItemConfig.hpp>
#include <rivet/ddl/generated/TeslablastRocketItemConfig.hpp>
#include <rivet/ddl/generated/OxygenMaskItemConfig.hpp>
#include <rivet/ddl/generated/SlingshotItemConfig.hpp>
#include <rivet/ddl/generated/CurrencyItemConfig.hpp>
#include <rivet/ddl/generated/PartItemConfig.hpp> 

#include <rivet/ddl/generated/GameItemConfig.hpp>

namespace rivet::ddl::generated {
	GameItemConfig::GameItemConfig([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): ItemConfig(serialized) {
		GameItemData = serialized->unwrap_into<rivet::ddl::generated::GameItemData>(GameItemData_type_id); 
	}

	[[nodiscard]] auto
	GameItemConfig::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	GameItemConfig::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<GameItemConfig> {
		if (incoming_type_id == GameItemConfig::type_id) {
			return std::make_shared<GameItemConfig>(serialized);
		}

		auto PlayerXpItemConfig_ptr = PlayerXpItemConfig::from_substruct(incoming_type_id, serialized);
		if (PlayerXpItemConfig_ptr != nullptr) {
			return PlayerXpItemConfig_ptr;
		}

		auto MissionItemConfig_ptr = MissionItemConfig::from_substruct(incoming_type_id, serialized);
		if (MissionItemConfig_ptr != nullptr) {
			return MissionItemConfig_ptr;
		}

		auto HydropackItemConfig_ptr = HydropackItemConfig::from_substruct(incoming_type_id, serialized);
		if (HydropackItemConfig_ptr != nullptr) {
			return HydropackItemConfig_ptr;
		}

		auto ShieldItemConfig_ptr = ShieldItemConfig::from_substruct(incoming_type_id, serialized);
		if (ShieldItemConfig_ptr != nullptr) {
			return ShieldItemConfig_ptr;
		}

		auto WeaponItemConfig_ptr = WeaponItemConfig::from_substruct(incoming_type_id, serialized);
		if (WeaponItemConfig_ptr != nullptr) {
			return WeaponItemConfig_ptr;
		}

		auto TradingCardItemConfig_ptr = TradingCardItemConfig::from_substruct(incoming_type_id, serialized);
		if (TradingCardItemConfig_ptr != nullptr) {
			return TradingCardItemConfig_ptr;
		}

		auto CompassItemConfig_ptr = CompassItemConfig::from_substruct(incoming_type_id, serialized);
		if (CompassItemConfig_ptr != nullptr) {
			return CompassItemConfig_ptr;
		}

		auto GadgetItemConfig_ptr = GadgetItemConfig::from_substruct(incoming_type_id, serialized);
		if (GadgetItemConfig_ptr != nullptr) {
			return GadgetItemConfig_ptr;
		}

		auto UsableItemConfig_ptr = UsableItemConfig::from_substruct(incoming_type_id, serialized);
		if (UsableItemConfig_ptr != nullptr) {
			return UsableItemConfig_ptr;
		}

		auto BattleBrewItemConfig_ptr = BattleBrewItemConfig::from_substruct(incoming_type_id, serialized);
		if (BattleBrewItemConfig_ptr != nullptr) {
			return BattleBrewItemConfig_ptr;
		}

		auto AmmoItemConfig_ptr = AmmoItemConfig::from_substruct(incoming_type_id, serialized);
		if (AmmoItemConfig_ptr != nullptr) {
			return AmmoItemConfig_ptr;
		}

		auto ProtosuitItemConfig_ptr = ProtosuitItemConfig::from_substruct(incoming_type_id, serialized);
		if (ProtosuitItemConfig_ptr != nullptr) {
			return ProtosuitItemConfig_ptr;
		}

		auto PortalTetherItemConfig_ptr = PortalTetherItemConfig::from_substruct(incoming_type_id, serialized);
		if (PortalTetherItemConfig_ptr != nullptr) {
			return PortalTetherItemConfig_ptr;
		}

		auto TeslablastRocketItemConfig_ptr = TeslablastRocketItemConfig::from_substruct(incoming_type_id, serialized);
		if (TeslablastRocketItemConfig_ptr != nullptr) {
			return TeslablastRocketItemConfig_ptr;
		}

		auto MagBootLaunchItemConfig_ptr = MagBootLaunchItemConfig::from_substruct(incoming_type_id, serialized);
		if (MagBootLaunchItemConfig_ptr != nullptr) {
			return MagBootLaunchItemConfig_ptr;
		}

		auto OxygenMaskItemConfig_ptr = OxygenMaskItemConfig::from_substruct(incoming_type_id, serialized);
		if (OxygenMaskItemConfig_ptr != nullptr) {
			return OxygenMaskItemConfig_ptr;
		}

		auto SlingshotItemConfig_ptr = SlingshotItemConfig::from_substruct(incoming_type_id, serialized);
		if (SlingshotItemConfig_ptr != nullptr) {
			return SlingshotItemConfig_ptr;
		}

		auto CurrencyItemConfig_ptr = CurrencyItemConfig::from_substruct(incoming_type_id, serialized);
		if (CurrencyItemConfig_ptr != nullptr) {
			return CurrencyItemConfig_ptr;
		}

		auto PartItemConfig_ptr = PartItemConfig::from_substruct(incoming_type_id, serialized);
		if (PartItemConfig_ptr != nullptr) {
			return PartItemConfig_ptr;
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
