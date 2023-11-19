// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/DevstatsMinimalEventHeader.hpp>

namespace rivet::ddl::generated {
	DevstatsMinimalEventHeader::DevstatsMinimalEventHeader([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		user_id = serialized->get_string(user_id_type_id);
		session_id = serialized->get_string(session_id_type_id);
		title_id = serialized->get_string(title_id_type_id);
		client_timestamp = serialized->get_uint64(client_timestamp_type_id); 
	}

	[[nodiscard]] auto
	DevstatsMinimalEventHeader::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	DevstatsMinimalEventHeader::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<DevstatsMinimalEventHeader> {
		if (incoming_type_id == DevstatsMinimalEventHeader::type_id) {
			return std::make_shared<DevstatsMinimalEventHeader>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated