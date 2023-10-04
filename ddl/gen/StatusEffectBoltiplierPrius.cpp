// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/StatusEffectBoltiplierPrius.hpp>

namespace rivet::ddl::generated {
	StatusEffectBoltiplierPrius::StatusEffectBoltiplierPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): StatusEffectBasePrius(serialized) {

	}

	[[nodiscard]] auto
	StatusEffectBoltiplierPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	StatusEffectBoltiplierPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<StatusEffectBoltiplierPrius> {
		if (incoming_type_id == StatusEffectBoltiplierPrius::type_id) {
			return std::make_shared<StatusEffectBoltiplierPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
