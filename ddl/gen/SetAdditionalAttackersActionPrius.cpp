// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/SetAdditionalAttackersActionPrius.hpp>

namespace rivet::ddl::generated {
	SetAdditionalAttackersActionPrius::SetAdditionalAttackersActionPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		ActionType = serialized->get_enum<rivet::ddl::generated::x10228b34>(ActionType_type_id, rivet::ddl::generated::x10228b34_values);
		SmallMelee = serialized->get_bool(SmallMelee_type_id);
		LargeMelee = serialized->get_bool(LargeMelee_type_id);
		StandardRanged = serialized->get_bool(StandardRanged_type_id);
		LargeRanged = serialized->get_bool(LargeRanged_type_id); 
	}

	[[nodiscard]] auto
	SetAdditionalAttackersActionPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	SetAdditionalAttackersActionPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<SetAdditionalAttackersActionPrius> {
		if (incoming_type_id == SetAdditionalAttackersActionPrius::type_id) {
			return std::make_shared<SetAdditionalAttackersActionPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated