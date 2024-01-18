// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/VisualEffectAngles.hpp>

namespace rivet::ddl::generated {
	VisualEffectAngles::VisualEffectAngles([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		Roll = serialized->get_float(Roll_type_id, 0.000000f);
		Pitch = serialized->get_float(Pitch_type_id, 0.000000f);
		Yaw = serialized->get_float(Yaw_type_id, 0.000000f); 
	}

	[[nodiscard]] auto
	VisualEffectAngles::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	VisualEffectAngles::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<VisualEffectAngles> {
		if (incoming_type_id == VisualEffectAngles::type_id) {
			return std::make_shared<VisualEffectAngles>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
