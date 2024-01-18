// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/ReflectionProperty.hpp>

namespace rivet::ddl::generated {
	ReflectionProperty::ReflectionProperty([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		Material = serialized->get_enum<rivet::ddl::generated::x10b3c4cf>(Material_type_id, rivet::ddl::generated::x10b3c4cf_values, rivet::ddl::generated::x10b3c4cf::None);
		ReflectionCoefficient = serialized->get_float(ReflectionCoefficient_type_id, 0.000000f); 
	}

	[[nodiscard]] auto
	ReflectionProperty::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	ReflectionProperty::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<ReflectionProperty> {
		if (incoming_type_id == ReflectionProperty::type_id) {
			return std::make_shared<ReflectionProperty>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
