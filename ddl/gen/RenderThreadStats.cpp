// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/DrawStats.hpp> 

#include <rivet/ddl/generated/RenderThreadStats.hpp>

namespace rivet::ddl::generated {
	RenderThreadStats::RenderThreadStats([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		FrameIndex = serialized->get_uint32(FrameIndex_type_id);
		IsDebugMode = serialized->get_uint32(IsDebugMode_type_id);
		CpuFrameMicros = serialized->get_uint32(CpuFrameMicros_type_id);
		CpuPresentMicros = serialized->get_uint32(CpuPresentMicros_type_id);
		GpuFrameMicros = serialized->get_uint32(GpuFrameMicros_type_id);
		GpuBusyMicros = serialized->get_uint32(GpuBusyMicros_type_id);
		CpuLayerMicros = serialized->get_uint32s(CpuLayerMicros_type_id);
		GpuLayerMicros = serialized->get_uint32s(GpuLayerMicros_type_id);
		ModelGBuffer = serialized->unwrap_into<rivet::ddl::generated::DrawStats>(ModelGBuffer_type_id);
		ModelShadow = serialized->unwrap_into<rivet::ddl::generated::DrawStats>(ModelShadow_type_id);
		ModelForward = serialized->unwrap_into<rivet::ddl::generated::DrawStats>(ModelForward_type_id);
		ModelAlpha = serialized->unwrap_into<rivet::ddl::generated::DrawStats>(ModelAlpha_type_id);
		ModelVelocityDepth = serialized->unwrap_into<rivet::ddl::generated::DrawStats>(ModelVelocityDepth_type_id);
		ModelDebug = serialized->unwrap_into<rivet::ddl::generated::DrawStats>(ModelDebug_type_id);
		Decals = serialized->unwrap_into<rivet::ddl::generated::DrawStats>(Decals_type_id);
		ModelTessMaterialCount = serialized->get_uint32(ModelTessMaterialCount_type_id);
		ModelSortedTriangleCount = serialized->get_uint32(ModelSortedTriangleCount_type_id);
		ModelSkinnedVertexCount = serialized->get_uint32(ModelSkinnedVertexCount_type_id);
		ModelSkinnedEntryCount = serialized->get_uint32(ModelSkinnedEntryCount_type_id);
		DecalSkinnedVertexCount = serialized->get_uint32(DecalSkinnedVertexCount_type_id);
		DecalSkinnedEntryCount = serialized->get_uint32(DecalSkinnedEntryCount_type_id);
		VfxModels = serialized->unwrap_into<rivet::ddl::generated::DrawStats>(VfxModels_type_id);
		VfxQuads = serialized->unwrap_into<rivet::ddl::generated::DrawStats>(VfxQuads_type_id);
		VfxTrails = serialized->unwrap_into<rivet::ddl::generated::DrawStats>(VfxTrails_type_id);
		VfxSwipes = serialized->unwrap_into<rivet::ddl::generated::DrawStats>(VfxSwipes_type_id);
		VfxSplines = serialized->unwrap_into<rivet::ddl::generated::DrawStats>(VfxSplines_type_id);
		VfxFrameGrabCount = serialized->get_uint32(VfxFrameGrabCount_type_id);
		VfxStartCompositeCount = serialized->get_uint32(VfxStartCompositeCount_type_id);
		UIHandlerMicros = serialized->get_uint32(UIHandlerMicros_type_id);
		UIRenderUpdateMicros = serialized->get_uint32(UIRenderUpdateMicros_type_id);
		GpuDeptMicros = serialized->get_uint32s(GpuDeptMicros_type_id);
		GpuStarvationMicros = serialized->get_uint32(GpuStarvationMicros_type_id); 
	}

	[[nodiscard]] auto
	RenderThreadStats::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	RenderThreadStats::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<RenderThreadStats> {
		if (incoming_type_id == RenderThreadStats::type_id) {
			return std::make_shared<RenderThreadStats>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated