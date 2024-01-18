// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/InputIdleActionPrius.hpp>

namespace rivet::ddl::generated {
	InputIdleActionPrius::InputIdleActionPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		ActionType = serialized->get_enum<rivet::ddl::generated::x10228b34>(ActionType_type_id, rivet::ddl::generated::x10228b34_values, rivet::ddl::generated::x10228b34::Gameplay);
		WarnIdleTime = serialized->get_float(WarnIdleTime_type_id, -1.000000f);
		MaxIdleTime = serialized->get_float(MaxIdleTime_type_id, -1.000000f);
		AutoStartTimer = serialized->get_bool(AutoStartTimer_type_id, true); 
	}

	[[nodiscard]] auto
	InputIdleActionPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	InputIdleActionPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<InputIdleActionPrius> {
		if (incoming_type_id == InputIdleActionPrius::type_id) {
			return std::make_shared<InputIdleActionPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
