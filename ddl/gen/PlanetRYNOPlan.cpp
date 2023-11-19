// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/ActivityHint.hpp> 

#include <rivet/ddl/generated/PlanetRYNOPlan.hpp>

namespace rivet::ddl::generated {
	PlanetRYNOPlan::PlanetRYNOPlan([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		SaveId = serialized->get_enum<rivet::ddl::generated::x81d3e717>(SaveId_type_id, rivet::ddl::generated::x81d3e717_values);
		NameTag = serialized->get_string(NameTag_type_id);
		DefaultPlaytimeEstimate = serialized->get_uint32(DefaultPlaytimeEstimate_type_id);
		Hints = serialized->unwrap_into_many<rivet::ddl::generated::ActivityHint>(Hints_type_id); 
	}

	[[nodiscard]] auto
	PlanetRYNOPlan::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	PlanetRYNOPlan::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<PlanetRYNOPlan> {
		if (incoming_type_id == PlanetRYNOPlan::type_id) {
			return std::make_shared<PlanetRYNOPlan>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated