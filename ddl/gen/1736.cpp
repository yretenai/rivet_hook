// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/HeroAimConfig.hpp>

namespace rivet::ddl::generated {
	HeroAimConfig::HeroAimConfig([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		StandardAimCameraBlend = serialized->get_float(StandardAimCameraBlend_type_id);
		GrenadeAimDelay = serialized->get_float(GrenadeAimDelay_type_id); 
	}

	auto
	HeroAimConfig::get_type_id() const noexcept -> rivet::rivet_type_id {
		return type_id;
	}

	[[nodiscard]] auto
	HeroAimConfig::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	HeroAimConfig::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<HeroAimConfig> {
		if (incoming_type_id == HeroAimConfig::type_id) {
			return std::make_shared<HeroAimConfig>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated