// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/DebugActorEventFilterItem.hpp> 

#include <rivet/ddl/generated/DebugActorEventFilter.hpp>

namespace rivet::ddl::generated {
	DebugActorEventFilter::DebugActorEventFilter([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		FilterName = serialized->get_string(FilterName_type_id);
		DefaultOn = serialized->get_bool(DefaultOn_type_id);
		IsInclude = serialized->get_bool(IsInclude_type_id);
		EventList = serialized->unwrap_into_many<rivet::ddl::generated::DebugActorEventFilterItem>(EventList_type_id); 
	}

	auto
	DebugActorEventFilter::get_type_id() const noexcept -> rivet::rivet_type_id {
		return type_id;
	}

	[[nodiscard]] auto
	DebugActorEventFilter::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	DebugActorEventFilter::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<DebugActorEventFilter> {
		if (incoming_type_id == DebugActorEventFilter::type_id) {
			return std::make_shared<DebugActorEventFilter>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated