// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/HeroWetnessConfig.hpp>

namespace rivet::ddl::generated {
	HeroWetnessConfig::HeroWetnessConfig([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		FurWetnessConstant = serialized->get_string(FurWetnessConstant_type_id, "Fur_Wetness");
		FurWindStrengthConstant = serialized->get_string(FurWindStrengthConstant_type_id, "Fur_WindStrength");
		StrandStrengthConstant = serialized->get_string(StrandStrengthConstant_type_id, "ModelStrand_SimulationWindStrength");
		TimeToWet = serialized->get_float(TimeToWet_type_id, 2.000000f);
		TimeToDry = serialized->get_float(TimeToDry_type_id, 5.000000f);
		MaxCeilingHeight = serialized->get_float(MaxCeilingHeight_type_id, 15.000000f); 
	}

	[[nodiscard]] auto
	HeroWetnessConfig::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	HeroWetnessConfig::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<HeroWetnessConfig> {
		if (incoming_type_id == HeroWetnessConfig::type_id) {
			return std::make_shared<HeroWetnessConfig>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
