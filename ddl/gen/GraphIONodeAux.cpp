// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/GraphIONodeAux.hpp>

namespace rivet::ddl::generated {
	GraphIONodeAux::GraphIONodeAux([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		Type = serialized->get_string(Type_type_id);
		SubType = serialized->get_string(SubType_type_id);
		Dir = serialized->get_enum<rivet::ddl::generated::x6e9cd50>(Dir_type_id, rivet::ddl::generated::x6e9cd50_values);
		Name = serialized->get_string(Name_type_id);
		Tooltip = serialized->get_string(Tooltip_type_id); 
	}

	[[nodiscard]] auto
	GraphIONodeAux::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	GraphIONodeAux::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<GraphIONodeAux> {
		if (incoming_type_id == GraphIONodeAux::type_id) {
			return std::make_shared<GraphIONodeAux>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated