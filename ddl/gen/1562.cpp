// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/DamageIntelConfig.hpp>

namespace rivet::ddl::generated {
	DamageIntelConfig::DamageIntelConfig([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): ConfigBase(serialized) {
		DigitActor = serialized->get_string(DigitActor_type_id);
		Spacing = serialized->get_float(Spacing_type_id);
		MinDist = serialized->get_float(MinDist_type_id);
		StartScale = serialized->get_float(StartScale_type_id);
		EndScale = serialized->get_float(EndScale_type_id);
		PathEndSide = serialized->get_float(PathEndSide_type_id);
		PathEndForward = serialized->get_float(PathEndForward_type_id);
		PathEndUp = serialized->get_float(PathEndUp_type_id);
		PathSpeed = serialized->get_float(PathSpeed_type_id);
		ScaleDistance = serialized->get_float(ScaleDistance_type_id);
		ScaleExponent = serialized->get_float(ScaleExponent_type_id);
		GroupingDist = serialized->get_float(GroupingDist_type_id);
		GroupingTime = serialized->get_float(GroupingTime_type_id);
		NormalScale = serialized->get_float(NormalScale_type_id);
		WeakspotScale = serialized->get_float(WeakspotScale_type_id);
		SpawnOffsetY = serialized->get_float(SpawnOffsetY_type_id); 
	}

	auto
	DamageIntelConfig::get_type_id() const noexcept -> rivet::rivet_type_id {
		return type_id;
	}

	[[nodiscard]] auto
	DamageIntelConfig::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	DamageIntelConfig::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<DamageIntelConfig> {
		if (incoming_type_id == DamageIntelConfig::type_id) {
			return std::make_shared<DamageIntelConfig>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated