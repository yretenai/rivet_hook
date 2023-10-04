// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/DDLVector3.hpp> 

#include <rivet/ddl/generated/ComponentEmitterLocalRandomOffsetPrius.hpp>

namespace rivet::ddl::generated {
	ComponentEmitterLocalRandomOffsetPrius::ComponentEmitterLocalRandomOffsetPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): ComponentEmitterBasePrius(serialized) {
		EmitFromUser = serialized->get_bool(EmitFromUser_type_id);
		UseWorldUp = serialized->get_bool(UseWorldUp_type_id);
		MinOffset = serialized->unwrap_into<rivet::ddl::generated::DDLVector3>(MinOffset_type_id);
		MaxOffset = serialized->unwrap_into<rivet::ddl::generated::DDLVector3>(MaxOffset_type_id); 
	}

	[[nodiscard]] auto
	ComponentEmitterLocalRandomOffsetPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	ComponentEmitterLocalRandomOffsetPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<ComponentEmitterLocalRandomOffsetPrius> {
		if (incoming_type_id == ComponentEmitterLocalRandomOffsetPrius::type_id) {
			return std::make_shared<ComponentEmitterLocalRandomOffsetPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
