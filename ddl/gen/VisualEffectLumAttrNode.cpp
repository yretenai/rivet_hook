// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/VisualEffectLumAttr.hpp>
#include <rivet/ddl/generated/VisualEffectNodeConnectedOutputPort.hpp>
#include <rivet/ddl/generated/VisualEffectNodeConnectedInputPort.hpp> 

#include <rivet/ddl/generated/VisualEffectLumAttrNode.hpp>

namespace rivet::ddl::generated {
	VisualEffectLumAttrNode::VisualEffectLumAttrNode([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		NodeId = serialized->get_uint64(NodeId_type_id);
		XPos = serialized->get_int32(XPos_type_id);
		YPos = serialized->get_int32(YPos_type_id);
		DisplayName = serialized->get_string(DisplayName_type_id);
		ConnectedInputs = serialized->unwrap_into_many<rivet::ddl::generated::VisualEffectNodeConnectedInputPort>(ConnectedInputs_type_id);
		ConnectedOutputs = serialized->unwrap_into_many<rivet::ddl::generated::VisualEffectNodeConnectedOutputPort>(ConnectedOutputs_type_id);
		OutputPort_Output = serialized->unwrap_into<rivet::ddl::generated::VisualEffectLumAttr>(OutputPort_Output_type_id); 
	}

	[[nodiscard]] auto
	VisualEffectLumAttrNode::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	VisualEffectLumAttrNode::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<VisualEffectLumAttrNode> {
		if (incoming_type_id == VisualEffectLumAttrNode::type_id) {
			return std::make_shared<VisualEffectLumAttrNode>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated