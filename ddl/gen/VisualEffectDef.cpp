// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/VisualEffectOnCollisionNode.hpp>
#include <rivet/ddl/generated/VisualEffectPhysicsParamNode.hpp>
#include <rivet/ddl/generated/VisualEffectPostRenderNode.hpp>
#include <rivet/ddl/generated/VisualEffectLightAttrNode.hpp>
#include <rivet/ddl/generated/VisualEffectSpawnStyleNode.hpp>
#include <rivet/ddl/generated/VisualEffectPerfAttrOverrideNode.hpp>
#include <rivet/ddl/generated/DDLVector3.hpp>
#include <rivet/ddl/generated/VisualEffectMinMaxNode.hpp>
#include <rivet/ddl/generated/VisualEffectCommentNode.hpp>
#include <rivet/ddl/generated/VisualEffectLumAttrNode.hpp>
#include <rivet/ddl/generated/VaultMetaData.hpp>
#include <rivet/ddl/generated/VisualEffectRenderNode.hpp>
#include <rivet/ddl/generated/VisualEffectCamAttrNode.hpp>
#include <rivet/ddl/generated/VisualEffectSharedAssetNode.hpp>
#include <rivet/ddl/generated/LightingConditionBitSet.hpp>
#include <rivet/ddl/generated/VisualEffectEmitterNode.hpp>
#include <rivet/ddl/generated/VisualEffectTransformNode.hpp>
#include <rivet/ddl/generated/VisualEffectKeyFrameNode.hpp>
#include <rivet/ddl/generated/VisualEffectUpdateTimeScale.hpp>
#include <rivet/ddl/generated/VisualEffectFloatNode.hpp>
#include <rivet/ddl/generated/VisualEffectPerformanceAttr.hpp>
#include <rivet/ddl/generated/VisualEffectLumAttr.hpp>
#include <rivet/ddl/generated/VisualEffectRenderOrder.hpp>
#include <rivet/ddl/generated/VisualEffectPreSim.hpp>
#include <rivet/ddl/generated/VisualEffectGroupNode.hpp>
#include <rivet/ddl/generated/VisualEffectCamGlobalAttr.hpp>
#include <rivet/ddl/generated/VisualEffectMaterialNode.hpp>
#include <rivet/ddl/generated/VisualEffectLensFlareNode.hpp>
#include <rivet/ddl/generated/VisualEffectKeyFrameModifierNode.hpp> 

#include <rivet/ddl/generated/VisualEffectDef.hpp>

