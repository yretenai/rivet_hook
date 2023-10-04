// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/StatusEffectSpeedReductionPrius.hpp>

namespace rivet::ddl::generated {
	StatusEffectSpeedReductionPrius::StatusEffectSpeedReductionPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): StatusEffectBasePrius(serialized) {

	}

	[[nodiscard]] auto
	StatusEffectSpeedReductionPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	StatusEffectSpeedReductionPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<StatusEffectSpeedReductionPrius> {
		if (incoming_type_id == StatusEffectSpeedReductionPrius::type_id) {
			return std::make_shared<StatusEffectSpeedReductionPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated