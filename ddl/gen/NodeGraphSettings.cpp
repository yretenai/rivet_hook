// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/NodeGraphSettings.hpp>

namespace rivet::ddl::generated {
	NodeGraphSettings::NodeGraphSettings([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		InstanceMax = serialized->get_uint32(InstanceMax_type_id);
		ConnectionMax = serialized->get_uint32(ConnectionMax_type_id);
		PlugMax = serialized->get_uint32(PlugMax_type_id);
		NodeMax = serialized->get_uint32(NodeMax_type_id);
		EventHandlerMax = serialized->get_uint32(EventHandlerMax_type_id);
		MaxPlugsPerGraph = serialized->get_uint32(MaxPlugsPerGraph_type_id);
		MaxNodesPerGraph = serialized->get_uint32(MaxNodesPerGraph_type_id);
		PooledInstanceMax = serialized->get_uint32(PooledInstanceMax_type_id); 
	}

	[[nodiscard]] auto
	NodeGraphSettings::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	NodeGraphSettings::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<NodeGraphSettings> {
		if (incoming_type_id == NodeGraphSettings::type_id) {
			return std::make_shared<NodeGraphSettings>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated