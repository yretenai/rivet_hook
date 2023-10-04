// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/KamehamehaChargeLevel.hpp>

namespace rivet::ddl::generated {
	KamehamehaChargeLevel::KamehamehaChargeLevel([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		ChargeDuration = serialized->get_float(ChargeDuration_type_id);
		BeamDuration = serialized->get_float(BeamDuration_type_id);
		BeamRadius = serialized->get_float(BeamRadius_type_id); 
	}

	[[nodiscard]] auto
	KamehamehaChargeLevel::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	KamehamehaChargeLevel::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<KamehamehaChargeLevel> {
		if (incoming_type_id == KamehamehaChargeLevel::type_id) {
			return std::make_shared<KamehamehaChargeLevel>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated