// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/SubBurst.hpp>
#include <rivet/ddl/generated/Burst.hpp> 

#include <rivet/ddl/generated/BurstSequence.hpp>

namespace rivet::ddl::generated {
	BurstSequence::BurstSequence([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		PrimaryBurst = serialized->unwrap_into<rivet::ddl::generated::Burst>(PrimaryBurst_type_id);
		SubBursts = serialized->unwrap_into_many<rivet::ddl::generated::SubBurst>(SubBursts_type_id);
		TotalDuration = serialized->get_float(TotalDuration_type_id, 0.000000f);
		TotalBurstShots = serialized->get_int32(TotalBurstShots_type_id, 0u);
		WaitDurationMin = serialized->get_float(WaitDurationMin_type_id, 1.000000f);
		WaitDurationMax = serialized->get_float(WaitDurationMax_type_id, 2.000000f);
		WaitDuration = serialized->get_float(WaitDuration_type_id, 0.000000f); 
	}

	[[nodiscard]] auto
	BurstSequence::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	BurstSequence::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<BurstSequence> {
		if (incoming_type_id == BurstSequence::type_id) {
			return std::make_shared<BurstSequence>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
