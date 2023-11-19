// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/OutputPlugFloat.hpp>
#include <rivet/ddl/generated/InputPlugFloat.hpp> 

#include <rivet/ddl/generated/SubtractFloatsNodeDef.hpp>

namespace rivet::ddl::generated {
	SubtractFloatsNodeDef::SubtractFloatsNodeDef([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): MathNodeBaseDef(serialized) {
		Float = serialized->unwrap_into_many<rivet::ddl::generated::InputPlugFloat>(Float_type_id);
		Difference = serialized->unwrap_into<rivet::ddl::generated::OutputPlugFloat>(Difference_type_id); 
	}

	[[nodiscard]] auto
	SubtractFloatsNodeDef::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	SubtractFloatsNodeDef::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<SubtractFloatsNodeDef> {
		if (incoming_type_id == SubtractFloatsNodeDef::type_id) {
			return std::make_shared<SubtractFloatsNodeDef>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated