// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/DDLVector3.hpp> 

#include <rivet/ddl/generated/PortalPassiveShiftPrius.hpp>

namespace rivet::ddl::generated {
	PortalPassiveShiftPrius::PortalPassiveShiftPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): PortalPrius(serialized) {
		GrindOffset = serialized->unwrap_into<rivet::ddl::generated::DDLVector3>(GrindOffset_type_id);
		GravityWellRange = serialized->get_float(GravityWellRange_type_id, 10.000000f);
		GravityWellTargetingAngle = serialized->get_float(GravityWellTargetingAngle_type_id, 180.000000f); 
	}

	[[nodiscard]] auto
	PortalPassiveShiftPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	PortalPassiveShiftPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<PortalPassiveShiftPrius> {
		if (incoming_type_id == PortalPassiveShiftPrius::type_id) {
			return std::make_shared<PortalPassiveShiftPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
