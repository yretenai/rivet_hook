// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/OutputPlugString.hpp>
#include <rivet/ddl/generated/InputPlugString.hpp> 

#include <rivet/ddl/generated/InputNodeStringDef.hpp>

namespace rivet::ddl::generated {
	InputNodeStringDef::InputNodeStringDef([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): InputNodeBaseDef(serialized) {
		Input = serialized->unwrap_into<rivet::ddl::generated::InputPlugString>(Input_type_id);
		Output = serialized->unwrap_into<rivet::ddl::generated::OutputPlugString>(Output_type_id); 
	}

	[[nodiscard]] auto
	InputNodeStringDef::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	InputNodeStringDef::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<InputNodeStringDef> {
		if (incoming_type_id == InputNodeStringDef::type_id) {
			return std::make_shared<InputNodeStringDef>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated