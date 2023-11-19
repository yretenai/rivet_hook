// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/DevstatsPrimarySegmentInfo.hpp>
#include <rivet/ddl/generated/DevstatsPlayerPositionInfo.hpp> 

#include <rivet/ddl/generated/DevstatsHighContrastMaterialsDisabledEvent.hpp>

namespace rivet::ddl::generated {
	DevstatsHighContrastMaterialsDisabledEvent::DevstatsHighContrastMaterialsDisabledEvent([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): EventBase(serialized) {
		EventId = serialized->get_string(EventId_type_id);
		PlayerPosInfo = serialized->unwrap_into<rivet::ddl::generated::DevstatsPlayerPositionInfo>(PlayerPosInfo_type_id);
		PrimarySegmentInfo = serialized->unwrap_into<rivet::ddl::generated::DevstatsPrimarySegmentInfo>(PrimarySegmentInfo_type_id);
		HighlightType = serialized->get_enum<rivet::ddl::generated::xf2109875>(HighlightType_type_id, rivet::ddl::generated::xf2109875_values); 
	}

	[[nodiscard]] auto
	DevstatsHighContrastMaterialsDisabledEvent::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	DevstatsHighContrastMaterialsDisabledEvent::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<DevstatsHighContrastMaterialsDisabledEvent> {
		if (incoming_type_id == DevstatsHighContrastMaterialsDisabledEvent::type_id) {
			return std::make_shared<DevstatsHighContrastMaterialsDisabledEvent>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated