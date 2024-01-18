// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/Cinematic2CameraDofFollowActionDef.hpp>

namespace rivet::ddl::generated {
	Cinematic2CameraDofFollowActionDef::Cinematic2CameraDofFollowActionDef([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		Id = serialized->get_uint64(Id_type_id, 0ull);
		Time = serialized->get_float(Time_type_id, 0.000000f);
		DurationType = serialized->get_enum<rivet::ddl::generated::x29c933e2>(DurationType_type_id, rivet::ddl::generated::x29c933e2_values, rivet::ddl::generated::x29c933e2::None);
		Duration = serialized->get_float(Duration_type_id, 0.000000f);
		TargetActorId = serialized->get_uint64(TargetActorId_type_id, 0ull);
		TargetLocatorName = serialized->get_string(TargetLocatorName_type_id, "igLoc_head");
		FocusWindowMode = serialized->get_enum<rivet::ddl::generated::xe542f097>(FocusWindowMode_type_id, rivet::ddl::generated::xe542f097_values, rivet::ddl::generated::xe542f097::BSphere);
		FocusWindowFixedSize = serialized->get_float(FocusWindowFixedSize_type_id, 0.000000f); 
	}

	[[nodiscard]] auto
	Cinematic2CameraDofFollowActionDef::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	Cinematic2CameraDofFollowActionDef::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<Cinematic2CameraDofFollowActionDef> {
		if (incoming_type_id == Cinematic2CameraDofFollowActionDef::type_id) {
			return std::make_shared<Cinematic2CameraDofFollowActionDef>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
