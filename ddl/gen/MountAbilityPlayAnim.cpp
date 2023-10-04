// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/MountAbilityPlayAnim.hpp>

namespace rivet::ddl::generated {
	MountAbilityPlayAnim::MountAbilityPlayAnim([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): MountAbilityBase(serialized) {
		AttackAnimName = serialized->get_string(AttackAnimName_type_id); 
	}

	[[nodiscard]] auto
	MountAbilityPlayAnim::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	MountAbilityPlayAnim::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<MountAbilityPlayAnim> {
		if (incoming_type_id == MountAbilityPlayAnim::type_id) {
			return std::make_shared<MountAbilityPlayAnim>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
