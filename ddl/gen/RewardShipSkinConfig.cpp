// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/ShipSkinMaterialGroup.hpp> 

#include <rivet/ddl/generated/RewardShipSkinConfig.hpp>

namespace rivet::ddl::generated {
	RewardShipSkinConfig::RewardShipSkinConfig([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): ConfigBase(serialized) {
		Skins = serialized->unwrap_into_many<rivet::ddl::generated::ShipSkinMaterialGroup>(Skins_type_id); 
	}

	[[nodiscard]] auto
	RewardShipSkinConfig::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	RewardShipSkinConfig::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<RewardShipSkinConfig> {
		if (incoming_type_id == RewardShipSkinConfig::type_id) {
			return std::make_shared<RewardShipSkinConfig>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
