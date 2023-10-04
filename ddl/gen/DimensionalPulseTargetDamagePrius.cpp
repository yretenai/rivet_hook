// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/DimensionalPulseTargetDamagePrius.hpp>

namespace rivet::ddl::generated {
	DimensionalPulseTargetDamagePrius::DimensionalPulseTargetDamagePrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): DimensionalPulseTargetBasePrius(serialized) {

	}

	[[nodiscard]] auto
	DimensionalPulseTargetDamagePrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	DimensionalPulseTargetDamagePrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<DimensionalPulseTargetDamagePrius> {
		if (incoming_type_id == DimensionalPulseTargetDamagePrius::type_id) {
			return std::make_shared<DimensionalPulseTargetDamagePrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