namespace rivet::ddl::generated {
	VisualEffectDef::VisualEffectDef([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		VaultMetaData = serialized->unwrap_into<rivet::ddl::generated::VaultMetaData>(VaultMetaData_type_id);
		IconPath = serialized->get_string(IconPath_type_id);
		PreviewModel = serialized->get_string(PreviewModel_type_id);
		ShowPreviewModel = serialized->get_bool(ShowPreviewModel_type_id);
		PreSimulation = serialized->unwrap_into<rivet::ddl::generated::VisualEffectPreSim>(PreSimulation_type_id);
		UpdateTimeScale = serialized->unwrap_into<rivet::ddl::generated::VisualEffectUpdateTimeScale>(UpdateTimeScale_type_id);
		PerfAttributes = serialized->unwrap_into<rivet::ddl::generated::VisualEffectPerformanceAttr>(PerfAttributes_type_id);
		LuminanceAttributes = serialized->unwrap_into<rivet::ddl::generated::VisualEffectLumAttr>(LuminanceAttributes_type_id);
		CameraAttributes = serialized->unwrap_into<rivet::ddl::generated::VisualEffectCamGlobalAttr>(CameraAttributes_type_id);
		SortDistanceBias = serialized->get_float(SortDistanceBias_type_id);
		LightingConditions = serialized->unwrap_into<rivet::ddl::generated::LightingConditionBitSet>(LightingConditions_type_id);
		RenderOrder = serialized->unwrap_into_many<rivet::ddl::generated::VisualEffectRenderOrder>(RenderOrder_type_id);
		PreviewNames = serialized->get_strings(PreviewNames_type_id);
		CullEditorOnlyNodes = serialized->get_bool(CullEditorOnlyNodes_type_id);
		OverrideLightingCondition = serialized->get_bool(OverrideLightingCondition_type_id);
		SharedAssets = serialized->unwrap_into_many<rivet::ddl::generated::VisualEffectSharedAssetNode>(SharedAssets_type_id);
		Materials = serialized->unwrap_into_many<rivet::ddl::generated::VisualEffectMaterialNode>(Materials_type_id);
		Groups = serialized->unwrap_into_many<rivet::ddl::generated::VisualEffectGroupNode>(Groups_type_id);
		KeyFrameModifiers = serialized->unwrap_into_many<rivet::ddl::generated::VisualEffectKeyFrameModifierNode>(KeyFrameModifiers_type_id);
		KeyFrames = serialized->unwrap_into_many<rivet::ddl::generated::VisualEffectKeyFrameNode>(KeyFrames_type_id);
		MinMaxs = serialized->unwrap_into_many<rivet::ddl::generated::VisualEffectMinMaxNode>(MinMaxs_type_id);
		Floats = serialized->unwrap_into_many<rivet::ddl::generated::VisualEffectFloatNode>(Floats_type_id);
		PerfAttrOverrides = serialized->unwrap_into_many<rivet::ddl::generated::VisualEffectPerfAttrOverrideNode>(PerfAttrOverrides_type_id);
		LightAttrs = serialized->unwrap_into_many<rivet::ddl::generated::VisualEffectLightAttrNode>(LightAttrs_type_id);
		LumAttrs = serialized->unwrap_into_many<rivet::ddl::generated::VisualEffectLumAttrNode>(LumAttrs_type_id);
		CamAttrs = serialized->unwrap_into_many<rivet::ddl::generated::VisualEffectCamAttrNode>(CamAttrs_type_id);
		LensFlares = serialized->unwrap_into_many<rivet::ddl::generated::VisualEffectLensFlareNode>(LensFlares_type_id);
		Transforms = serialized->unwrap_into_many<rivet::ddl::generated::VisualEffectTransformNode>(Transforms_type_id);
		Comments = serialized->unwrap_into_many<rivet::ddl::generated::VisualEffectCommentNode>(Comments_type_id);
		PostRenders = serialized->unwrap_into_many<rivet::ddl::generated::VisualEffectPostRenderNode>(PostRenders_type_id);
		Emitters = serialized->unwrap_into_many<rivet::ddl::generated::VisualEffectEmitterNode>(Emitters_type_id);
		Renders = serialized->unwrap_into_many<rivet::ddl::generated::VisualEffectRenderNode>(Renders_type_id);
		SpawnStyles = serialized->unwrap_into_many<rivet::ddl::generated::VisualEffectSpawnStyleNode>(SpawnStyles_type_id);
		PhysicsParams = serialized->unwrap_into_many<rivet::ddl::generated::VisualEffectPhysicsParamNode>(PhysicsParams_type_id);
		OnCollisions = serialized->unwrap_into_many<rivet::ddl::generated::VisualEffectOnCollisionNode>(OnCollisions_type_id);
		Tint = serialized->unwrap_into<rivet::ddl::generated::DDLVector3>(Tint_type_id);
		Hibernate = serialized->get_bool(Hibernate_type_id);
		Alpha = serialized->get_float(Alpha_type_id);
		WindMultiplier = serialized->get_float(WindMultiplier_type_id); 
	}

	[[nodiscard]] auto
	VisualEffectDef::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	VisualEffectDef::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<VisualEffectDef> {
		if (incoming_type_id == VisualEffectDef::type_id) {
			return std::make_shared<VisualEffectDef>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated