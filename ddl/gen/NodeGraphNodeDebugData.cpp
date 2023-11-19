// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/NodeGraphDebugDataBase.hpp> 

#include <rivet/ddl/generated/NodeGraphNodeDebugData.hpp>

namespace rivet::ddl::generated {
	NodeGraphNodeDebugData::NodeGraphNodeDebugData([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		AssetId = serialized->get_uint64(AssetId_type_id);
		FlattenedId = serialized->get_uint64(FlattenedId_type_id);
		GraphId = serialized->get_uint64(GraphId_type_id);
		Id = serialized->get_uint64(Id_type_id);
		Data = serialized->unwrap_into<rivet::ddl::generated::NodeGraphDebugDataBase>(Data_type_id); 
	}

	[[nodiscard]] auto
	NodeGraphNodeDebugData::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	NodeGraphNodeDebugData::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<NodeGraphNodeDebugData> {
		if (incoming_type_id == NodeGraphNodeDebugData::type_id) {
			return std::make_shared<NodeGraphNodeDebugData>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated