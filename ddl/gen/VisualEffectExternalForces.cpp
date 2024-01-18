// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/VisualEffectExternalForces.hpp>

namespace rivet::ddl::generated {
	VisualEffectExternalForces::VisualEffectExternalForces([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		ForceFieldInfluence = serialized->get_float(ForceFieldInfluence_type_id, 1.000000f);
		ForceFieldRadius = serialized->get_float(ForceFieldRadius_type_id, 0.000000f);
		InheritSpeed = serialized->get_float(InheritSpeed_type_id, 0.000000f);
		Gravity = serialized->get_float(Gravity_type_id, 0.000000f);
		Damp = serialized->get_float(Damp_type_id, 0.000000f);
		Wind = serialized->get_float(Wind_type_id, 0.000000f); 
	}

	[[nodiscard]] auto
	VisualEffectExternalForces::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	VisualEffectExternalForces::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<VisualEffectExternalForces> {
		if (incoming_type_id == VisualEffectExternalForces::type_id) {
			return std::make_shared<VisualEffectExternalForces>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
