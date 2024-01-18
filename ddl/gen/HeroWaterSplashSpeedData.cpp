// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/HeroWaterSplashSpeedData.hpp>

namespace rivet::ddl::generated {
	HeroWaterSplashSpeedData::HeroWaterSplashSpeedData([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		SplashSmallSpeed = serialized->get_float(SplashSmallSpeed_type_id, 1.000000f);
		SplashMediumSpeed = serialized->get_float(SplashMediumSpeed_type_id, 9.000000f);
		SplashLargeSpeed = serialized->get_float(SplashLargeSpeed_type_id, 15.000000f);
		SplashHugeSpeed = serialized->get_float(SplashHugeSpeed_type_id, 20.000000f);
		SplashExitSmallSpeed = serialized->get_float(SplashExitSmallSpeed_type_id, 1.000000f);
		SplashExitMediumSpeed = serialized->get_float(SplashExitMediumSpeed_type_id, 9.000000f);
		SplashExitLargeSpeed = serialized->get_float(SplashExitLargeSpeed_type_id, 15.000000f);
		SplashExitHugeSpeed = serialized->get_float(SplashExitHugeSpeed_type_id, 20.000000f); 
	}

	[[nodiscard]] auto
	HeroWaterSplashSpeedData::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	HeroWaterSplashSpeedData::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<HeroWaterSplashSpeedData> {
		if (incoming_type_id == HeroWaterSplashSpeedData::type_id) {
			return std::make_shared<HeroWaterSplashSpeedData>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
