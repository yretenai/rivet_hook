// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/PlanetMap.hpp>
#include <rivet/ddl/generated/PlanetLightingCondition.hpp>
#include <rivet/ddl/generated/PlanetActivityData.hpp>
#include <rivet/ddl/generated/PlanetMenuData.hpp> 

#include <rivet/ddl/generated/PlanetRegionData.hpp>

namespace rivet::ddl::generated {
	PlanetRegionData::PlanetRegionData([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		PlanetName = serialized->get_string(PlanetName_type_id);
		IsMainRegion = serialized->get_bool(IsMainRegion_type_id);
		LevelEnum = serialized->get_enum<rivet::ddl::generated::LevelEnum>(LevelEnum_type_id, rivet::ddl::generated::LevelEnum_values);
		InterplanetaryCheckpoint = serialized->get_string(InterplanetaryCheckpoint_type_id);
		Checkpoint = serialized->get_string(Checkpoint_type_id);
		HeroTypes = serialized->get_enum<rivet::ddl::generated::HeroTypes>(HeroTypes_type_id, rivet::ddl::generated::HeroTypes_values);
		MenuData = serialized->unwrap_into<rivet::ddl::generated::PlanetMenuData>(MenuData_type_id);
		ActivityData = serialized->unwrap_into<rivet::ddl::generated::PlanetActivityData>(ActivityData_type_id);
		DefaultMap = serialized->get_enum<rivet::ddl::generated::xd64fa9b1>(DefaultMap_type_id, rivet::ddl::generated::xd64fa9b1_values);
		Maps = serialized->unwrap_into_many<rivet::ddl::generated::PlanetMap>(Maps_type_id);
		DefaultLightingMode = serialized->get_enum<rivet::ddl::generated::LightingMode>(DefaultLightingMode_type_id, rivet::ddl::generated::LightingMode_values);
		ConditionalLightingModes = serialized->unwrap_into_many<rivet::ddl::generated::PlanetLightingCondition>(ConditionalLightingModes_type_id); 
	}

	[[nodiscard]] auto
	PlanetRegionData::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	PlanetRegionData::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<PlanetRegionData> {
		if (incoming_type_id == PlanetRegionData::type_id) {
			return std::make_shared<PlanetRegionData>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated