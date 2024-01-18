// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/IndexListMessage.hpp>

namespace rivet::ddl::generated {
	IndexListMessage::IndexListMessage([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		MessageType = serialized->get_uint8(MessageType_type_id, 0u);
		Indexes = serialized->get_int16s(Indexes_type_id); 
	}

	[[nodiscard]] auto
	IndexListMessage::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	IndexListMessage::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<IndexListMessage> {
		if (incoming_type_id == IndexListMessage::type_id) {
			return std::make_shared<IndexListMessage>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
