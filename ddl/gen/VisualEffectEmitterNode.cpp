// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/VisualEffectPerfAttrOverride.hpp>
#include <rivet/ddl/generated/VisualEffectParticleMotion.hpp>
#include <rivet/ddl/generated/SeparateSpaces.hpp>
#include <rivet/ddl/generated/VisualEffectNodeConnectedOutputPort.hpp>
#include <rivet/ddl/generated/VisualEffectParticleRender.hpp>
#include <rivet/ddl/generated/VisualEffectEmission.hpp>
#include <rivet/ddl/generated/VisualEffectNodeConnectedInputPort.hpp> 

#include <rivet/ddl/generated/VisualEffectEmitterNode.hpp>

namespace rivet::ddl::generated {
	VisualEffectEmitterNode::VisualEffectEmitterNode([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		NodeId = serialized->get_uint64(NodeId_type_id, 0ull);
		XPos = serialized->get_int32(XPos_type_id, 0u);
		YPos = serialized->get_int32(YPos_type_id, 0u);
		DisplayName = serialized->get_string(DisplayName_type_id, {});
		ConnectedInputs = serialized->unwrap_into_many<rivet::ddl::generated::VisualEffectNodeConnectedInputPort>(ConnectedInputs_type_id);
		ConnectedOutputs = serialized->unwrap_into_many<rivet::ddl::generated::VisualEffectNodeConnectedOutputPort>(ConnectedOutputs_type_id);
		Collapsed = serialized->get_bool(Collapsed_type_id, true);
		ActivationChance = serialized->get_float(ActivationChance_type_id, 1.000000f);
		RandomizeInstance = serialized->get_bool(RandomizeInstance_type_id, true);
		DrawSpawnStyle = serialized->get_bool(DrawSpawnStyle_type_id, false);
		DynamicScaling = serialized->get_bool(DynamicScaling_type_id, false);
		ParticleSpace = serialized->get_enum<rivet::ddl::generated::x8db2fd48>(ParticleSpace_type_id, rivet::ddl::generated::x8db2fd48_values, rivet::ddl::generated::x8db2fd48::World);
		EmitterType = serialized->get_enum<rivet::ddl::generated::EmitterType>(EmitterType_type_id, rivet::ddl::generated::EmitterType_values, rivet::ddl::generated::EmitterType::CPU);
		MaxActiveParticles = serialized->get_uint32(MaxActiveParticles_type_id, 8192u);
		MaxParticles = serialized->get_uint32(MaxParticles_type_id, 0u);
		InheritScreenColor = serialized->get_bool(InheritScreenColor_type_id, false);
		OnDeathSpawnCount = serialized->get_uint32(OnDeathSpawnCount_type_id, 0u);
		EmitterSpaces = serialized->unwrap_into<rivet::ddl::generated::SeparateSpaces>(EmitterSpaces_type_id);
		Emission = serialized->unwrap_into<rivet::ddl::generated::VisualEffectEmission>(Emission_type_id);
		ParticleRender = serialized->unwrap_into<rivet::ddl::generated::VisualEffectParticleRender>(ParticleRender_type_id);
		ParticleMotion = serialized->unwrap_into<rivet::ddl::generated::VisualEffectParticleMotion>(ParticleMotion_type_id);
		InputPort_PerfAttrOverrides = serialized->unwrap_into<rivet::ddl::generated::VisualEffectPerfAttrOverride>(InputPort_PerfAttrOverrides_type_id); 
	}

	[[nodiscard]] auto
	VisualEffectEmitterNode::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	VisualEffectEmitterNode::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<VisualEffectEmitterNode> {
		if (incoming_type_id == VisualEffectEmitterNode::type_id) {
			return std::make_shared<VisualEffectEmitterNode>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
