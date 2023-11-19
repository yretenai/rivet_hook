// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/ObjectiveNodeGameDef.hpp>
#include <rivet/ddl/generated/ObjectiveSaveOptions.hpp> 

#include <rivet/ddl/generated/ObjectiveNodeSharedDef.hpp>

namespace rivet::ddl::generated {
	ObjectiveNodeSharedDef::ObjectiveNodeSharedDef([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): MissionSystemDefaultNodeBaseDef(serialized) {
		SaveOptions = serialized->unwrap_into<rivet::ddl::generated::ObjectiveSaveOptions>(SaveOptions_type_id); 
	}

	[[nodiscard]] auto
	ObjectiveNodeSharedDef::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	ObjectiveNodeSharedDef::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<ObjectiveNodeSharedDef> {
		if (incoming_type_id == ObjectiveNodeSharedDef::type_id) {
			return std::make_shared<ObjectiveNodeSharedDef>(serialized);
		}

		auto ObjectiveNodeGameDef_ptr = ObjectiveNodeGameDef::from_substruct(incoming_type_id, serialized);
		if (ObjectiveNodeGameDef_ptr != nullptr) {
			return ObjectiveNodeGameDef_ptr;
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated