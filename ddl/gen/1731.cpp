// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/HeroSpeedConfigCollection.hpp> 

#include <rivet/ddl/generated/HeroMotionConfig.hpp>

namespace rivet::ddl::generated {
	HeroMotionConfig::HeroMotionConfig([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		StandardSpeeds = serialized->unwrap_into<rivet::ddl::generated::HeroSpeedConfigCollection>(StandardSpeeds_type_id);
		MagBootSpeeds = serialized->unwrap_into<rivet::ddl::generated::HeroSpeedConfigCollection>(MagBootSpeeds_type_id); 
	}

	auto
	HeroMotionConfig::get_type_id() const noexcept -> rivet::rivet_type_id {
		return type_id;
	}

	[[nodiscard]] auto
	HeroMotionConfig::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	HeroMotionConfig::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<HeroMotionConfig> {
		if (incoming_type_id == HeroMotionConfig::type_id) {
			return std::make_shared<HeroMotionConfig>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated