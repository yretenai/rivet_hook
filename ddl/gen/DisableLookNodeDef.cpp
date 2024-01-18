// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/InputPlugSignal.hpp> 

#include <rivet/ddl/generated/DisableLookNodeDef.hpp>

namespace rivet::ddl::generated {
	DisableLookNodeDef::DisableLookNodeDef([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		Id = serialized->get_uint64(Id_type_id, 0ull);
		Type = serialized->get_enum<rivet::ddl::generated::x577f103e>(Type_type_id, rivet::ddl::generated::x577f103e_values, rivet::ddl::generated::x577f103e::Invalid);
		Collapsed = serialized->get_bool(Collapsed_type_id, false);
		Disabled = serialized->get_bool(Disabled_type_id, false);
		X = serialized->get_float(X_type_id, 0.000000f);
		Y = serialized->get_float(Y_type_id, 0.000000f);
		Input = serialized->unwrap_into<rivet::ddl::generated::InputPlugSignal>(Input_type_id);
		LookName = serialized->get_string(LookName_type_id, {}); 
	}

	[[nodiscard]] auto
	DisableLookNodeDef::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	DisableLookNodeDef::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<DisableLookNodeDef> {
		if (incoming_type_id == DisableLookNodeDef::type_id) {
			return std::make_shared<DisableLookNodeDef>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
