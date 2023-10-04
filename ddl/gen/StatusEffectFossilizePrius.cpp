// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/StatusEffectFossilizePrius.hpp>

namespace rivet::ddl::generated {
	StatusEffectFossilizePrius::StatusEffectFossilizePrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): StatusEffectBasePrius(serialized) {

	}

	[[nodiscard]] auto
	StatusEffectFossilizePrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	StatusEffectFossilizePrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<StatusEffectFossilizePrius> {
		if (incoming_type_id == StatusEffectFossilizePrius::type_id) {
			return std::make_shared<StatusEffectFossilizePrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
