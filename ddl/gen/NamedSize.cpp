// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/NamedSize.hpp>

namespace rivet::ddl::generated {
	NamedSize::NamedSize([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		Name = serialized->get_string(Name_type_id, {});
		Size = serialized->get_uint32(Size_type_id, 0u); 
	}

	[[nodiscard]] auto
	NamedSize::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	NamedSize::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<NamedSize> {
		if (incoming_type_id == NamedSize::type_id) {
			return std::make_shared<NamedSize>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
