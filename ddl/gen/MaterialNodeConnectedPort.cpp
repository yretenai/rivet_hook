// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/MaterialNodeConnectedPort.hpp>

namespace rivet::ddl::generated {
	MaterialNodeConnectedPort::MaterialNodeConnectedPort([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		NodeIdLow = serialized->get_uint32(NodeIdLow_type_id);
		NodeIdHigh = serialized->get_uint32(NodeIdHigh_type_id);
		PortInternalName = serialized->get_string(PortInternalName_type_id); 
	}

	[[nodiscard]] auto
	MaterialNodeConnectedPort::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	MaterialNodeConnectedPort::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<MaterialNodeConnectedPort> {
		if (incoming_type_id == MaterialNodeConnectedPort::type_id) {
			return std::make_shared<MaterialNodeConnectedPort>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated