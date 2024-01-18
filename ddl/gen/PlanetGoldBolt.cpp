// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/ActivityHint.hpp> 

#include <rivet/ddl/generated/PlanetGoldBolt.hpp>

namespace rivet::ddl::generated {
	PlanetGoldBolt::PlanetGoldBolt([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		SaveId = serialized->get_enum<rivet::ddl::generated::x7038301>(SaveId_type_id, rivet::ddl::generated::x7038301_values, rivet::ddl::generated::x7038301::Nefarious_City_1);
		HACK_UseOverrideTaskId = serialized->get_bool(HACK_UseOverrideTaskId_type_id, false);
		HACK_OverrideTaskId = serialized->get_enum<rivet::ddl::generated::x7038301>(HACK_OverrideTaskId_type_id, rivet::ddl::generated::x7038301_values, rivet::ddl::generated::x7038301::Nefarious_City_1);
		NameTag = serialized->get_string(NameTag_type_id, {});
		DefaultPlaytimeEstimate = serialized->get_uint32(DefaultPlaytimeEstimate_type_id, 5u);
		Hints = serialized->unwrap_into_many<rivet::ddl::generated::ActivityHint>(Hints_type_id); 
	}

	[[nodiscard]] auto
	PlanetGoldBolt::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	PlanetGoldBolt::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<PlanetGoldBolt> {
		if (incoming_type_id == PlanetGoldBolt::type_id) {
			return std::make_shared<PlanetGoldBolt>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
