// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/DevstatsPrimarySegmentInfo.hpp>
#include <rivet/ddl/generated/DevstatsPlayerPositionInfo.hpp> 

#include <rivet/ddl/generated/PurchaseWeaponEvent.hpp>

namespace rivet::ddl::generated {
	PurchaseWeaponEvent::PurchaseWeaponEvent([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): EventBase(serialized) {
		EventId = serialized->get_string(EventId_type_id, {});
		WeaponName = serialized->get_string(WeaponName_type_id, {});
		WeaponConfig = serialized->get_uint64(WeaponConfig_type_id, 0ull);
		PlayerPosInfo = serialized->unwrap_into<rivet::ddl::generated::DevstatsPlayerPositionInfo>(PlayerPosInfo_type_id);
		PrimarySegmentInfo = serialized->unwrap_into<rivet::ddl::generated::DevstatsPrimarySegmentInfo>(PrimarySegmentInfo_type_id); 
	}

	[[nodiscard]] auto
	PurchaseWeaponEvent::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	PurchaseWeaponEvent::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<PurchaseWeaponEvent> {
		if (incoming_type_id == PurchaseWeaponEvent::type_id) {
			return std::make_shared<PurchaseWeaponEvent>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
