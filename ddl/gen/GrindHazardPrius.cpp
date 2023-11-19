// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/GrindHazardPrius.hpp>

namespace rivet::ddl::generated {
	GrindHazardPrius::GrindHazardPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		CurveActor = serialized->get_uint64(CurveActor_type_id);
		StartTValue = serialized->get_float(StartTValue_type_id);
		EndTValue = serialized->get_float(EndTValue_type_id);
		DamageType = serialized->get_enum<rivet::ddl::generated::DamageTypes>(DamageType_type_id, rivet::ddl::generated::DamageTypes_values);
		DamagePercent = serialized->get_float(DamagePercent_type_id);
		DamageRadius = serialized->get_float(DamageRadius_type_id);
		IgnoreDuration = serialized->get_float(IgnoreDuration_type_id);
		KnockbackLevel = serialized->get_enum<rivet::ddl::generated::KnockbackLevels>(KnockbackLevel_type_id, rivet::ddl::generated::KnockbackLevels_values);
		KnockbackAmount = serialized->get_float(KnockbackAmount_type_id);
		HazardActor = serialized->get_string(HazardActor_type_id);
		HazardSpacing = serialized->get_float(HazardSpacing_type_id);
		HazardStretchPercent = serialized->get_float(HazardStretchPercent_type_id); 
	}

	[[nodiscard]] auto
	GrindHazardPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	GrindHazardPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<GrindHazardPrius> {
		if (incoming_type_id == GrindHazardPrius::type_id) {
			return std::make_shared<GrindHazardPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated