// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/ShrubbingPref.hpp>
#include <rivet/ddl/generated/VertexPaintingPref.hpp>
#include <rivet/ddl/generated/RandomizationSettings.hpp>
#include <rivet/ddl/generated/ModelDisplayOptions.hpp>
#include <rivet/ddl/generated/EditorRenderSettings2.hpp>
#include <rivet/ddl/generated/EventFilterOptions.hpp>
#include <rivet/ddl/generated/EditorRenderSettings.hpp> 

#include <rivet/ddl/generated/SceneEditorPrefs.hpp>

namespace rivet::ddl::generated {
	SceneEditorPrefs::SceneEditorPrefs([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		SpriteSize = serialized->get_float(SpriteSize_type_id);
		SpriteOffset = serialized->get_float(SpriteOffset_type_id);
		LastSyncDate = serialized->get_string(LastSyncDate_type_id);
		RenderSettings = serialized->unwrap_into<rivet::ddl::generated::EditorRenderSettings>(RenderSettings_type_id);
		RenderSettings2 = serialized->unwrap_into<rivet::ddl::generated::EditorRenderSettings2>(RenderSettings2_type_id);
		DeleteUnmovedDuplicated = serialized->get_bool(DeleteUnmovedDuplicated_type_id);
		AutoParenting = serialized->get_bool(AutoParenting_type_id);
		AutoGrouping = serialized->get_bool(AutoGrouping_type_id);
		ExportToCentimeters = serialized->get_bool(ExportToCentimeters_type_id);
		ArcBallManip = serialized->get_bool(ArcBallManip_type_id);
		AltTransManip = serialized->get_bool(AltTransManip_type_id);
		UseMayaCameraPanSpeed = serialized->get_bool(UseMayaCameraPanSpeed_type_id);
		FollowManipUseZ = serialized->get_bool(FollowManipUseZ_type_id);
		AltPrefabOverlay = serialized->get_bool(AltPrefabOverlay_type_id);
		StippleEffect = serialized->get_bool(StippleEffect_type_id);
		MetricAssist = serialized->get_bool(MetricAssist_type_id);
		EnforcePadFocus = serialized->get_bool(EnforcePadFocus_type_id);
		AllowPadInEditor = serialized->get_bool(AllowPadInEditor_type_id);
		PreferActiveState = serialized->get_bool(PreferActiveState_type_id);
		RestoreZoneCameraOnLoad = serialized->get_bool(RestoreZoneCameraOnLoad_type_id);
		ShowScriptGraphGrid = serialized->get_bool(ShowScriptGraphGrid_type_id);
		SelectedVolumesHighlight = serialized->get_bool(SelectedVolumesHighlight_type_id);
		PlaceFacingCamera = serialized->get_bool(PlaceFacingCamera_type_id);
		EnableViewerAsserts = serialized->get_bool(EnableViewerAsserts_type_id);
		PivotMode = serialized->get_enum<rivet::ddl::generated::PivotMode>(PivotMode_type_id, rivet::ddl::generated::PivotMode_values);
		CameraProjectionType = serialized->get_enum<rivet::ddl::generated::CameraProjectionType>(CameraProjectionType_type_id, rivet::ddl::generated::CameraProjectionType_values);
		GridXYZLock = serialized->get_bool(GridXYZLock_type_id);
		GridSpacingX = serialized->get_double(GridSpacingX_type_id);
		GridSpacingY = serialized->get_double(GridSpacingY_type_id);
		GridSpacingZ = serialized->get_double(GridSpacingZ_type_id);
		RotationSnap = serialized->get_float(RotationSnap_type_id);
		PolylineSnap = serialized->get_float(PolylineSnap_type_id);
		HFovAsset = serialized->get_float(HFovAsset_type_id);
		HFovZone = serialized->get_float(HFovZone_type_id);
		MarqueeTestMode = serialized->get_enum<rivet::ddl::generated::MarqueeTestMode>(MarqueeTestMode_type_id, rivet::ddl::generated::MarqueeTestMode_values);
		EditorRenderMode = serialized->get_enum<rivet::ddl::generated::EditorRenderMode>(EditorRenderMode_type_id, rivet::ddl::generated::EditorRenderMode_values);
		EditorCollisionMode = serialized->get_int32(EditorCollisionMode_type_id);
		SelectBoundingBox = serialized->get_bool(SelectBoundingBox_type_id);
		FXDynamicScaling = serialized->get_float(FXDynamicScaling_type_id);
		CamLoDScale = serialized->get_float(CamLoDScale_type_id);
		FarClipDist = serialized->get_float(FarClipDist_type_id);
		MatAlphaSim = serialized->get_float(MatAlphaSim_type_id);
		FPSSim = serialized->get_float(FPSSim_type_id);
		MatAnimateLoD = serialized->get_bool(MatAnimateLoD_type_id);
		MatDoubleSided = serialized->get_bool(MatDoubleSided_type_id);
		MatColorPicker = serialized->get_bool(MatColorPicker_type_id);
		MatPreviewSrgb = serialized->get_bool(MatPreviewSrgb_type_id);
		CurvesDefaultLinear = serialized->get_bool(CurvesDefaultLinear_type_id);
		SelectVolumesByEdge = serialized->get_bool(SelectVolumesByEdge_type_id);
		MatSortTriangles = serialized->get_bool(MatSortTriangles_type_id);
		ScriptCollapse = serialized->get_bool(ScriptCollapse_type_id);
		VertexPaintingPref = serialized->unwrap_into<rivet::ddl::generated::VertexPaintingPref>(VertexPaintingPref_type_id);
		ShrubbingPref = serialized->unwrap_into<rivet::ddl::generated::ShrubbingPref>(ShrubbingPref_type_id);
		ManipSpaceMode = serialized->get_enum<rivet::ddl::generated::ManipSpaceMode>(ManipSpaceMode_type_id, rivet::ddl::generated::ManipSpaceMode_values);
		ManipSnapToGrid = serialized->get_bool(ManipSnapToGrid_type_id);
		ManipSnapToVertex = serialized->get_bool(ManipSnapToVertex_type_id);
		ManipSnapToSurface = serialized->get_bool(ManipSnapToSurface_type_id);
		ManipSnapToPivot = serialized->get_bool(ManipSnapToPivot_type_id);
		WorldGridMatrix = serialized->get_doubles(WorldGridMatrix_type_id);
		CommandLineSwitches = serialized->get_string(CommandLineSwitches_type_id);
		CurrentViewerAtmosphere = serialized->get_int32(CurrentViewerAtmosphere_type_id);
		ViewerAtmospheres = serialized->get_strings(ViewerAtmospheres_type_id);
		ModelDisplayFlags = serialized->unwrap_into<rivet::ddl::generated::ModelDisplayOptions>(ModelDisplayFlags_type_id);
		EventFilterOptions = serialized->unwrap_into<rivet::ddl::generated::EventFilterOptions>(EventFilterOptions_type_id);
		AVMaterialOverride = serialized->get_int32(AVMaterialOverride_type_id);
		RandomizationSettings = serialized->unwrap_into<rivet::ddl::generated::RandomizationSettings>(RandomizationSettings_type_id); 
	}

	[[nodiscard]] auto
	SceneEditorPrefs::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	SceneEditorPrefs::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<SceneEditorPrefs> {
		if (incoming_type_id == SceneEditorPrefs::type_id) {
			return std::make_shared<SceneEditorPrefs>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated