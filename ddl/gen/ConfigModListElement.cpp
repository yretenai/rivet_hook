// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/ConfigModListElement.hpp>

namespace rivet::ddl::generated {
	ConfigModListElement::ConfigModListElement([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		ModType = serialized->get_enum<rivet::ddl::generated::x756cf95f>(ModType_type_id, rivet::ddl::generated::x756cf95f_values);
		Op = serialized->get_enum<rivet::ddl::generated::x2d67b08a>(Op_type_id, rivet::ddl::generated::x2d67b08a_values);
		Value = serialized->get_float(Value_type_id);
		ClassId = serialized->get_int32(ClassId_type_id); 
	}

	[[nodiscard]] auto
	ConfigModListElement::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	ConfigModListElement::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<ConfigModListElement> {
		if (incoming_type_id == ConfigModListElement::type_id) {
			return std::make_shared<ConfigModListElement>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated