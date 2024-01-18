// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/StructuredLogStatementNumber.hpp>

namespace rivet::ddl::generated {
	StructuredLogStatementNumber::StructuredLogStatementNumber([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): StructuredLogStatement(serialized) {
		Number = serialized->get_float(Number_type_id, 0.000000f); 
	}

	[[nodiscard]] auto
	StructuredLogStatementNumber::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	StructuredLogStatementNumber::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<StructuredLogStatementNumber> {
		if (incoming_type_id == StructuredLogStatementNumber::type_id) {
			return std::make_shared<StructuredLogStatementNumber>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
