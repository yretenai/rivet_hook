// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/HeroRunSpeedSettings.hpp>

namespace rivet::ddl::generated {
	HeroRunSpeedSettings::HeroRunSpeedSettings([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		RunSpeedMultiplier = serialized->get_float(RunSpeedMultiplier_type_id, 1.200000f);
		RunAnimSpeedMultiplier = serialized->get_float(RunAnimSpeedMultiplier_type_id, 1.150000f);
		DoJumpScaling = serialized->get_bool(DoJumpScaling_type_id, true); 
	}

	[[nodiscard]] auto
	HeroRunSpeedSettings::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	HeroRunSpeedSettings::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<HeroRunSpeedSettings> {
		if (incoming_type_id == HeroRunSpeedSettings::type_id) {
			return std::make_shared<HeroRunSpeedSettings>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
