// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/EventBase.hpp> 

#include <rivet/ddl/generated/EnterVolumeTriggerPrius.hpp>

namespace rivet::ddl::generated {
	EnterVolumeTriggerPrius::EnterVolumeTriggerPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		OnEnterMode = serialized->get_enum<rivet::ddl::generated::xda924f99>(OnEnterMode_type_id, rivet::ddl::generated::xda924f99_values);
		OnEnterEvent = serialized->unwrap_into<rivet::ddl::generated::EventBase>(OnEnterEvent_type_id);
		OnExitMode = serialized->get_enum<rivet::ddl::generated::x1343dca9>(OnExitMode_type_id, rivet::ddl::generated::x1343dca9_values);
		OnExitEvent = serialized->unwrap_into<rivet::ddl::generated::EventBase>(OnExitEvent_type_id); 
	}

	[[nodiscard]] auto
	EnterVolumeTriggerPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	EnterVolumeTriggerPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<EnterVolumeTriggerPrius> {
		if (incoming_type_id == EnterVolumeTriggerPrius::type_id) {
			return std::make_shared<EnterVolumeTriggerPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated