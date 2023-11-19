// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/CameraFocusOnNodesEngineItem.hpp>

namespace rivet::ddl::generated {
	CameraFocusOnNodesEngineItem::CameraFocusOnNodesEngineItem([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		Nodes = serialized->get_bools(Nodes_type_id);
		UseClusters = serialized->get_bool(UseClusters_type_id);
		DistanceFactor = serialized->get_float(DistanceFactor_type_id); 
	}

	[[nodiscard]] auto
	CameraFocusOnNodesEngineItem::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	CameraFocusOnNodesEngineItem::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<CameraFocusOnNodesEngineItem> {
		if (incoming_type_id == CameraFocusOnNodesEngineItem::type_id) {
			return std::make_shared<CameraFocusOnNodesEngineItem>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated