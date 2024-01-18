// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/EngineDebugSettings.hpp>

namespace rivet::ddl::generated {
	EngineDebugSettings::EngineDebugSettings([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		PrototypeMessageEnable = serialized->get_bool(PrototypeMessageEnable_type_id, true);
		DebugMessageEnable = serialized->get_bool(DebugMessageEnable_type_id, true);
		FrameTimeGraphEnable = serialized->get_bool(FrameTimeGraphEnable_type_id, true);
		FrameTimeHistogramEnable = serialized->get_bool(FrameTimeHistogramEnable_type_id, false);
		FrameTimeHideDisplay = serialized->get_bool(FrameTimeHideDisplay_type_id, false);
		TileBoundaryEnable = serialized->get_bool(TileBoundaryEnable_type_id, false);
		AssetManagerDebugDraw = serialized->get_bool(AssetManagerDebugDraw_type_id, false);
		AssetLoadingDebugDraw = serialized->get_bool(AssetLoadingDebugDraw_type_id, true);
		FailAllAssetLoads = serialized->get_bool(FailAllAssetLoads_type_id, false);
		FailAssetsAsMissing = serialized->get_bool(FailAssetsAsMissing_type_id, false);
		VerifyModelsHaveNoPhysicsOnDestruction = serialized->get_bool(VerifyModelsHaveNoPhysicsOnDestruction_type_id, false);
		ScriptDebugPort = serialized->get_uint16(ScriptDebugPort_type_id, 1211u);
		ScriptSignalsPerFrameMax = serialized->get_uint32(ScriptSignalsPerFrameMax_type_id, 1024u);
		EnableTopAsserts = serialized->get_bool(EnableTopAsserts_type_id, false);
		ExtraTextureMemAllocChecks = serialized->get_bool(ExtraTextureMemAllocChecks_type_id, false);
		StallGameAfterLoadBeforeUpdates = serialized->get_bool(StallGameAfterLoadBeforeUpdates_type_id, false);
		ErrorActorsEnable = serialized->get_bool(ErrorActorsEnable_type_id, true);
		AssetLoadTextPosX = serialized->get_uint32(AssetLoadTextPosX_type_id, 20u);
		AssetLoadTextPosY = serialized->get_uint32(AssetLoadTextPosY_type_id, 20u);
		DebugMenuEnable = serialized->get_bool(DebugMenuEnable_type_id, false);
		DebugMenuEasyDebugDelay = serialized->get_bool(DebugMenuEasyDebugDelay_type_id, true);
		TargetVertexDensityLow = serialized->get_float(TargetVertexDensityLow_type_id, 0.050000f);
		TargetVertexDensityHigh = serialized->get_float(TargetVertexDensityHigh_type_id, 0.500000f);
		TargetTexelsPerMeterLow = serialized->get_float(TargetTexelsPerMeterLow_type_id, 0.000000f);
		TargetTexelsPerMeterHigh = serialized->get_float(TargetTexelsPerMeterHigh_type_id, 1200.000000f);
		EnvProbeLookupRangeLow = serialized->get_uint16(EnvProbeLookupRangeLow_type_id, 2u);
		EnvProbeLookupRangeHigh = serialized->get_uint16(EnvProbeLookupRangeHigh_type_id, 10u); 
	}

	[[nodiscard]] auto
	EngineDebugSettings::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	EngineDebugSettings::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<EngineDebugSettings> {
		if (incoming_type_id == EngineDebugSettings::type_id) {
			return std::make_shared<EngineDebugSettings>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
