// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/PhysicsMaterialPropertiesParam.hpp>

namespace rivet::ddl::generated {
	PhysicsMaterialPropertiesParam::PhysicsMaterialPropertiesParam([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		DynamicFriction = serialized->get_float(DynamicFriction_type_id);
		DynFrictionCombinePolicy = serialized->get_enum<rivet::ddl::generated::x1c7d74ff>(DynFrictionCombinePolicy_type_id, rivet::ddl::generated::x1c7d74ff_values);
		StaticFriction = serialized->get_float(StaticFriction_type_id);
		Restitution = serialized->get_float(Restitution_type_id);
		RestitutionCombinePolicy = serialized->get_enum<rivet::ddl::generated::x1c7d74ff>(RestitutionCombinePolicy_type_id, rivet::ddl::generated::x1c7d74ff_values);
		SoftContactForceFactor = serialized->get_float(SoftContactForceFactor_type_id);
		SoftContactDampFactor = serialized->get_float(SoftContactDampFactor_type_id);
		SoftContactSepVelocity = serialized->get_float(SoftContactSepVelocity_type_id); 
	}

	[[nodiscard]] auto
	PhysicsMaterialPropertiesParam::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	PhysicsMaterialPropertiesParam::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<PhysicsMaterialPropertiesParam> {
		if (incoming_type_id == PhysicsMaterialPropertiesParam::type_id) {
			return std::make_shared<PhysicsMaterialPropertiesParam>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
