// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/PointOfImpactActorData.hpp>

namespace rivet::ddl::generated {
	PointOfImpactActorData::PointOfImpactActorData([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		PointOfImpactActor = serialized->get_string(PointOfImpactActor_type_id, {});
		ScalePointOfImpactActor = serialized->get_bool(ScalePointOfImpactActor_type_id, true);
		PointOfImpactSize = serialized->get_float(PointOfImpactSize_type_id, 0.050000f);
		ImpactActorSkipDepth = serialized->get_bool(ImpactActorSkipDepth_type_id, true);
		ApplyMaterialToImpactActor = serialized->get_bool(ApplyMaterialToImpactActor_type_id, false);
		ActorOrientation = serialized->get_enum<rivet::ddl::generated::ActorOrientation>(ActorOrientation_type_id, rivet::ddl::generated::ActorOrientation_values, rivet::ddl::generated::ActorOrientation::CameraToHitIsZAxis);
		TargetTypes = serialized->get_bitset<rivet::ddl::generated::TargetType>(TargetTypes_type_id, rivet::ddl::generated::TargetType_values, 0u); 
	}

	[[nodiscard]] auto
	PointOfImpactActorData::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	PointOfImpactActorData::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<PointOfImpactActorData> {
		if (incoming_type_id == PointOfImpactActorData::type_id) {
			return std::make_shared<PointOfImpactActorData>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
