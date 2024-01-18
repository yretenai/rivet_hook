// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/VisualEffectLightAttr.hpp>
#include <rivet/ddl/generated/VisualEffectNodeConnectedOutputPort.hpp>
#include <rivet/ddl/generated/VisualEffectNodeConnectedInputPort.hpp> 

#include <rivet/ddl/generated/VisualEffectLightAttrNode.hpp>

namespace rivet::ddl::generated {
	VisualEffectLightAttrNode::VisualEffectLightAttrNode([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		NodeId = serialized->get_uint64(NodeId_type_id, 0ull);
		XPos = serialized->get_int32(XPos_type_id, 0u);
		YPos = serialized->get_int32(YPos_type_id, 0u);
		DisplayName = serialized->get_string(DisplayName_type_id, {});
		ConnectedInputs = serialized->unwrap_into_many<rivet::ddl::generated::VisualEffectNodeConnectedInputPort>(ConnectedInputs_type_id);
		ConnectedOutputs = serialized->unwrap_into_many<rivet::ddl::generated::VisualEffectNodeConnectedOutputPort>(ConnectedOutputs_type_id);
		OutputPort_Output = serialized->unwrap_into<rivet::ddl::generated::VisualEffectLightAttr>(OutputPort_Output_type_id); 
	}

	[[nodiscard]] auto
	VisualEffectLightAttrNode::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	VisualEffectLightAttrNode::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<VisualEffectLightAttrNode> {
		if (incoming_type_id == VisualEffectLightAttrNode::type_id) {
			return std::make_shared<VisualEffectLightAttrNode>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
