// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/Faction.hpp>

namespace rivet::ddl::generated {
	Faction::Faction([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		Name = serialized->get_string(Name_type_id);
		Spawnable = serialized->get_strings(Spawnable_type_id); 
	}

	[[nodiscard]] auto
	Faction::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	Faction::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<Faction> {
		if (incoming_type_id == Faction::type_id) {
			return std::make_shared<Faction>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
