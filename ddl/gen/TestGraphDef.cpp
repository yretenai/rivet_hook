// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/OutputNodeStringDef.hpp>
#include <rivet/ddl/generated/OutputNodeIntDef.hpp>
#include <rivet/ddl/generated/TestMakeStringNodeDef.hpp>
#include <rivet/ddl/generated/InputNodeStringDef.hpp>
#include <rivet/ddl/generated/TestTriggerNodeDef.hpp>
#include <rivet/ddl/generated/InputNodeIntDef.hpp>
#include <rivet/ddl/generated/TestNodeDef.hpp> 

#include <rivet/ddl/generated/TestGraphDef.hpp>

namespace rivet::ddl::generated {
	TestGraphDef::TestGraphDef([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): GameplayNodeGraphBaseDef(serialized) {
		TestNodes = serialized->unwrap_into_many<rivet::ddl::generated::TestNodeDef>(TestNodes_type_id);
		TriggerNodes = serialized->unwrap_into_many<rivet::ddl::generated::TestTriggerNodeDef>(TriggerNodes_type_id);
		MakeStringNodes = serialized->unwrap_into_many<rivet::ddl::generated::TestMakeStringNodeDef>(MakeStringNodes_type_id);
		InputIntNodes = serialized->unwrap_into_many<rivet::ddl::generated::InputNodeIntDef>(InputIntNodes_type_id);
		InputStringNodes = serialized->unwrap_into_many<rivet::ddl::generated::InputNodeStringDef>(InputStringNodes_type_id);
		OutputIntNodes = serialized->unwrap_into_many<rivet::ddl::generated::OutputNodeIntDef>(OutputIntNodes_type_id);
		OutputStringNodes = serialized->unwrap_into_many<rivet::ddl::generated::OutputNodeStringDef>(OutputStringNodes_type_id); 
	}

	[[nodiscard]] auto
	TestGraphDef::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	TestGraphDef::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<TestGraphDef> {
		if (incoming_type_id == TestGraphDef::type_id) {
			return std::make_shared<TestGraphDef>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated