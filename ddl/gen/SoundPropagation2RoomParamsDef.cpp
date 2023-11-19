// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/SoundPropagation2OcclParamsDef.hpp>
#include <rivet/ddl/generated/SoundPropagation2DistModelDef.hpp> 

#include <rivet/ddl/generated/SoundPropagation2RoomParamsDef.hpp>

namespace rivet::ddl::generated {
	SoundPropagation2RoomParamsDef::SoundPropagation2RoomParamsDef([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		DesignerOutputBusLeveldB = serialized->get_float(DesignerOutputBusLeveldB_type_id);
		AuxSendScalar = serialized->get_float(AuxSendScalar_type_id);
		DistanceModel = serialized->unwrap_into<rivet::ddl::generated::SoundPropagation2DistModelDef>(DistanceModel_type_id);
		DirectPathOcclusion = serialized->unwrap_into<rivet::ddl::generated::SoundPropagation2OcclParamsDef>(DirectPathOcclusion_type_id);
		RoomPathOcclusion = serialized->unwrap_into<rivet::ddl::generated::SoundPropagation2OcclParamsDef>(RoomPathOcclusion_type_id); 
	}

	[[nodiscard]] auto
	SoundPropagation2RoomParamsDef::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	SoundPropagation2RoomParamsDef::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<SoundPropagation2RoomParamsDef> {
		if (incoming_type_id == SoundPropagation2RoomParamsDef::type_id) {
			return std::make_shared<SoundPropagation2RoomParamsDef>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated