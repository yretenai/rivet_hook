// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/AnimDriverBlendElemDef.hpp>

namespace rivet::ddl::generated {
	AnimDriverBlendElemDef::AnimDriverBlendElemDef([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		RefNodeName = serialized->get_string(RefNodeName_type_id);
		OutputIndex = serialized->get_uint32(OutputIndex_type_id);
		SmoothType = serialized->get_enum<rivet::ddl::generated::xfd5aa1cb>(SmoothType_type_id, rivet::ddl::generated::xfd5aa1cb_values);
		Start = serialized->get_float(Start_type_id);
		End = serialized->get_float(End_type_id); 
	}

	[[nodiscard]] auto
	AnimDriverBlendElemDef::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	AnimDriverBlendElemDef::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<AnimDriverBlendElemDef> {
		if (incoming_type_id == AnimDriverBlendElemDef::type_id) {
			return std::make_shared<AnimDriverBlendElemDef>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated