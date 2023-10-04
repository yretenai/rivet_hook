// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/RelaxedBarrelDirectionAimingPrius.hpp>

namespace rivet::ddl::generated {
	RelaxedBarrelDirectionAimingPrius::RelaxedBarrelDirectionAimingPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): AimingBasePrius(serialized) {

	}

	[[nodiscard]] auto
	RelaxedBarrelDirectionAimingPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	RelaxedBarrelDirectionAimingPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<RelaxedBarrelDirectionAimingPrius> {
		if (incoming_type_id == RelaxedBarrelDirectionAimingPrius::type_id) {
			return std::make_shared<RelaxedBarrelDirectionAimingPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
