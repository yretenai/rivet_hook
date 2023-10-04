// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/HeroSwimConfig.hpp>

namespace rivet::ddl::generated {
	HeroSwimConfig::HeroSwimConfig([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		SwimSurfaceSpeed = serialized->get_float(SwimSurfaceSpeed_type_id);
		SwimHydropackSpeed = serialized->get_float(SwimHydropackSpeed_type_id); 
	}

	[[nodiscard]] auto
	HeroSwimConfig::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	HeroSwimConfig::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<HeroSwimConfig> {
		if (incoming_type_id == HeroSwimConfig::type_id) {
			return std::make_shared<HeroSwimConfig>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
