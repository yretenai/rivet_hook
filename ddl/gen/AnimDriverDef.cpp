// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/AnimDriverCommentDef.hpp>
#include <rivet/ddl/generated/AnimDriverOpClampDef.hpp>
#include <rivet/ddl/generated/DDLVector3.hpp>
#include <rivet/ddl/generated/AnimDriverOpMulAddDef.hpp>
#include <rivet/ddl/generated/AnimDriverClipNodeDef.hpp>
#include <rivet/ddl/generated/AnimDriverBlendNodeDef.hpp>
#include <rivet/ddl/generated/AnimDriverBiBlendNodeDef.hpp>
#include <rivet/ddl/generated/AnimDriverPoseNodeDef.hpp>
#include <rivet/ddl/generated/AnimDriverTriBlendNodeDef.hpp>
#include <rivet/ddl/generated/AnimDriverGroupNodeDef.hpp>
#include <rivet/ddl/generated/AnimDriverOpSmoothDef.hpp>
#include <rivet/ddl/generated/AnimDriverSequenceNodeDef.hpp>
#include <rivet/ddl/generated/AnimDriverRandomNodeDef.hpp>
#include <rivet/ddl/generated/AnimDriverGridNodeDef.hpp>
#include <rivet/ddl/generated/AnimDriverSelectNodeDef.hpp>
#include <rivet/ddl/generated/AnimDriverFilterVarDef.hpp>
#include <rivet/ddl/generated/AnimDriverVarDef.hpp>
#include <rivet/ddl/generated/AnimDriverMirrorNodeDef.hpp>
#include <rivet/ddl/generated/AnimDriverPerformanceNodeDef.hpp> 

#include <rivet/ddl/generated/AnimDriverDef.hpp>

namespace rivet::ddl::generated {
	AnimDriverDef::AnimDriverDef([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		Id = serialized->get_uint64(Id_type_id);
		RootName = serialized->get_string(RootName_type_id);
		RootIndex = serialized->get_uint32(RootIndex_type_id);
		Name = serialized->get_string(Name_type_id);
		LayerType = serialized->get_enum<rivet::ddl::generated::x7c99d780>(LayerType_type_id, rivet::ddl::generated::x7c99d780_values);
		Flags = serialized->get_bitset<rivet::ddl::generated::xc95d8425>(Flags_type_id, rivet::ddl::generated::xc95d8425_values);
		LayerId = serialized->get_uint32(LayerId_type_id);
		x = serialized->get_float(x_type_id);
		y = serialized->get_float(y_type_id);
		x1 = serialized->get_float(x1_type_id);
		y1 = serialized->get_float(y1_type_id);
		Color = serialized->unwrap_into<rivet::ddl::generated::DDLVector3>(Color_type_id);
		ClipNodes = serialized->unwrap_into_many<rivet::ddl::generated::AnimDriverClipNodeDef>(ClipNodes_type_id);
		PoseNodes = serialized->unwrap_into_many<rivet::ddl::generated::AnimDriverPoseNodeDef>(PoseNodes_type_id);
		BiBlendNodes = serialized->unwrap_into_many<rivet::ddl::generated::AnimDriverBiBlendNodeDef>(BiBlendNodes_type_id);
		TriBlendNodes = serialized->unwrap_into_many<rivet::ddl::generated::AnimDriverTriBlendNodeDef>(TriBlendNodes_type_id);
		BlendNodes = serialized->unwrap_into_many<rivet::ddl::generated::AnimDriverBlendNodeDef>(BlendNodes_type_id);
		SequenceNodes = serialized->unwrap_into_many<rivet::ddl::generated::AnimDriverSequenceNodeDef>(SequenceNodes_type_id);
		RandomNodes = serialized->unwrap_into_many<rivet::ddl::generated::AnimDriverRandomNodeDef>(RandomNodes_type_id);
		GridNodes = serialized->unwrap_into_many<rivet::ddl::generated::AnimDriverGridNodeDef>(GridNodes_type_id);
		SelectNodes = serialized->unwrap_into_many<rivet::ddl::generated::AnimDriverSelectNodeDef>(SelectNodes_type_id);
		MirrorNodes = serialized->unwrap_into_many<rivet::ddl::generated::AnimDriverMirrorNodeDef>(MirrorNodes_type_id);
		PerformanceNodes = serialized->unwrap_into_many<rivet::ddl::generated::AnimDriverPerformanceNodeDef>(PerformanceNodes_type_id);
		Vars = serialized->unwrap_into_many<rivet::ddl::generated::AnimDriverVarDef>(Vars_type_id);
		FilterVars = serialized->unwrap_into_many<rivet::ddl::generated::AnimDriverFilterVarDef>(FilterVars_type_id);
		MulAddOps = serialized->unwrap_into_many<rivet::ddl::generated::AnimDriverOpMulAddDef>(MulAddOps_type_id);
		ClampOps = serialized->unwrap_into_many<rivet::ddl::generated::AnimDriverOpClampDef>(ClampOps_type_id);
		SmoothOps = serialized->unwrap_into_many<rivet::ddl::generated::AnimDriverOpSmoothDef>(SmoothOps_type_id);
		GroupNodes = serialized->unwrap_into_many<rivet::ddl::generated::AnimDriverGroupNodeDef>(GroupNodes_type_id);
		Comments = serialized->unwrap_into_many<rivet::ddl::generated::AnimDriverCommentDef>(Comments_type_id);
		TransitionDurationDefault = serialized->get_float(TransitionDurationDefault_type_id);
		TransitionDurationFromNone = serialized->get_float(TransitionDurationFromNone_type_id);
		TransitionDurationToNone = serialized->get_float(TransitionDurationToNone_type_id);
		TransitionDurationSelf = serialized->get_float(TransitionDurationSelf_type_id); 
	}

	[[nodiscard]] auto
	AnimDriverDef::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	AnimDriverDef::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<AnimDriverDef> {
		if (incoming_type_id == AnimDriverDef::type_id) {
			return std::make_shared<AnimDriverDef>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated