// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/VendorWeaponInfo.hpp> 

#include <rivet/ddl/generated/VendorItemData.hpp>

namespace rivet::ddl::generated {
	VendorItemData::VendorItemData([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		Item = serialized->get_string(Item_type_id, {});
		Price = serialized->get_int32(Price_type_id, 1u);
		MissionShow = serialized->get_string(MissionShow_type_id, {});
		ObjectiveShow = serialized->get_string(ObjectiveShow_type_id, {});
		MissionUnlock = serialized->get_string(MissionUnlock_type_id, {});
		ObjectiveUnlock = serialized->get_string(ObjectiveUnlock_type_id, {});
		UnlockedInChallengeMode = serialized->get_bool(UnlockedInChallengeMode_type_id, true);
		NowInStockEmergentVO = serialized->get_enum<rivet::ddl::generated::x6be956dd>(NowInStockEmergentVO_type_id, rivet::ddl::generated::x6be956dd_values, rivet::ddl::generated::x6be956dd::None);
		OmegaPrice = serialized->get_int32(OmegaPrice_type_id, 1u);
		OmegaRequiredCardBonus = serialized->get_enum<rivet::ddl::generated::BonusType>(OmegaRequiredCardBonus_type_id, rivet::ddl::generated::BonusType_values, rivet::ddl::generated::BonusType::None);
		OmegaOnly = serialized->get_bool(OmegaOnly_type_id, false);
		IsAmmo = serialized->get_bool(IsAmmo_type_id, false);
		WeaponInfo = serialized->unwrap_into<rivet::ddl::generated::VendorWeaponInfo>(WeaponInfo_type_id); 
	}

	[[nodiscard]] auto
	VendorItemData::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	VendorItemData::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<VendorItemData> {
		if (incoming_type_id == VendorItemData::type_id) {
			return std::make_shared<VendorItemData>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
