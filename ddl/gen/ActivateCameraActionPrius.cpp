// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/ActivateCameraActionPrius.hpp>

namespace rivet::ddl::generated {
	ActivateCameraActionPrius::ActivateCameraActionPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		ActionType = serialized->get_enum<rivet::ddl::generated::x10228b34>(ActionType_type_id, rivet::ddl::generated::x10228b34_values);
		TransitionType = serialized->get_enum<rivet::ddl::generated::x787c02d3>(TransitionType_type_id, rivet::ddl::generated::x787c02d3_values);
		BlendTime = serialized->get_float(BlendTime_type_id);
		BlendEaseIn = serialized->get_float(BlendEaseIn_type_id);
		BlendEaseOut = serialized->get_float(BlendEaseOut_type_id);
		PruneType = serialized->get_enum<rivet::ddl::generated::x1e271f24>(PruneType_type_id, rivet::ddl::generated::x1e271f24_values);
		HighPriority = serialized->get_bool(HighPriority_type_id);
		ActivateLocal = serialized->get_bool(ActivateLocal_type_id);
		DuplicateCameraOnActivate = serialized->get_bool(DuplicateCameraOnActivate_type_id); 
	}

	[[nodiscard]] auto
	ActivateCameraActionPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	ActivateCameraActionPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<ActivateCameraActionPrius> {
		if (incoming_type_id == ActivateCameraActionPrius::type_id) {
			return std::make_shared<ActivateCameraActionPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated