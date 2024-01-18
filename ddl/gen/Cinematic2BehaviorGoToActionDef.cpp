// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/DDLVector3.hpp> 

#include <rivet/ddl/generated/Cinematic2BehaviorGoToActionDef.hpp>

namespace rivet::ddl::generated {
	Cinematic2BehaviorGoToActionDef::Cinematic2BehaviorGoToActionDef([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		Id = serialized->get_uint64(Id_type_id, 0ull);
		Time = serialized->get_float(Time_type_id, 0.000000f);
		DurationType = serialized->get_enum<rivet::ddl::generated::x29c933e2>(DurationType_type_id, rivet::ddl::generated::x29c933e2_values, rivet::ddl::generated::x29c933e2::None);
		Duration = serialized->get_float(Duration_type_id, 0.000000f);
		BlendInDuration = serialized->get_float(BlendInDuration_type_id, 0.000000f);
		StartPosition = serialized->unwrap_into<rivet::ddl::generated::DDLVector3>(StartPosition_type_id);
		StartEulerRotation = serialized->unwrap_into<rivet::ddl::generated::DDLVector3>(StartEulerRotation_type_id);
		EndPosition = serialized->unwrap_into<rivet::ddl::generated::DDLVector3>(EndPosition_type_id);
		EndEulerRotation = serialized->unwrap_into<rivet::ddl::generated::DDLVector3>(EndEulerRotation_type_id); 
	}

	[[nodiscard]] auto
	Cinematic2BehaviorGoToActionDef::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	Cinematic2BehaviorGoToActionDef::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<Cinematic2BehaviorGoToActionDef> {
		if (incoming_type_id == Cinematic2BehaviorGoToActionDef::type_id) {
			return std::make_shared<Cinematic2BehaviorGoToActionDef>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
