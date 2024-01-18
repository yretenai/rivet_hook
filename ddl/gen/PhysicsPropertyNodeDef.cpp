// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/BlockModifierOutPutSignal.hpp>
#include <rivet/ddl/generated/PhysicsComponentPrius.hpp> 

#include <rivet/ddl/generated/PhysicsPropertyNodeDef.hpp>

namespace rivet::ddl::generated {
	PhysicsPropertyNodeDef::PhysicsPropertyNodeDef([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		Id = serialized->get_uint64(Id_type_id, 0ull);
		Type = serialized->get_enum<rivet::ddl::generated::x577f103e>(Type_type_id, rivet::ddl::generated::x577f103e_values, rivet::ddl::generated::x577f103e::Invalid);
		Collapsed = serialized->get_bool(Collapsed_type_id, false);
		Disabled = serialized->get_bool(Disabled_type_id, false);
		X = serialized->get_float(X_type_id, 0.000000f);
		Y = serialized->get_float(Y_type_id, 0.000000f);
		PhysicsComponentPrius = serialized->unwrap_into<rivet::ddl::generated::PhysicsComponentPrius>(PhysicsComponentPrius_type_id);
		Output = serialized->unwrap_into<rivet::ddl::generated::BlockModifierOutPutSignal>(Output_type_id); 
	}

	[[nodiscard]] auto
	PhysicsPropertyNodeDef::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	PhysicsPropertyNodeDef::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<PhysicsPropertyNodeDef> {
		if (incoming_type_id == PhysicsPropertyNodeDef::type_id) {
			return std::make_shared<PhysicsPropertyNodeDef>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
