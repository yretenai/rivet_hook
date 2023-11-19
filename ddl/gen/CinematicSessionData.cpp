// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/CinematicSessionData.hpp>

namespace rivet::ddl::generated {
	CinematicSessionData::CinematicSessionData([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		FreeCam = serialized->get_bool(FreeCam_type_id);
		CameraFilterIndex = serialized->get_int32(CameraFilterIndex_type_id);
		CameraMaxFilters = serialized->get_int32(CameraMaxFilters_type_id);
		DebugFlags = serialized->get_bitset<rivet::ddl::generated::xac616886>(DebugFlags_type_id, rivet::ddl::generated::xac616886_values); 
	}

	[[nodiscard]] auto
	CinematicSessionData::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	CinematicSessionData::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<CinematicSessionData> {
		if (incoming_type_id == CinematicSessionData::type_id) {
			return std::make_shared<CinematicSessionData>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated