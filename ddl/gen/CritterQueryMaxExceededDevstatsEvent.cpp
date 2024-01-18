// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/DDLVector3.hpp> 

#include <rivet/ddl/generated/CritterQueryMaxExceededDevstatsEvent.hpp>

namespace rivet::ddl::generated {
	CritterQueryMaxExceededDevstatsEvent::CritterQueryMaxExceededDevstatsEvent([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): EventBase(serialized) {
		EventId = serialized->get_string(EventId_type_id, {});
		Level = serialized->get_string(Level_type_id, {});
		CritterType = serialized->get_string(CritterType_type_id, {});
		CameraPosition = serialized->unwrap_into<rivet::ddl::generated::DDLVector3>(CameraPosition_type_id);
		MaxActiveDistance = serialized->get_float(MaxActiveDistance_type_id, 0.000000f); 
	}

	[[nodiscard]] auto
	CritterQueryMaxExceededDevstatsEvent::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	CritterQueryMaxExceededDevstatsEvent::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<CritterQueryMaxExceededDevstatsEvent> {
		if (incoming_type_id == CritterQueryMaxExceededDevstatsEvent::type_id) {
			return std::make_shared<CritterQueryMaxExceededDevstatsEvent>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
