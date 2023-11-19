// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/BlendAtmospheresActionPrius.hpp>

namespace rivet::ddl::generated {
	BlendAtmospheresActionPrius::BlendAtmospheresActionPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		ActionType = serialized->get_enum<rivet::ddl::generated::x10228b34>(ActionType_type_id, rivet::ddl::generated::x10228b34_values);
		EndAtmosphere = serialized->get_string(EndAtmosphere_type_id);
		MakeActiveOnBlendComplete = serialized->get_bool(MakeActiveOnBlendComplete_type_id); 
	}

	[[nodiscard]] auto
	BlendAtmospheresActionPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	BlendAtmospheresActionPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<BlendAtmospheresActionPrius> {
		if (incoming_type_id == BlendAtmospheresActionPrius::type_id) {
			return std::make_shared<BlendAtmospheresActionPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated