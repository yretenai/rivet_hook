// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/WwiseSoundEvent.hpp>
#include <rivet/ddl/generated/WWiseEvent.hpp>
#include <rivet/ddl/generated/VisualEffectSpawnMesh.hpp> 

#include <rivet/ddl/generated/UI_ECMInputNodeDef.hpp>

namespace rivet::ddl::generated {
	UI_ECMInputNodeDef::UI_ECMInputNodeDef([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		Type = serialized->get_enum<rivet::ddl::generated::xf5eea2a0>(Type_type_id, rivet::ddl::generated::xf5eea2a0_values);
		Value = serialized->get_string(Value_type_id);
		LocTag = serialized->get_string(LocTag_type_id);
		PhysicsMaterial = serialized->get_string(PhysicsMaterial_type_id);
		PhysicsMaterials = serialized->get_strings(PhysicsMaterials_type_id);
		ActorFilterTypes = serialized->get_bitset<rivet::ddl::generated::ActorFilterTypes>(ActorFilterTypes_type_id, rivet::ddl::generated::ActorFilterTypes_values);
		VisualEffect = serialized->get_string(VisualEffect_type_id);
		VisualEffectSpawnMesh = serialized->unwrap_into<rivet::ddl::generated::VisualEffectSpawnMesh>(VisualEffectSpawnMesh_type_id);
		MaterialAsset = serialized->get_string(MaterialAsset_type_id);
		WwiseVariant = serialized->unwrap_into<rivet::ddl::generated::WWiseEvent>(WwiseVariant_type_id);
		WwiseEvent = serialized->unwrap_into<rivet::ddl::generated::WwiseSoundEvent>(WwiseEvent_type_id);
		ShadowState = serialized->get_string(ShadowState_type_id); 
	}

	[[nodiscard]] auto
	UI_ECMInputNodeDef::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	UI_ECMInputNodeDef::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<UI_ECMInputNodeDef> {
		if (incoming_type_id == UI_ECMInputNodeDef::type_id) {
			return std::make_shared<UI_ECMInputNodeDef>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated