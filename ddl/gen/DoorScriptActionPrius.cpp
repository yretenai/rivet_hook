// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/DoorScriptActionPrius.hpp>

namespace rivet::ddl::generated {
	DoorScriptActionPrius::DoorScriptActionPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		ActionType = serialized->get_enum<rivet::ddl::generated::x10228b34>(ActionType_type_id, rivet::ddl::generated::x10228b34_values, rivet::ddl::generated::x10228b34::Interact);
		OpenTriggerMax = serialized->get_uint32(OpenTriggerMax_type_id, 0u);
		CloseTriggerMax = serialized->get_uint32(CloseTriggerMax_type_id, 0u);
		OutputRequiresInput = serialized->get_bool(OutputRequiresInput_type_id, false); 
	}

	[[nodiscard]] auto
	DoorScriptActionPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	DoorScriptActionPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<DoorScriptActionPrius> {
		if (incoming_type_id == DoorScriptActionPrius::type_id) {
			return std::make_shared<DoorScriptActionPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
