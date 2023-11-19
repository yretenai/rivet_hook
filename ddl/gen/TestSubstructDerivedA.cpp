// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/TestSubstructDerivedA.hpp>

namespace rivet::ddl::generated {
	TestSubstructDerivedA::TestSubstructDerivedA([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		Name = serialized->get_string(Name_type_id);
		AInt = serialized->get_int32(AInt_type_id);
		ABool = serialized->get_bool(ABool_type_id); 
	}

	[[nodiscard]] auto
	TestSubstructDerivedA::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	TestSubstructDerivedA::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<TestSubstructDerivedA> {
		if (incoming_type_id == TestSubstructDerivedA::type_id) {
			return std::make_shared<TestSubstructDerivedA>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated