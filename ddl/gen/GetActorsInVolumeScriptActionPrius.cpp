// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/DDLVector3.hpp>
#include <rivet/ddl/generated/QueryVolumeShape.hpp> 

#include <rivet/ddl/generated/GetActorsInVolumeScriptActionPrius.hpp>

namespace rivet::ddl::generated {
	GetActorsInVolumeScriptActionPrius::GetActorsInVolumeScriptActionPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		ActionType = serialized->get_enum<rivet::ddl::generated::x10228b34>(ActionType_type_id, rivet::ddl::generated::x10228b34_values, rivet::ddl::generated::x10228b34::Actor);
		Shape = serialized->unwrap_into<rivet::ddl::generated::QueryVolumeShape>(Shape_type_id);
		DebugDrawShape = serialized->get_bool(DebugDrawShape_type_id, false);
		DebugShapeDuration = serialized->get_float(DebugShapeDuration_type_id, 1.000000f);
		DebugShapeColor = serialized->unwrap_into<rivet::ddl::generated::DDLVector3>(DebugShapeColor_type_id); 
	}

	[[nodiscard]] auto
	GetActorsInVolumeScriptActionPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	GetActorsInVolumeScriptActionPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<GetActorsInVolumeScriptActionPrius> {
		if (incoming_type_id == GetActorsInVolumeScriptActionPrius::type_id) {
			return std::make_shared<GetActorsInVolumeScriptActionPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
