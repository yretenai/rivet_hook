// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/OutputPlugBoolean.hpp>
#include <rivet/ddl/generated/OutputPlugSignal.hpp>
#include <rivet/ddl/generated/InputPlugSignal.hpp> 

#include <rivet/ddl/generated/RandomBoolGeneratorNodeDef.hpp>

namespace rivet::ddl::generated {
	RandomBoolGeneratorNodeDef::RandomBoolGeneratorNodeDef([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): LogicNodeBaseDef(serialized) {
		GenerateNext = serialized->unwrap_into<rivet::ddl::generated::InputPlugSignal>(GenerateNext_type_id);
		OnGenerateNext = serialized->unwrap_into<rivet::ddl::generated::OutputPlugSignal>(OnGenerateNext_type_id);
		Next = serialized->unwrap_into<rivet::ddl::generated::OutputPlugBoolean>(Next_type_id); 
	}

	[[nodiscard]] auto
	RandomBoolGeneratorNodeDef::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	RandomBoolGeneratorNodeDef::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<RandomBoolGeneratorNodeDef> {
		if (incoming_type_id == RandomBoolGeneratorNodeDef::type_id) {
			return std::make_shared<RandomBoolGeneratorNodeDef>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated