// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/ActorSaveModifierBasePrius.hpp>

namespace rivet::ddl::generated {
	ActorSaveModifierBasePrius::ActorSaveModifierBasePrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		IsEnabled = serialized->get_bool(IsEnabled_type_id, false);
		Priority = serialized->get_uint8(Priority_type_id, 0u); 
	}

	[[nodiscard]] auto
	ActorSaveModifierBasePrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	ActorSaveModifierBasePrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<ActorSaveModifierBasePrius> {
		if (incoming_type_id == ActorSaveModifierBasePrius::type_id) {
			return std::make_shared<ActorSaveModifierBasePrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
