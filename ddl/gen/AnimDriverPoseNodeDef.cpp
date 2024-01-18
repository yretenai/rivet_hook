// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/AnimDriverPoseNodeDef.hpp>

namespace rivet::ddl::generated {
	AnimDriverPoseNodeDef::AnimDriverPoseNodeDef([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		Name = serialized->get_string(Name_type_id, {});
		DisplayName = serialized->get_string(DisplayName_type_id, "");
		x = serialized->get_float(x_type_id, 0.000000f);
		y = serialized->get_float(y_type_id, 0.000000f);
		ClipName = serialized->get_string(ClipName_type_id, {});
		PoseFrameIds = serialized->get_int32s(PoseFrameIds_type_id);
		IsAdditive = serialized->get_bool(IsAdditive_type_id, false); 
	}

	[[nodiscard]] auto
	AnimDriverPoseNodeDef::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	AnimDriverPoseNodeDef::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<AnimDriverPoseNodeDef> {
		if (incoming_type_id == AnimDriverPoseNodeDef::type_id) {
			return std::make_shared<AnimDriverPoseNodeDef>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
