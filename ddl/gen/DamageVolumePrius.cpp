// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/DamageVolumeCylinderPrius.hpp>
#include <rivet/ddl/generated/AmoeboidDamageTrailPrius.hpp>
#include <rivet/ddl/generated/DamageVolumeAttachedPrius.hpp> 

#include <rivet/ddl/generated/DamageVolumePrius.hpp>

namespace rivet::ddl::generated {
	DamageVolumePrius::DamageVolumePrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		StartActive = serialized->get_bool(StartActive_type_id, true);
		StartComponentEnabled = serialized->get_bool(StartComponentEnabled_type_id, true);
		DamagePerSecond = serialized->get_float(DamagePerSecond_type_id, 1.000000f);
		DamageInterval = serialized->get_float(DamageInterval_type_id, 0.500000f);
		IgnoreDuration = serialized->get_float(IgnoreDuration_type_id, 0.000000f);
		Type = serialized->get_enum<rivet::ddl::generated::DamageTypes>(Type_type_id, rivet::ddl::generated::DamageTypes_values, rivet::ddl::generated::DamageTypes::None);
		StatusAmount = serialized->get_float(StatusAmount_type_id, 0.000000f);
		StatusLastsForever = serialized->get_bool(StatusLastsForever_type_id, false);
		Knockback = serialized->get_enum<rivet::ddl::generated::KnockbackLevels>(Knockback_type_id, rivet::ddl::generated::KnockbackLevels_values, rivet::ddl::generated::KnockbackLevels::None);
		KnockbackAmount = serialized->get_float(KnockbackAmount_type_id, 0.000000f);
		DamageFlags = serialized->get_bitset<rivet::ddl::generated::x65d7dac2>(DamageFlags_type_id, rivet::ddl::generated::x65d7dac2_values, 0u);
		SourceAllegiance = serialized->get_enum<rivet::ddl::generated::x6bdf4ba1>(SourceAllegiance_type_id, rivet::ddl::generated::x6bdf4ba1_values, rivet::ddl::generated::x6bdf4ba1::Neutral);
		Relationship = serialized->get_enum<rivet::ddl::generated::AllegianceRelation>(Relationship_type_id, rivet::ddl::generated::AllegianceRelation_values, rivet::ddl::generated::AllegianceRelation::Any);
		TargetTypes = serialized->get_bitset<rivet::ddl::generated::TargetType>(TargetTypes_type_id, rivet::ddl::generated::TargetType_values, 0u);
		DamageHeroes = serialized->get_bool(DamageHeroes_type_id, true);
		DamageBots = serialized->get_bool(DamageBots_type_id, false);
		Radius = serialized->get_float(Radius_type_id, 1.000000f);
		AlwaysUseRadius = serialized->get_bool(AlwaysUseRadius_type_id, false);
		TargetableOnly = serialized->get_bool(TargetableOnly_type_id, true);
		TestBSpheresOnly = serialized->get_bool(TestBSpheresOnly_type_id, false);
		NoSpawnRewards = serialized->get_bool(NoSpawnRewards_type_id, true);
		RadialHitDir = serialized->get_bool(RadialHitDir_type_id, true);
		DamageString = serialized->get_string(DamageString_type_id, ""); 
	}

	[[nodiscard]] auto
	DamageVolumePrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	DamageVolumePrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<DamageVolumePrius> {
		if (incoming_type_id == DamageVolumePrius::type_id) {
			return std::make_shared<DamageVolumePrius>(serialized);
		}

		auto DamageVolumeAttachedPrius_ptr = DamageVolumeAttachedPrius::from_substruct(incoming_type_id, serialized);
		if (DamageVolumeAttachedPrius_ptr != nullptr) {
			return DamageVolumeAttachedPrius_ptr;
		}

		auto AmoeboidDamageTrailPrius_ptr = AmoeboidDamageTrailPrius::from_substruct(incoming_type_id, serialized);
		if (AmoeboidDamageTrailPrius_ptr != nullptr) {
			return AmoeboidDamageTrailPrius_ptr;
		}

		auto DamageVolumeCylinderPrius_ptr = DamageVolumeCylinderPrius::from_substruct(incoming_type_id, serialized);
		if (DamageVolumeCylinderPrius_ptr != nullptr) {
			return DamageVolumeCylinderPrius_ptr;
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
