// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/DebugActorEventFilter.hpp>
#include <rivet/ddl/generated/DebugActor3dViewWhiteListItem.hpp> 

#include <rivet/ddl/generated/DebugActorSystemConfig.hpp>

namespace rivet::ddl::generated {
	DebugActorSystemConfig::DebugActorSystemConfig([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): ConfigBase(serialized) {
		FilterList = serialized->unwrap_into_many<rivet::ddl::generated::DebugActorEventFilter>(FilterList_type_id);
		DebugActor3dViewWhiteList = serialized->unwrap_into_many<rivet::ddl::generated::DebugActor3dViewWhiteListItem>(DebugActor3dViewWhiteList_type_id); 
	}

	[[nodiscard]] auto
	DebugActorSystemConfig::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	DebugActorSystemConfig::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<DebugActorSystemConfig> {
		if (incoming_type_id == DebugActorSystemConfig::type_id) {
			return std::make_shared<DebugActorSystemConfig>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
