// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/TargetedAttack.hpp> 

#include <rivet/ddl/generated/AttackTargeterPrius.hpp>

namespace rivet::ddl::generated {
	AttackTargeterPrius::AttackTargeterPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		Attacks = serialized->unwrap_into_many<rivet::ddl::generated::TargetedAttack>(Attacks_type_id);
		TargetedLayer = serialized->get_uint32(TargetedLayer_type_id); 
	}

	[[nodiscard]] auto
	AttackTargeterPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	AttackTargeterPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<AttackTargeterPrius> {
		if (incoming_type_id == AttackTargeterPrius::type_id) {
			return std::make_shared<AttackTargeterPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated