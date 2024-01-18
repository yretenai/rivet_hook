// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/HelicopterData.hpp>

namespace rivet::ddl::generated {
	HelicopterData::HelicopterData([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		FlightArea = serialized->get_uint64(FlightArea_type_id, 0ull);
		DeathArea = serialized->get_uint64(DeathArea_type_id, 0ull);
		RandomizeDeathPosition = serialized->get_bool(RandomizeDeathPosition_type_id, false);
		DamagerOffset = serialized->get_float(DamagerOffset_type_id, 0.000000f);
		MoveToBestFirepoint = serialized->get_bool(MoveToBestFirepoint_type_id, false); 
	}

	[[nodiscard]] auto
	HelicopterData::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	HelicopterData::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<HelicopterData> {
		if (incoming_type_id == HelicopterData::type_id) {
			return std::make_shared<HelicopterData>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
