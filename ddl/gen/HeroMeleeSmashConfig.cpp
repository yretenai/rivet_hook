// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/HeroMeleeSmashConfig.hpp>

namespace rivet::ddl::generated {
	HeroMeleeSmashConfig::HeroMeleeSmashConfig([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		MeleeSmashMinHeight = serialized->get_float(MeleeSmashMinHeight_type_id);
		MeleeSmashDescendGravity = serialized->get_float(MeleeSmashDescendGravity_type_id);
		MeleeSmashCameraShakeConfig = serialized->get_string(MeleeSmashCameraShakeConfig_type_id); 
	}

	[[nodiscard]] auto
	HeroMeleeSmashConfig::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	HeroMeleeSmashConfig::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<HeroMeleeSmashConfig> {
		if (incoming_type_id == HeroMeleeSmashConfig::type_id) {
			return std::make_shared<HeroMeleeSmashConfig>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
