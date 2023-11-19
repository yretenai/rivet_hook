// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/CinematicAutoLoadZonesEngineItem.hpp>

namespace rivet::ddl::generated {
	CinematicAutoLoadZonesEngineItem::CinematicAutoLoadZonesEngineItem([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		ZoneList = serialized->get_strings(ZoneList_type_id); 
	}

	[[nodiscard]] auto
	CinematicAutoLoadZonesEngineItem::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	CinematicAutoLoadZonesEngineItem::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<CinematicAutoLoadZonesEngineItem> {
		if (incoming_type_id == CinematicAutoLoadZonesEngineItem::type_id) {
			return std::make_shared<CinematicAutoLoadZonesEngineItem>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated