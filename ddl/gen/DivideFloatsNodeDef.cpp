// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/OutputPlugFloat.hpp>
#include <rivet/ddl/generated/InputPlugFloat.hpp> 

#include <rivet/ddl/generated/DivideFloatsNodeDef.hpp>

namespace rivet::ddl::generated {
	DivideFloatsNodeDef::DivideFloatsNodeDef([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): MathNodeBaseDef(serialized) {
		Numerator = serialized->unwrap_into<rivet::ddl::generated::InputPlugFloat>(Numerator_type_id);
		Denominator = serialized->unwrap_into<rivet::ddl::generated::InputPlugFloat>(Denominator_type_id);
		Quotient = serialized->unwrap_into<rivet::ddl::generated::OutputPlugFloat>(Quotient_type_id); 
	}

	[[nodiscard]] auto
	DivideFloatsNodeDef::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	DivideFloatsNodeDef::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<DivideFloatsNodeDef> {
		if (incoming_type_id == DivideFloatsNodeDef::type_id) {
			return std::make_shared<DivideFloatsNodeDef>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated