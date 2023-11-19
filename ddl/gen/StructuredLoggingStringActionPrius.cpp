// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/StructuredLoggingStringActionPrius.hpp>

namespace rivet::ddl::generated {
	StructuredLoggingStringActionPrius::StructuredLoggingStringActionPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): StructuredLoggingActionBase(serialized) {
		ActionType = serialized->get_enum<rivet::ddl::generated::x10228b34>(ActionType_type_id, rivet::ddl::generated::x10228b34_values); 
	}

	[[nodiscard]] auto
	StructuredLoggingStringActionPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	StructuredLoggingStringActionPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<StructuredLoggingStringActionPrius> {
		if (incoming_type_id == StructuredLoggingStringActionPrius::type_id) {
			return std::make_shared<StructuredLoggingStringActionPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated