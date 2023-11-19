// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/TimeScaleActionPrius.hpp>

namespace rivet::ddl::generated {
	TimeScaleActionPrius::TimeScaleActionPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		ActionType = serialized->get_enum<rivet::ddl::generated::x10228b34>(ActionType_type_id, rivet::ddl::generated::x10228b34_values);
		TimeScale = serialized->get_float(TimeScale_type_id);
		Context = serialized->get_string(Context_type_id);
		RampTime = serialized->get_float(RampTime_type_id);
		UseFX = serialized->get_bool(UseFX_type_id); 
	}

	[[nodiscard]] auto
	TimeScaleActionPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	TimeScaleActionPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<TimeScaleActionPrius> {
		if (incoming_type_id == TimeScaleActionPrius::type_id) {
			return std::make_shared<TimeScaleActionPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated