// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/Burst.hpp>

namespace rivet::ddl::generated {
	Burst::Burst([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		Type = serialized->get_enum<rivet::ddl::generated::xba90f6fd>(Type_type_id, rivet::ddl::generated::xba90f6fd_values);
		BurstShotsMin = serialized->get_int32(BurstShotsMin_type_id);
		BurstShotsMax = serialized->get_int32(BurstShotsMax_type_id);
		BurstShots = serialized->get_int32(BurstShots_type_id);
		BurstDurationMin = serialized->get_float(BurstDurationMin_type_id);
		BurstDurationMax = serialized->get_float(BurstDurationMax_type_id);
		BurstDuration = serialized->get_float(BurstDuration_type_id);
		BurstRateOfFire = serialized->get_float(BurstRateOfFire_type_id);
		BurstTimeBetweenShots = serialized->get_float(BurstTimeBetweenShots_type_id); 
	}

	[[nodiscard]] auto
	Burst::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	Burst::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<Burst> {
		if (incoming_type_id == Burst::type_id) {
			return std::make_shared<Burst>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
