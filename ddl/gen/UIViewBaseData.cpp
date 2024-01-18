// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/PlayerHUDViewData.hpp>
#include <rivet/ddl/generated/LobbyViewData.hpp>
#include <rivet/ddl/generated/ZurkieViewData.hpp>
#include <rivet/ddl/generated/VendorViewData.hpp>
#include <rivet/ddl/generated/PauseMenuViewData.hpp>
#include <rivet/ddl/generated/UIAtlasBaseData.hpp>
#include <rivet/ddl/generated/DisplayGraphicsPCViewData.hpp>
#include <rivet/ddl/generated/PlanetMenuViewData.hpp> 

#include <rivet/ddl/generated/UIViewBaseData.hpp>

namespace rivet::ddl::generated {
	UIViewBaseData::UIViewBaseData([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		OverrideAR = serialized->get_float(OverrideAR_type_id, 0.000000f); 
	}

	[[nodiscard]] auto
	UIViewBaseData::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	UIViewBaseData::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<UIViewBaseData> {
		if (incoming_type_id == UIViewBaseData::type_id) {
			return std::make_shared<UIViewBaseData>(serialized);
		}

		auto PlanetMenuViewData_ptr = PlanetMenuViewData::from_substruct(incoming_type_id, serialized);
		if (PlanetMenuViewData_ptr != nullptr) {
			return PlanetMenuViewData_ptr;
		}

		auto UIAtlasBaseData_ptr = UIAtlasBaseData::from_substruct(incoming_type_id, serialized);
		if (UIAtlasBaseData_ptr != nullptr) {
			return UIAtlasBaseData_ptr;
		}

		auto VendorViewData_ptr = VendorViewData::from_substruct(incoming_type_id, serialized);
		if (VendorViewData_ptr != nullptr) {
			return VendorViewData_ptr;
		}

		auto PauseMenuViewData_ptr = PauseMenuViewData::from_substruct(incoming_type_id, serialized);
		if (PauseMenuViewData_ptr != nullptr) {
			return PauseMenuViewData_ptr;
		}

		auto DisplayGraphicsPCViewData_ptr = DisplayGraphicsPCViewData::from_substruct(incoming_type_id, serialized);
		if (DisplayGraphicsPCViewData_ptr != nullptr) {
			return DisplayGraphicsPCViewData_ptr;
		}

		auto ZurkieViewData_ptr = ZurkieViewData::from_substruct(incoming_type_id, serialized);
		if (ZurkieViewData_ptr != nullptr) {
			return ZurkieViewData_ptr;
		}

		auto LobbyViewData_ptr = LobbyViewData::from_substruct(incoming_type_id, serialized);
		if (LobbyViewData_ptr != nullptr) {
			return LobbyViewData_ptr;
		}

		auto PlayerHUDViewData_ptr = PlayerHUDViewData::from_substruct(incoming_type_id, serialized);
		if (PlayerHUDViewData_ptr != nullptr) {
			return PlayerHUDViewData_ptr;
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
