// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/OnSpaceshipReticleTargetChangeActionPrius.hpp>

namespace rivet::ddl::generated {
	OnSpaceshipReticleTargetChangeActionPrius::OnSpaceshipReticleTargetChangeActionPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		ActionType = serialized->get_enum<rivet::ddl::generated::x10228b34>(ActionType_type_id, rivet::ddl::generated::x10228b34_values); 
	}

	[[nodiscard]] auto
	OnSpaceshipReticleTargetChangeActionPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	OnSpaceshipReticleTargetChangeActionPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<OnSpaceshipReticleTargetChangeActionPrius> {
		if (incoming_type_id == OnSpaceshipReticleTargetChangeActionPrius::type_id) {
			return std::make_shared<OnSpaceshipReticleTargetChangeActionPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated