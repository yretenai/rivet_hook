// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/FrozenSkeletonRange.hpp>
#include <rivet/ddl/generated/AnimTriggerTrack.hpp>
#include <rivet/ddl/generated/AnimFootstepConfigDef.hpp>
#include <rivet/ddl/generated/AnimFacialVisemeMapDef.hpp>
#include <rivet/ddl/generated/AnimFacialPoseDef.hpp>
#include <rivet/ddl/generated/BezierCurveDef.hpp>
#include <rivet/ddl/generated/AnimPartialChain.hpp>
#include <rivet/ddl/generated/VaultMetaData.hpp> 

#include <rivet/ddl/generated/AnimClipDef.hpp>

namespace rivet::ddl::generated {
	AnimClipDef::AnimClipDef([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		VaultMetaData = serialized->unwrap_into<rivet::ddl::generated::VaultMetaData>(VaultMetaData_type_id);
		IconPath = serialized->get_string(IconPath_type_id, "");
		Type = serialized->get_enum<rivet::ddl::generated::xb9555036>(Type_type_id, rivet::ddl::generated::xb9555036_values, rivet::ddl::generated::xb9555036::Standard_clip);
		Name = serialized->get_string(Name_type_id, {});
		SourcePath = serialized->get_string(SourcePath_type_id, {});
		FilterNodeName = serialized->get_string(FilterNodeName_type_id, {});
		SampleRate = serialized->get_enum<rivet::ddl::generated::x865c089e>(SampleRate_type_id, rivet::ddl::generated::x865c089e_values, rivet::ddl::generated::x865c089e::SampleRate10Hz);
		StartFrame = serialized->get_int32(StartFrame_type_id, 0u);
		EndFrame = serialized->get_int32(EndFrame_type_id, 0u);
		IsLooping = serialized->get_bool(IsLooping_type_id, false);
		CycleCount = serialized->get_uint8(CycleCount_type_id, 1u);
		CompressionQuality = serialized->get_enum<rivet::ddl::generated::x57d39d58>(CompressionQuality_type_id, rivet::ddl::generated::x57d39d58_values, rivet::ddl::generated::x57d39d58::Normal);
		TranslationRange = serialized->get_enum<rivet::ddl::generated::x3a8b381d>(TranslationRange_type_id, rivet::ddl::generated::x3a8b381d_values, rivet::ddl::generated::x3a8b381d::TranslationRangeStd);
		DebugUncompressed = serialized->get_bool(DebugUncompressed_type_id, false);
		IsAdditive = serialized->get_bool(IsAdditive_type_id, false);
		AdditiveRefSampleIndex = serialized->get_uint32(AdditiveRefSampleIndex_type_id, 0u);
		PartialChains = serialized->unwrap_into_many<rivet::ddl::generated::AnimPartialChain>(PartialChains_type_id);
		PartialMotion = serialized->get_bool(PartialMotion_type_id, false);
		MotionJointDataQuality = serialized->get_enum<rivet::ddl::generated::x26111896>(MotionJointDataQuality_type_id, rivet::ddl::generated::x26111896_values, rivet::ddl::generated::x26111896::DefaultCompressed);
		Curves = serialized->unwrap_into_many<rivet::ddl::generated::BezierCurveDef>(Curves_type_id);
		CustomTracks = serialized->unwrap_into_many<rivet::ddl::generated::BezierCurveDef>(CustomTracks_type_id);
		FacialVisemePoses = serialized->unwrap_into_many<rivet::ddl::generated::AnimFacialPoseDef>(FacialVisemePoses_type_id);
		FacialVisemeMap = serialized->unwrap_into_many<rivet::ddl::generated::AnimFacialVisemeMapDef>(FacialVisemeMap_type_id);
		FacialExpressionPoses = serialized->unwrap_into_many<rivet::ddl::generated::AnimFacialPoseDef>(FacialExpressionPoses_type_id);
		EventTracks = serialized->unwrap_into_many<rivet::ddl::generated::AnimTriggerTrack>(EventTracks_type_id);
		CinematicClip = serialized->get_bool(CinematicClip_type_id, false);
		FrozenSkeletonFrames = serialized->unwrap_into_many<rivet::ddl::generated::FrozenSkeletonRange>(FrozenSkeletonFrames_type_id);
		GeomType = serialized->get_enum<rivet::ddl::generated::x38fb844d>(GeomType_type_id, rivet::ddl::generated::x38fb844d_values, rivet::ddl::generated::x38fb844d::AnimClipGeomTypeNone);
		GeomModelSourcePath = serialized->get_string(GeomModelSourcePath_type_id, {});
		PendingReview = serialized->get_bitset<rivet::ddl::generated::x6569d94c>(PendingReview_type_id, rivet::ddl::generated::x6569d94c_values, 0u);
		FootstepGen = serialized->unwrap_into<rivet::ddl::generated::AnimFootstepConfigDef>(FootstepGen_type_id); 
	}

	[[nodiscard]] auto
	AnimClipDef::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	AnimClipDef::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<AnimClipDef> {
		if (incoming_type_id == AnimClipDef::type_id) {
			return std::make_shared<AnimClipDef>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
