// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/WwiseAuxSend.hpp>

namespace rivet::ddl::generated {
	WwiseAuxSend::WwiseAuxSend([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		AuxSendName = serialized->get_string(AuxSendName_type_id);
		AuxSendId = serialized->get_uint32(AuxSendId_type_id); 
	}

	[[nodiscard]] auto
	WwiseAuxSend::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	WwiseAuxSend::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<WwiseAuxSend> {
		if (incoming_type_id == WwiseAuxSend::type_id) {
			return std::make_shared<WwiseAuxSend>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated