// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/DebugLink.hpp>

namespace rivet::ddl::generated {
	DebugLink::DebugLink([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): ActivityLinkBase(serialized) {
		ActivityState = serialized->get_enum<rivet::ddl::generated::x97a17b73>(ActivityState_type_id, rivet::ddl::generated::x97a17b73_values); 
	}

	[[nodiscard]] auto
	DebugLink::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	DebugLink::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<DebugLink> {
		if (incoming_type_id == DebugLink::type_id) {
			return std::make_shared<DebugLink>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
