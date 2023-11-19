// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/PlatformMovingStopItem.hpp>

namespace rivet::ddl::generated {
	PlatformMovingStopItem::PlatformMovingStopItem([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		StopVolume = serialized->get_uint64(StopVolume_type_id);
		StopType = serialized->get_enum<rivet::ddl::generated::x8b0475d0>(StopType_type_id, rivet::ddl::generated::x8b0475d0_values);
		ActionTime = serialized->get_float(ActionTime_type_id);
		CallVolume = serialized->get_uint64(CallVolume_type_id);
		SquashVolume = serialized->get_uint64(SquashVolume_type_id);
		SquashStopDist = serialized->get_float(SquashStopDist_type_id);
		OfferLOCTag = serialized->get_string(OfferLOCTag_type_id); 
	}

	[[nodiscard]] auto
	PlatformMovingStopItem::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	PlatformMovingStopItem::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<PlatformMovingStopItem> {
		if (incoming_type_id == PlatformMovingStopItem::type_id) {
			return std::make_shared<PlatformMovingStopItem>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated